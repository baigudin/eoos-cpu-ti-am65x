/** 
 * TI AM65x MAIN Domain configuration regisres.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_REG_MAIN_PLL_CFG_HPP_
#define CPU_REG_MAIN_PLL_CFG_HPP_

#include "cpu.reg.PllTypeA.hpp"
#include "cpu.reg.PllTypeB.hpp"

namespace local
{
    namespace cpu
    {
        namespace reg
        {
            struct MainPllCfg
            {

            public:

                /**
                 * Memory address of this registers.
                 */            
                static const intptr ADDRESS = 0x00680000h;

                /** 
                 * Constructor.
                 */  
                MainPllCfg() :
                    pid        (),
                    pllMmrCfg0 (),
                    pllMmrCfg1 (){
                }

                /** 
                 * Destructor.
                 */  
               ~MainPllCfg(){}

                /**
                 * Operator new.
                 *
                 * @param size unused.
                 * @param ptr  address of memory.
                 * @return address of memory.
                 */
                void* operator new(uint32, intptr ptr)
                {
                    return reinterpret_cast<void*>(ptr);
                }     

                /**
                 * 0h Peripheral Identification Register.
                 */
                union Pid
                {
                    Pid(){}
                    Pid(uint32 v){value = v;}
                   ~Pid(){}

                    uint32 value;
                    struct 
                    {
                        uint32 yMinor : 6;
                        uint32 custom : 2;
                        uint32 xMajor : 3;
                        uint32 rRtl   : 5;
                        uint32 func   : 12;
                        uint32 bu     : 2;
                        uint32 scheme : 2;
                    } bit;
                } pid;

            private:        

                uint32 space0_[1];

            public:

                /**
                 * 8h PLL MMR Configuration.
                 */
                union PllMmrCfg0
                {
                    PllMmrCfg0(){}
                    PllMmrCfg0(uint32 v){value = v;}
                   ~PllMmrCfg0(){}

                    uint32 value;
                    struct
                    {
                        uint32 pll0Type  : 2;
                        uint32 pll1Type  : 2;
                        uint32 pll2Type  : 2;
                        uint32 pll3Type  : 2;
                        uint32 pll4Type  : 2;
                        uint32 pll5Type  : 2;
                        uint32 pll6Type  : 2;
                        uint32 pll7Type  : 2;
                        uint32 pll8Type  : 2;
                        uint32 pll9Type  : 2;
                        uint32 pll10Type : 2;
                        uint32 pll11Type : 2;
                        uint32 pll12Type : 2;
                        uint32 pll13Type : 2;
                        uint32 pll14Type : 2;
                        uint32 pll15Type : 2;
                    } bit;
                } pllMmrCfg0;

                /**
                 * Ch PLL MMR Configuration.
                 */
                union PllMmrCfg1
                {
                    PllMmrCfg1(){}
                    PllMmrCfg1(uint32 v){value = v;}
                   ~PllMmrCfg1(){}

                    uint32 value;
                    struct
                    {
                        uint32 pllNum0Hsdiv  : 2;
                        uint32 pllNum1Hsdiv  : 2;
                        uint32 pllNum2Hsdiv  : 2;
                        uint32 pllNum3Hsdiv  : 2;
                        uint32 pllNum4Hsdiv  : 2;
                        uint32 pllNum5Hsdiv  : 2;
                        uint32 pllNum6Hsdiv  : 2;
                        uint32 pllNum7Hsdiv  : 2;
                        uint32 pllNum8Hsdiv  : 2;
                        uint32 pllNum9Hsdiv  : 2;
                        uint32 pllNum10Hsdiv : 2;
                        uint32 pllNum11Hsdiv : 2;
                        uint32 pllNum12Hsdiv : 2;
                        uint32 pllNum13Hsdiv : 2;
                        uint32 pllNum14Hsdiv : 2;
                        uint32 pllNum15Hsdiv : 2;
                    } bit;
                } pllMmrCfg1;
                
                /**
                 * MAIN PLL0.
                 */
                PllTypeB mainPll0;

                /**
                 * PER0 PLL1.
                 */
                PllTypeB per0Pll1;

                /**
                 * PER1 PLL2.
                 */
                PllTypeB per1Pll2;

                /**
                 * DDR PLL3.
                 */
                PllTypeB ddrPll3;

                /**
                 * DSS PLL4.
                 */
                PllTypeB dssPll4;

            private:

                /**
                 * Unused PLL5.
                 */
                PllTypeB space1_;

            public:

                /**
                 * ARM0 PLL6.
                 */
                PllTypeA arm0Pll6_;

                /**
                 * ARM1 PLL7.
                 */
                PllTypeA arm1Pll7_;

            };
        }
    }
} 
#endif // CPU_REG_MAIN_PLL_CFG_HPP_
