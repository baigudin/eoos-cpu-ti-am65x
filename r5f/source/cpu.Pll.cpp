/** 
 * TI AM65x R5F MCU Phase-Locked Loop Controller.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#include "cpu.Pll.hpp"
#include "cpu.reg.WkupCtrlMmr0.hpp"

namespace local
{
    namespace cpu
    {
        /**
         * Constructor.
         *
         * @param config a operating system configuration.
         */
        Pll::Pll(const Configuration& config) : Parent(),
            config_          (config){
            bool const isConstructed = construct();
            setConstructed( isConstructed );
        }
        
        /** 
         * Destructor.
         */
        Pll::~Pll()
        {
        }
        
        /**
         * Tests if this object has been constructed.
         *
         * @return true if object has been constructed successfully.
         */    
        bool Pll::isConstructed() const
        {
            return Parent::isConstructed();
        }
        
        /**
         * Creates a new HW PLL resource.
         *
         * @return a new PLL resource, or NULL if an error has been occurred.
         */
        api::CpuPll* Pll::create()
        {
            return NULL;
        }

        /**
         * Constructs this object.
         *
         * @return true if object has been constructed successfully.     
         */    
        bool Pll::construct()
        {
            bool res = Self::isConstructed();
            while(res == true)
            {
                // Check configuration
                if( config_.cpuClock == 0 || config_.sourceClock == 0 )
                {
                    res = false;
                    continue;
                }
                // Configures PLLs
                res = configure();
                break;
            }
            return res;
        }

        /**
         * Configures PLLs.
         *
         * @return true if configuration has been constructed successfully.
         */
        bool Pll::configure()
        {
            bool res = Self::isConstructed();
            while(res == true)
            {
                // Enables automatic switching of MCU PLL0 and PLL1 clock source
                // to 12 MHz of CLK_12M_RC if HFOSC0 clock loss is detected,
                // as better to stay working then stop an execution of an program.
                //
                // TODO: Maybe it is better to notify an operating system or/and user
                //       that HFOSC0 clock loss is detected. And further recalculate all the frequencies of peripherals.
                reg::WkupCtrlMmr0* regWkupCtrlMmr0 = new (reg::WkupCtrlMmr0::ADDRESS) reg::WkupCtrlMmr0();
                int32 const is = regWkupCtrlMmr0->unlock();
                regWkupCtrlMmr0->mcuPllClksel.bit.clklossSwtchEn = 1;
                regWkupCtrlMmr0->lock(is);



                // The construction completed successfully
                break;
            }
            return res;
        }
    }
}
