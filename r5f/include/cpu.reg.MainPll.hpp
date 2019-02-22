/** 
 * TI AM65x Phase-Locked Loop Controller.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_REG_MAIN_PLL_HPP_
#define CPU_REG_MAIN_PLL_HPP_

#include "Types.hpp"

namespace local
{
    namespace cpu
    {
        namespace reg
        {
            struct MainPll
            {

            public:

                /**
                 * Memory address of this registers.
                 */            
                static const intptr ADDRESS = 0x00680000h;

                /** 
                 * Constructor.
                 */  
                MainPll() :
                    pid        (),
                    pllMmrCfg0 (),
                    pllMmrCfg1 (){
                }

                /** 
                 * Destructor.
                 */  
               ~MainPll(){}

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
                 * MCU PLL.
                 */
                struct Pll
                {
                
                public:
                
                    /**
                     * Unlock values of KICK registers.
                     */
                    static const uint32 PLL_KICK0 = 0x68EF3490;
                    static const uint32 PLL_KICK1 = 0xD172BC5A;
                
                    /** 
                     * Constructor.
                     */  
                    Pll() :
                        kick0        (),
                        kick1        (),
                        pllFreqCtrl0 (),
                        pllFreqCtrl1 (),
                        pllClkdiv    (),
                        pllProg      (),
                        pllCtrl      (),
                        pllStat      (),
                        pllPwrCtrl   (),
                        pllPwrStat   (),
                        pllSsSpread  (),
                        pllSsModfreq (),
                        hsdivClkdiv  (),
                        hsdivCtrl    (),
                        hsdivStat    (),
                        hsdivPwrCtrl (),
                        hsdivPwrStat (){
                    }
                
                    /** 
                     * Destructor.
                     */  
                   ~Pll(){}
                
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
                     * 10h PLL0/1 Lock Key 0 Register.
                     */
                    union Kick0
                    {
                        Kick0(){}
                        Kick0(uint32 v){value = v;}
                       ~Kick0(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 unlocked : 1;
                            uint32 key      : 31;
                        } bit;
                    } kick0;
                
                    /**
                     * 14h PLL0/1 Lock Key 1 Register.
                     */
                    union Kick1
                    {
                        Kick1(){}
                        Kick1(uint32 v){value = v;}
                       ~Kick1(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 key : 32;
                        } bit;
                    } kick1;
                
                private:
                
                    uint32 space0_[0x2];
                
                public:
                
                    /**
                     * 20h PLL Frequency Control 0 Register.
                     */
                    union PllFreqCtrl0
                    {
                        PllFreqCtrl0(){}
                        PllFreqCtrl0(uint32 v){value = v;}
                       ~PllFreqCtrl0(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 nDiv     : 7;
                            uint32          : 1;
                            uint32 mIntMult : 11;
                            uint32          : 13;
                        } bit;
                    } pllFreqCtrl0;
                
                    /**
                     * 24h PLL Frequency Control 1 Register.
                     */
                    union PllFreqCtrl1
                    {
                        PllFreqCtrl1(){}
                        PllFreqCtrl1(uint32 v){value = v;}
                       ~PllFreqCtrl1(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 mFracMult : 18;
                            uint32           : 14;
                        } bit;
                    } pllFreqCtrl1;
                
                    /**
                     * 28h PLL Output Clock Divider Register.
                     */
                    union PllClkdiv
                    {
                        PllClkdiv(){}
                        PllClkdiv(uint32 v){value = v;}
                       ~PllClkdiv(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 m1Div : 4;
                            uint32       : 4;
                            uint32 m2Div : 5;
                            uint32       : 3;
                            uint32 m3Div : 5;
                            uint32       : 11;
                        } bit;
                    } pllClkdiv;
                
                    /**
                     * 2Ch PLL Programming Register.
                     */
                    union PllProg
                    {
                        PllProg(){}
                        PllProg(uint32 v){value = v;}
                       ~PllProg(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 progSm  : 2;
                            uint32         : 6;
                            uint32 divProg : 1;
                            uint32         : 23;
                        } bit;
                    } pllProg;
                
                    /**
                     * 30h PLL Control Register.
                     */
                    union PllCtrl
                    {
                        PllCtrl(){}
                        PllCtrl(uint32 v){value = v;}
                       ~PllCtrl(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 clkoutbypassEn : 1;
                            uint32 clkouthifEn    : 1;
                            uint32 clkoutx2En     : 1;
                            uint32 clkoutEn       : 1;
                            uint32 clkdcoldoEn    : 1;
                            uint32                : 2;
                            uint32 idle           : 1;
                            uint32 clkrampRate    : 3;
                            uint32                : 1;
                            uint32 clkrampLevel   : 2;
                            uint32                : 1;
                            uint32 ulowclkEn      : 1;
                            uint32 driftguardEn   : 1;
                            uint32 regm4xEn       : 1;
                            uint32 clkinphifSel   : 1;
                            uint32 relockRampEn   : 1;
                            uint32 cycleslipEn    : 1;
                            uint32 lowcurrstby    : 1;
                            uint32 relaxedLock    : 1;
                            uint32 lpmode         : 1;
                            uint32 bwControl      : 2;
                            uint32                : 1;
                            uint32 dcCorrectorEn  : 1;
                            uint32                : 2;
                            uint32 downspread     : 1;
                            uint32 sscEn          : 1;
                        } bit;
                    } pllCtrl;
                
                    /**
                     * 34h PLL Status Register.
                     */
                    union PllStat
                    {
                        PllStat(){}
                        PllStat(uint32 v){value = v;}
                       ~PllStat(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 clkoutbypassEnAck : 1;
                            uint32 clkouthifEnAck    : 1;
                            uint32 clkoutx2EnAck     : 1;
                            uint32 clkoutEnAck       : 1;
                            uint32 clkdcoldoEnAck    : 1;
                            uint32                   : 2;
                            uint32 bypassAck         : 1;
                            uint32                   : 1;
                            uint32 m1changeAck       : 1;
                            uint32 m2changeAck       : 1;
                            uint32 m3changeAck       : 1;
                            uint32                   : 2;
                            uint32 bypassClktype     : 1;
                            uint32                   : 4;
                            uint32 tvalid            : 1;
                            uint32                   : 1;
                            uint32 lock2             : 1;
                            uint32 highjitter        : 1;
                            uint32 phaselock         : 1;
                            uint32 freqlock          : 1;
                            uint32 lossref           : 1;
                            uint32 recal             : 1;
                            uint32                   : 3;
                            uint32 ssAck             : 1;
                        } bit;
                    } pllStat;
                
                    /**
                     * 38h PLL Power Control Register.
                     */
                    union PllPwrCtrl
                    {
                        PllPwrCtrl(){}
                        PllPwrCtrl(uint32 v){value = v;}
                       ~PllPwrCtrl(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 soPreZ      : 1;
                            uint32 isoscanPreZ : 1;
                            uint32             : 6;
                            uint32 offmode     : 1;
                            uint32             : 7;
                            uint32 isoClr      : 1;
                            uint32 isoscanClr  : 1;
                            uint32             : 2;
                            uint32 isoret      : 1;
                            uint32 isoscan     : 1;
                            uint32             : 1;
                            uint32 ret         : 1;
                            uint32             : 6;
                            uint32 pgoodin     : 1;
                            uint32 ponin       : 1;
                        } bit;
                    } pllPwrCtrl;
                
                    /**
                     * 3Ch PLL Power Status Register.
                     */
                    union PllPwrStat
                    {
                        PllPwrStat(){}
                        PllPwrStat(uint32 v){value = v;}
                       ~PllPwrStat(){}
                
                        uint32 value;
                        struct
                        {
                            uint32          : 14;
                            uint32 ldopwdn  : 1;
                            uint32 ticopwdn : 1;
                            uint32          : 14;
                            uint32 pgoodout : 1;
                            uint32 ponout   : 1;
                        } bit;
                    } pllPwrStat;
                
                    /**
                     * 40h PLL Spread Spectrum Frequency Spread Control Register.
                     */
                    union PllSsSpread
                    {
                        PllSsSpread(){}
                        PllSsSpread(uint32 v){value = v;}
                       ~PllSsSpread(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 deltaMstepFrac : 18;
                            uint32                : 6;
                            uint32 deltaMstepInt  : 2;
                            uint32                : 6;
                        } bit;
                    } pllSsSpread;
                
                    /**
                     * 44h PLL Spread Spectrum Modulation Frequency Control Register.
                     */
                    union PllSsModfreq
                    {
                        PllSsModfreq(){}
                        PllSsModfreq(uint32 v){value = v;}
                       ~PllSsModfreq(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 modfreqDivMant : 7;
                            uint32                : 1;
                            uint32 modfreqDivExp  : 3;
                            uint32                : 21;
                        } bit;
                    } pllSsModfreq;
                
                private:
                
                    uint32 space1_[0x36];
                
                public:
                
                    /**
                     * 120h High Speed Divider Clock Divider Register.
                     */
                    union HsdivClkdiv
                    {
                        HsdivClkdiv(){}
                        HsdivClkdiv(uint32 v){value = v;}
                       ~HsdivClkdiv(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 hsdiv1 : 6;
                            uint32        : 2;
                            uint32 hsdiv2 : 6;
                            uint32        : 2;
                            uint32 hsdiv3 : 6;
                            uint32        : 2;
                            uint32 hsdiv4 : 6;
                            uint32        : 2;
                        } bit;
                    } hsdivClkdiv;
                
                    /**
                     * 124h High Speed Divider Control Register.
                     */
                    union HsdivCtrl
                    {
                        HsdivCtrl(){}
                        HsdivCtrl(uint32 v){value = v;}
                       ~HsdivCtrl(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 clkout1En : 1;
                            uint32 clkout2En : 1;
                            uint32 clkout3En : 1;
                            uint32 clkout4En : 1;
                            uint32           : 12;
                            uint32 sparein   : 5;
                            uint32           : 10;
                            uint32 tenabldiv : 1;
                        } bit;
                    } hsdivCtrl;
                
                    /**
                     * 128h High Speed Divider Status Register.
                     */
                    union HsdivStat
                    {
                        HsdivStat(){}
                        HsdivStat(uint32 v){value = v;}
                       ~HsdivStat(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 clkout1EnAck  : 1;
                            uint32 clkout2EnAck  : 1;
                            uint32 clkout3EnAck  : 1;
                            uint32 clkout4EnAck  : 1;
                            uint32               : 4;
                            uint32 div1ChangeAck : 1;
                            uint32 div2ChangeAck : 1;
                            uint32 div3ChangeAck : 1;
                            uint32 div4ChangeAck : 1;
                            uint32               : 3;
                            uint32 lock          : 1;
                            uint32 spareout      : 5;
                            uint32               : 11;
                        } bit;
                    } hsdivStat;
                
                    /**
                     * 12Ch High Speed Divider Power Control Register.
                     */
                    union HsdivPwrCtrl
                    {
                        HsdivPwrCtrl(){}
                        HsdivPwrCtrl(uint32 v){value = v;}
                       ~HsdivPwrCtrl(){}
                
                        uint32 value;
                        struct
                        {
                            uint32 isoPreZ : 1;
                            uint32         : 7;
                            uint32 aipoff  : 1;
                            uint32         : 7;
                            uint32 isoClr  : 1;
                            uint32         : 3;
                            uint32 iso     : 1;
                            uint32         : 2;
                            uint32 ret     : 1;
                            uint32         : 6;
                            uint32 pgoodin : 1;
                            uint32 ponin   : 1;
                        } bit;
                    } hsdivPwrCtrl;
                
                    /**
                     * 130h High Speed Divider Power Status Register.
                     */
                    union HsdivPwrStat
                    {
                        HsdivPwrStat(){}
                        HsdivPwrStat(uint32 v){value = v;}
                       ~HsdivPwrStat(){}
                
                        uint32 value;
                        struct
                        {
                            uint32          : 12;
                            uint32 ldopwdn  : 1;
                            uint32          : 13;
                            uint32 pgoodout : 1;
                            uint32 ponout   : 1;
                        } bit;
                    } hsdivPwrStat;
                
                    /**
                     * Unlocks registers access.
                     *
                     * @return a lock status before this function was called.
                     */
                    bool isLocked() const
                    {
                        return (this->kick0.bit.unlocked == 0) ? true : false;
                    }
                
                    /**
                     * Unlocks registers access.
                     *
                     * @return a lock status before this function was called.
                     */
                    bool unlock()
                    {
                        bool const isLocked = this->isLocked();
                        if( isLocked )
                        {
                            kick0.value = PLL_KICK0;
                            kick1.value = PLL_KICK1;
                        }
                        return isLocked;
                    }
                
                    /**
                     * Locks registers access.
                     *
                     * @param isLocked - returned status by the unlock function, or true for directly locking the access.
                     */
                    void lock(bool isLocked = true)
                    {
                        if( isLocked )
                        {
                            kick0.value = 0;
                            kick1.value = 0;
                        }
                    }
                
                private:
                
                    /**
                     * NOTE: The gap is defined to allow to declare an array of variables of this type
                     * in a MCU or MAIN PLL domains.
                     */
                    uint32 space2_[0x3B7];
                
                public:                
                
                } pll[8];

            };
        }
    }
} 
#endif // CPU_REG_MAIN_PLL_HPP_
