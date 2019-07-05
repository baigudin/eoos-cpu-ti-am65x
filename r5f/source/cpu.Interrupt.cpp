/**
 * TI AM65x R5F MCU Interrupt Controller.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#include "cpu.Interrupt.hpp"
#include "cpu.reg.McuVim.hpp"

namespace local
{
    namespace cpu
    {
        /**
         * Constructor.
         *
         * @param config - a operating system configuration.
         * @param coreId - an ID of this CPU executing core.
         */
        Interrupt::Interrupt(const Configuration& config, int32 coreId) : Parent(),
            config_    (config),
            regMcuVim_ (NULL){
            bool const isConstructed = construct(coreId);
            setConstructed( isConstructed );
        }

        /**
         * Destructor.
         */
        Interrupt::~Interrupt()
        {
        }

        /**
         * Tests if this object has been constructed.
         *
         * @return true if object has been constructed successfully.
         */
        bool Interrupt::isConstructed() const
        {
            return Parent::isConstructed();
        }

        /**
         * Creates a new HW interrupt resource.
         *
         * @param handler - user class which implements an interrupt handler interface.
         * @param source  - available interrupt source number.
         * @return a new interrupt resource, or NULL if an error has been occurred.
         */
        api::CpuInterrupt* Interrupt::create(api::Task& handler, int32 const source)
        {
            return NULL;
        }

        /**
         * Constructs this object.
         *
         * @param config - a operating system configuration.
         * @return true if object has been constructed successfully.
         */
        bool Interrupt::construct(int32 coreId)
        {
            bool res = Self::isConstructed();
            while(res == true)
            {
                if( config_.cpuClock == 0 || config_.sourceClock == 0 )
                {
                    res = false;
                    continue;
                }
                // Create VIM registers map
                intptr address;
                switch(coreId)
                {
                    case 0:
                        address = reg::McuVim::ADDRESS0;
                        break;

                    case 1:
                        address = reg::McuVim::ADDRESS1;
                        break;

                    default:
                        res = false;
                        continue;
                }
                regMcuVim_ = new (address) reg::McuVim();

                // The construction completed successfully
                break;
            }
            return res;
        }
    }
}
