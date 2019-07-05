/**
 * TI AM65x R5F WKUP Domain Control Module registers.
 *
 * TODO: The set of the registers is not fully filled with bit-fields.
 *       It will be refreshed by the time it will have been needed.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_REG_WKUP_CTRL_MMR0_HPP_
#define CPU_REG_WKUP_CTRL_MMR0_HPP_

#include "Types.hpp"

namespace local
{
    namespace cpu
    {
        namespace reg
        {
            struct WkupCtrlMmr0
            {

            public:

                /**
                 * Memory address of this registers.
                 */
                static const intptr ADDRESS = 0x43000000;

                /**
                 * Kick protection registers values for partition 0.
                 */
                static const uint32 PARTITION0_KICK0 = 0x68EF3490;
                static const uint32 PARTITION0_KICK1 = 0xD172BC5A;

                /**
                 * Kick protection registers values for partition 1.
                 */
                static const uint32 PARTITION1_KICK0 = 0x68EF3490;
                static const uint32 PARTITION1_KICK1 = 0xD172BC5A;

                /**
                 * Kick protection registers values for partition 2.
                 */
                static const uint32 PARTITION2_KICK0 = 0x68EF3490;
                static const uint32 PARTITION2_KICK1 = 0xD172BC5A;

                /**
                 * Kick protection registers values for partition 3.
                 */
                static const uint32 PARTITION3_KICK0 = 0x68EF3490;
                static const uint32 PARTITION3_KICK1 = 0xD172BC5A;

                /**
                 * Kick protection registers values for partition 6.
                 */
                static const uint32 PARTITION6_KICK0 = 0x68EF3490;
                static const uint32 PARTITION6_KICK1 = 0xD172BC5A;

                /**
                 * Kick protection registers values for partition 7.
                 */
                static const uint32 PARTITION7_KICK0 = 0x68EF3490;
                static const uint32 PARTITION7_KICK1 = 0xD172BC5A;

                /**
                 * Constructor.
                 */
                WkupCtrlMmr0() :
                    pid                              (),
                    mmrCfg1                          (),
                    ctrlmmrWupJagid                  (),
                    jtagDeviceId                     (),
                    devstat                          (),
                    bootcfg                          (),
                    bootProgress                     (),
                    deviceFeature0                   (),
                    deviceFeature2                   (),
                    deviceFeature3                   (),
                    lock0Kick0                       (),
                    lock0Kick1                       (),
                    intrRawStat                      (),
                    intrStatClr                      (),
                    intrEnSet                        (),
                    intrEnClr                        (),
                    faultAddr                        (),
                    faultType                        (),
                    faultAttr                        (),
                    faultClr                         (),
                    mainPwrCtrl                      (),
                    gpioCtrl                         (),
                    spareCtrl1                       (),
                    spareCtrl5                       (),
                    lock1Kick0                       (),
                    lock1Kick1                       (),
                    McuObsclkCtrl                    (),
                    hfosc1Ctrl                       (),
                    rc12mOscTrim                     (),
                    lfoscCtrl                        (),
                    mcuPllClksel                     (),
                    perClksel                        (),
                    usartClksel                      (),
                    gpioClksel                       (),
                    mainSysclkCtrl                   (),
                    lock2Kick0                       (),
                    lock2Kick1                       (),
                    postStat                         (),
                    fuseCrcCtrl                      (),
                    chain1CrcFuse                    (),
                    chain2CrcFuse                    (),
                    chain3CrcFuse                    (),
                    fuseCrcStat                      (),
                    chain1CrcCalc                    (),
                    chain2CrcCalc                    (),
                    chain3CrcCalc                    (),
                    lock3Kick0                       (),
                    lock3Kick1                       (),
                    porCtrl                          (),
                    porStat                          (),
                    prgCtrl                          (),
                    prgStat                          (),
                    poksaPmicVddaCtrl                (),
                    ctrlmmrPok1p5v0WkupCoreVddCtrl   (),
                    pok1p5v1McuCoreVddCtrl           (),
                    ctrlmmrPok3p3v0Wkup1p8ioVddsCtrl (),
                    ctrlmmrPok3p3v1Wkup3p3ioVddsCtrl (),
                    ldoCtrl                          (),
                    sramLdoCtrl                      (),
                    bandgapTrim                      (),
                    mcuVdomCtrlmcu                   (),
                    mainVdomCtrl                     (),
                    tempDiodeTrim                    (),
                    mainPrgCtrl                      (),
                    mainPrgStat                      (),
                    cok1p5v2MainCoreVddCtrl          (),
                    pok1p5v3Mpu0VddCtrl              (),
                    pok1p5v4Mpu1VddCtrl              (),
                    pok1p5v5DdrioVddsCtrlddr         (),
                    pok3p3v2Main1p8ioVddsCtrlmain    (),
                    pok3p3v3Main3p3ioVddsCtrl        (),
                    porRstCtrl                       (),
                    mainWarmRstCtrl                  (),
                    mainRstStat                      (),
                    mcuWarmRstCtrl                   (),
                    mpu0GldtcCtrl                    (),
                    mpu1GldtcCtrl                    (),
                    coreGldtcCtrl                    (),
                    mpu0GldtcStatmpu                 (),
                    mpu1GldtcStat                    (),
                    coreGldtcStat                    (),
                    lock6Kick0                       (),
                    lock6Kick1                       (),
                    lock7Kick0                       (),
                    lock7Kick1                       (){
                }

                /**
                 * Destructor.
                 */
               ~WkupCtrlMmr0(){}

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
                 * 0h Peripheral Identification Register 4300 0000h Section 5.1.1.4.1.
                 */
                union Pid
                {
                    Pid(){}
                    Pid(uint32 v){value = v;}
                   ~Pid(){}

                    uint32 value;
                    struct
                    {
                        uint32 rev : 32;
                    } bit;
                } pid;

            private:

                uint32 space0_[0x1];

            public:

                /**
                 * 8h Configuration register 1 4300 0008h Section 5.1.1.4.2.
                 */
                union MmrCfg1
                {
                    MmrCfg1(){}
                    MmrCfg1(uint32 v){value = v;}
                   ~MmrCfg1(){}

                    uint32 value;
                    struct
                    {
                        uint32 partitions : 8;
                        uint32               : 24;
                    } bit;
                } mmrCfg1;

            private:

                uint32 space1_[0x2];

            public:

                /**
                 * 14h JTAG ID Register 4300 0014h Section 5.1.1.4.3.
                 */
                union CtrlmmrWupJagid
                {
                    CtrlmmrWupJagid(){}
                    CtrlmmrWupJagid(uint32 v){value = v;}
                   ~CtrlmmrWupJagid(){}

                    uint32 value;
                } ctrlmmrWupJagid;

                /**
                 * 18h JTAG Device ID Register 4300 0018h Section 5.1.1.4.4.
                 */
                union JtagDeviceId
                {
                    JtagDeviceId(){}
                    JtagDeviceId(uint32 v){value = v;}
                   ~JtagDeviceId(){}

                    uint32 value;
                } jtagDeviceId;

            private:

                uint32 space2_[0x5];

            public:

                /**
                 * 30h WKUP Domain Device Status Register 4300 0030h Section 5.1.1.4.5.
                 */
                union Devstat
                {
                    Devstat(){}
                    Devstat(uint32 v){value = v;}
                   ~Devstat(){}

                    uint32 value;
                } devstat;

                /**
                 * 34h WKUP Domain Boot Configuration Register 4300 0034h Section 5.1.1.4.6.
                 */
                union Bootcfg
                {
                    Bootcfg(){}
                    Bootcfg(uint32 v){value = v;}
                   ~Bootcfg(){}

                    uint32 value;
                } bootcfg;

            private:

                uint32 space3_[0x3];

            public:

                /**
                 * 44h ROM Boot Progress Register 4300 0044h Section 5.1.1.4.7.
                 */
                union BootProgress
                {
                    BootProgress(){}
                    BootProgress(uint32 v){value = v;}
                   ~BootProgress(){}

                    uint32 value;
                } bootProgress;

            private:

                uint32 space4_[0x6];

            public:

                /**
                 * 60h Device Feature Register 0 4300 0060h Section 5.1.1.4.8.
                 */
                union DeviceFeature0
                {
                    DeviceFeature0(){}
                    DeviceFeature0(uint32 v){value = v;}
                   ~DeviceFeature0(){}

                    uint32 value;
                } deviceFeature0;

            private:

                uint32 space5_[0x1];

            public:

                /**
                 * 68h Device Feature Register 2 4300 0068h Section 5.1.1.4.9.
                 */
                union DeviceFeature2
                {
                    DeviceFeature2(){}
                    DeviceFeature2(uint32 v){value = v;}
                   ~DeviceFeature2(){}

                    uint32 value;
                } deviceFeature2;

                /**
                 * 6Ch Device Feature Register 3 4300 006Ch Section 5.1.1.4.10.
                 */
                union DeviceFeature3
                {
                    DeviceFeature3(){}
                    DeviceFeature3(uint32 v){value = v;}
                   ~DeviceFeature3(){}

                    uint32 value;
                } deviceFeature3;

            private:

                uint32 space6_[0x3E6];

            public:

                /**
                 * 1008h Partition 0 Lock Key 0 Register 4300 1008h Section 5.1.1.4.11.
                 */
                union Lock0Kick0
                {
                    Lock0Kick0(){}
                    Lock0Kick0(uint32 v){value = v;}
                   ~Lock0Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock0Kick0;

                /**
                 * 100Ch Partition 0 Lock Key 1 Register 4300 100Ch Section 5.1.1.4.12.
                 */
                union Lock0Kick1
                {
                    Lock0Kick1(){}
                    Lock0Kick1(uint32 v){value = v;}
                   ~Lock0Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock0Kick1;

                /**
                 * 1010h Interrupt Raw Status Register 4300 1010h Section 5.1.1.4.13.
                 */
                union IntrRawStat
                {
                    IntrRawStat(){}
                    IntrRawStat(uint32 v){value = v;}
                   ~IntrRawStat(){}

                    uint32 value;
                } intrRawStat;

                /**
                 * 1014h Interrupt Status and Clear Register 4300 1014h Section 5.1.1.4.14.
                 */
                union IntrStatClr
                {
                    IntrStatClr(){}
                    IntrStatClr(uint32 v){value = v;}
                   ~IntrStatClr(){}

                    uint32 value;
                } intrStatClr;

                /**
                 * 1018h Interrupt Enable Set Register 4300 1018h Section 5.1.1.4.15.
                 */
                union IntrEnSet
                {
                    IntrEnSet(){}
                    IntrEnSet(uint32 v){value = v;}
                   ~IntrEnSet(){}

                    uint32 value;
                } intrEnSet;

                /**
                 * 101Ch Interrupt Enable Clear Register 4300 101Ch Section 5.1.1.4.16.
                 */
                union IntrEnClr
                {
                    IntrEnClr(){}
                    IntrEnClr(uint32 v){value = v;}
                   ~IntrEnClr(){}

                    uint32 value;
                } intrEnClr;

            private:

                uint32 space7_[0x1];

            public:

                /**
                 * 1024h Fault Address Register 4300 1024h Section 5.1.1.4.17.
                 */
                union FaultAddr
                {
                    FaultAddr(){}
                    FaultAddr(uint32 v){value = v;}
                   ~FaultAddr(){}

                    uint32 value;
                } faultAddr;

                /**
                 * 1028h Fault Type Register 4300 1028h Section 5.1.1.4.18.
                 */
                union FaultType
                {
                    FaultType(){}
                    FaultType(uint32 v){value = v;}
                   ~FaultType(){}

                    uint32 value;
                } faultType;

                /**
                 * 102Ch Fault Attribute Register 4300 102Ch Section 5.1.1.4.19.
                 */
                union FaultAttr
                {
                    FaultAttr(){}
                    FaultAttr(uint32 v){value = v;}
                   ~FaultAttr(){}

                    uint32 value;
                } faultAttr;

                /**
                 * 1030h Fault Clear Register 4300 1030h Section 5.1.1.4.20.
                 */
                union FaultClr
                {
                    FaultClr(){}
                    FaultClr(uint32 v){value = v;}
                   ~FaultClr(){}

                    uint32 value;
                } faultClr;

            private:

                uint32 space8_[0xBF4];

            public:

                /**
                 * 4004h MAIN Voltage Domain Power Control Register 4300 4004h Section 5.1.1.4.21.
                 */
                union MainPwrCtrl
                {
                    MainPwrCtrl(){}
                    MainPwrCtrl(uint32 v){value = v;}
                   ~MainPwrCtrl(){}

                    uint32 value;
                } mainPwrCtrl;

            private:

                uint32 space9_[0x6];

            public:

                /**
                 * 4020h WKUP GPIO Control Register 4300 4020h Section 5.1.1.4.22.
                 */
                union GpioCtrl
                {
                    GpioCtrl(){}
                    GpioCtrl(uint32 v){value = v;}
                   ~GpioCtrl(){}

                    uint32 value;
                } gpioCtrl;

            private:

                uint32 space10_[0x38];

            public:

                /**
                 * 4104h WKUP Spare Control 1 Register 4300 4104h Section 5.1.1.4.23.
                 */
                union SpareCtrl1
                {
                    SpareCtrl1(){}
                    SpareCtrl1(uint32 v){value = v;}
                   ~SpareCtrl1(){}

                    uint32 value;
                } spareCtrl1;

            private:

                uint32 space11_[0x3];

            public:

                /**
                 * 4114h WKUP Spare Control 5 Register 4300 4114h Section 5.1.1.4.24.
                 */
                union SpareCtrl5
                {
                    SpareCtrl5(){}
                    SpareCtrl5(uint32 v){value = v;}
                   ~SpareCtrl5(){}

                    uint32 value;
                } spareCtrl5;

            private:

                uint32 space12_[0x3BC];

            public:

                /**
                 * 5008h Partition 1 Lock Key 0 Register 4300 5008h Section 5.1.1.4.25.
                 */
                union Lock1Kick0
                {
                    Lock1Kick0(){}
                    Lock1Kick0(uint32 v){value = v;}
                   ~Lock1Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock1Kick0;

                /**
                 * 500Ch Partition 1 Lock Key 1 Register 4300 500Ch Section 5.1.1.4.26.
                 */
                union Lock1Kick1
                {
                    Lock1Kick1(){}
                    Lock1Kick1(uint32 v){value = v;}
                   ~Lock1Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock1Kick1;

            private:

                uint32 space13_[0xBFC];

            public:

                /**
                 * 8000h Observe Clock Output Control Register 4300 8000h Section 5.1.1.4.27.
                 */
                union McuObsclkCtrl
                {
                    McuObsclkCtrl(){}
                    McuObsclkCtrl(uint32 v){value = v;}
                   ~McuObsclkCtrl(){}

                    uint32 value;
                } McuObsclkCtrl;

            private:

                uint32 space14_[0x4];

            public:

                /**
                 * 8014h Oscillator1 Control Register 4300 8014h Section 5.1.1.4.28.
                 */
                union Hfosc1Ctrl
                {
                    Hfosc1Ctrl(){}
                    Hfosc1Ctrl(uint32 v){value = v;}
                   ~Hfosc1Ctrl(){}

                    uint32 value;
                } hfosc1Ctrl;

            private:

                uint32 space15_[0x3];

            public:

                /**
                 * 8024h 12.5 MHz RC Oscillator Trim Register 4300 8024h Section 5.1.1.4.29.
                 */
                union Rc12mOscTrim
                {
                    Rc12mOscTrim(){}
                    Rc12mOscTrim(uint32 v){value = v;}
                   ~Rc12mOscTrim(){}

                    uint32 value;
                } rc12mOscTrim;

            private:

                uint32 space16_[0x2];

            public:

                /**
                 * 8030h Low Frequency Oscillator Control Register 4300 8030h Section 5.1.1.4.30.
                 */
                union LfoscCtrl
                {
                    LfoscCtrl(){}
                    LfoscCtrl(uint32 v){value = v;}
                   ~LfoscCtrl(){}

                    uint32 value;
                } lfoscCtrl;


            private:

                uint32 space17_[0x7];

            public:

                /**
                 * 8050h MCU PLL Source Clock Select Register 4300 8050h Section 5.1.1.4.31.
                 */
                union McuPllClksel
                {
                    McuPllClksel(){}
                    McuPllClksel(uint32 v){value = v;}
                   ~McuPllClksel(){}

                    uint32 value;
                    struct
                    {
                        uint32                : 8;
                        uint32 clklossSwtchEn : 1;
                        uint32                : 23;
                    } bit;
                } mcuPllClksel;

            private:

                uint32 space18_[0x3];

            public:

                /**
                 * 8060h WKUP Peripheral Clock Select Register 4300 8060h Section 5.1.1.4.32.
                 */
                union PerClksel
                {
                    PerClksel(){}
                    PerClksel(uint32 v){value = v;}
                   ~PerClksel(){}

                    uint32 value;
                } perClksel;

                /**
                 * 8064h WKUP USART0 Clock Select Register 4300 8064h Section 5.1.1.4.33.
                 */
                union UsartClksel
                {
                    UsartClksel(){}
                    UsartClksel(uint32 v){value = v;}
                   ~UsartClksel(){}

                    uint32 value;
                } usartClksel;

            private:

                uint32 space19_[0x2];

            public:

                /**
                 * 8070h WKUP GPIO Clock Select Register 4300 8070h Section 5.1.1.4.34.
                 */
                union GpioClksel
                {
                    GpioClksel(){}
                    GpioClksel(uint32 v){value = v;}
                   ~GpioClksel(){}

                    uint32 value;
                } gpioClksel;

            private:

                uint32 space20_[0x3];

            public:

                /**
                 * 8080h - 809Ch MAIN PLL0 - PLL4, and PLL6, PLL7 Source Clock Select Registers Section 5.1.1.4.35 - 41
                 *
                 * NOTE: PLL5 is not presented on the SoC. Don't address to the register memory by the 5 index.
                 */
                union MainPllClksel
                {
                    MainPllClksel(){}
                    MainPllClksel(uint32 v){value = v;}
                   ~MainPllClksel(){}

                    uint32 value;
                } mainPllClksel[8];

            private:

                uint32 space21_[0x8];

            public:

                /**
                 * 80C0h MAIN System Clock Control Register 4300 80C0h Section 5.1.1.4.42.
                 */
                union MainSysclkCtrl
                {
                    MainSysclkCtrl(){}
                    MainSysclkCtrl(uint32 v){value = v;}
                   ~MainSysclkCtrl(){}

                    uint32 value;
                } mainSysclkCtrl;

            private:

                uint32 space22_[0x3D1];

            public:

                /**
                 * 9008h Partition 2 Lock Key 0 Register 4300 9008h Section 5.1.1.4.43.
                 */
                union Lock2Kick0
                {
                    Lock2Kick0(){}
                    Lock2Kick0(uint32 v){value = v;}
                   ~Lock2Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock2Kick0;

                /**
                 * 900Ch Partition 2 Lock Key 1 Register 4300 900Ch Section 5.1.1.4.44.
                 */
                union Lock2Kick1
                {
                    Lock2Kick1(){}
                    Lock2Kick1(uint32 v){value = v;}
                   ~Lock2Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock2Kick1;

            private:

                uint32 space23_[0xCAC];

            public:

                /**
                 * C2C0h WKUP Power-On Self Test Status Register 4300C2C0h Section 5.1.1.4.45.
                 */
                union PostStat
                {
                    PostStat(){}
                    PostStat(uint32 v){value = v;}
                   ~PostStat(){}

                    uint32 value;
                } postStat;

            private:

                uint32 space24_[0xF];

            public:

                /**
                 * C300h WKUP eFuse CRC Control Register 4300 C300h Section 5.1.1.4.46.
                 */
                union FuseCrcCtrl
                {
                    FuseCrcCtrl(){}
                    FuseCrcCtrl(uint32 v){value = v;}
                   ~FuseCrcCtrl(){}

                    uint32 value;
                } fuseCrcCtrl;

                /**
                 * C304h WKUP eFuse Chain1 CRC Register 4300 C304h Section 5.1.1.4.47.
                 */
                union Chain1CrcFuse
                {
                    Chain1CrcFuse(){}
                    Chain1CrcFuse(uint32 v){value = v;}
                   ~Chain1CrcFuse(){}

                    uint32 value;
                } chain1CrcFuse;

                /**
                 * C308h WKUP eFuse Chain2 CRC Register 4300 C308h Section 5.1.1.4.48.
                 */
                union Chain2CrcFuse
                {
                    Chain2CrcFuse(){}
                    Chain2CrcFuse(uint32 v){value = v;}
                   ~Chain2CrcFuse(){}

                    uint32 value;
                } chain2CrcFuse;

                /**
                 * C30Ch WKUP eFuse Chain3 CRC Register 4300C30Ch Section 5.1.1.4.49a.
                 */
                union Chain3CrcFuse
                {
                    Chain3CrcFuse(){}
                    Chain3CrcFuse(uint32 v){value = v;}
                   ~Chain3CrcFuse(){}

                    uint32 value;
                } chain3CrcFuse;

            private:

                uint32 space25_[0x4];

            public:

                /**
                 * C320h WKUP eFuse CRC Status Register 4300 C320h Section 5.1.1.4.50.
                 */
                union FuseCrcStat
                {
                    FuseCrcStat(){}
                    FuseCrcStat(uint32 v){value = v;}
                   ~FuseCrcStat(){}

                    uint32 value;
                } fuseCrcStat;

                /**
                 * C324h WKUP eFuse Chain1 Calc CRC Register 4300 C324h Section 5.1.1.4.51.
                 */
                union Chain1CrcCalc
                {
                    Chain1CrcCalc(){}
                    Chain1CrcCalc(uint32 v){value = v;}
                   ~Chain1CrcCalc(){}

                    uint32 value;
                } chain1CrcCalc;

                /**
                 * C328h WKUP eFuse Chain2 Calc CRC Register 4300 C328h Section 5.1.1.4.52.
                 */
                union Chain2CrcCalc
                {
                    Chain2CrcCalc(){}
                    Chain2CrcCalc(uint32 v){value = v;}
                   ~Chain2CrcCalc(){}

                    uint32 value;
                } chain2CrcCalc;

                /**
                 * C32Ch WKUP eFuse Chain3 Calc CRC Register 4300C32Ch Section 5.1.1.4.53.
                 */
                union Chain3CrcCalc
                {
                    Chain3CrcCalc(){}
                    Chain3CrcCalc(uint32 v){value = v;}
                   ~Chain3CrcCalc(){}

                    uint32 value;
                } chain3CrcCalc;

            private:

                uint32 space26_[0x336];

            public:

                /**
                 * D008h Partition 3 Lock Key 0 Register 4300 D008h Section 5.1.1.4.54.
                 */
                union Lock3Kick0
                {
                    Lock3Kick0(){}
                    Lock3Kick0(uint32 v){value = v;}
                   ~Lock3Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock3Kick0;

                /**
                 * D00Ch Partition 3 Lock Key 1 Register 4300D00ChSection 5.1.1.4.55.
                 */
                union Lock3Kick1
                {
                    Lock3Kick1(){}
                    Lock3Kick1(uint32 v){value = v;}
                   ~Lock3Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock3Kick1;

            private:

                uint32 space27_[0x2BFC];

            public:

                /**
                 * 18000h Power-On Reset Control Register 4301 8000h Section 5.1.1.4.56.
                 */
                union PorCtrl
                {
                    PorCtrl(){}
                    PorCtrl(uint32 v){value = v;}
                   ~PorCtrl(){}

                    uint32 value;
                } porCtrl;

                /**
                 * 18004h Power-On Reset Status Register 4301 8004h Section 5.1.1.4.57.
                 */
                union PorStat
                {
                    PorStat(){}
                    PorStat(uint32 v){value = v;}
                   ~PorStat(){}

                    uint32 value;
                } porStat;

                /**
                 * 18008h WKUP PRG Control Register 4301 8008h Section 5.1.1.4.58.
                 */
                union PrgCtrl
                {
                    PrgCtrl(){}
                    PrgCtrl(uint32 v){value = v;}
                   ~PrgCtrl(){}

                    uint32 value;
                } prgCtrl;

                /**
                 * 1800Ch WKUP PRG Status Register 4301 800Ch Section 5.1.1.4.59.
                 */
                union PrgStat
                {
                    PrgStat(){}
                    PrgStat(uint32 v){value = v;}
                   ~PrgStat(){}

                    uint32 value;
                } prgStat;

                /**
                 * 18010h PMIC Voltage Power-OK Control Register 4301 8010h Section 5.1.1.4.60.
                 */
                union PoksaPmicVddaCtrl
                {
                    PoksaPmicVddaCtrl(){}
                    PoksaPmicVddaCtrl(uint32 v){value = v;}
                   ~PoksaPmicVddaCtrl(){}

                    uint32 value;
                } poksaPmicVddaCtrl;

                /**
                 * 18014h WKUP Core Voltage Power-OK Control Register 4301 8014h Section 5.1.1.4.61.
                 */
                union CtrlmmrPok1p5v0WkupCoreVddCtrl
                {
                    CtrlmmrPok1p5v0WkupCoreVddCtrl(){}
                    CtrlmmrPok1p5v0WkupCoreVddCtrl(uint32 v){value = v;}
                   ~CtrlmmrPok1p5v0WkupCoreVddCtrl(){}

                    uint32 value;
                } ctrlmmrPok1p5v0WkupCoreVddCtrl;

                /**
                 * 18018h MCU Core Voltage Power-OK Control Register 4301 8018h Section 5.1.1.4.62.
                 */
                union Pok1p5v1McuCoreVddCtrl
                {
                    Pok1p5v1McuCoreVddCtrl(){}
                    Pok1p5v1McuCoreVddCtrl(uint32 v){value = v;}
                   ~Pok1p5v1McuCoreVddCtrl(){}

                    uint32 value;
                } pok1p5v1McuCoreVddCtrl;

                /**
                 * 1801Ch WKUP 1.8 Volt IO Power-OK Control Register 4301 801Ch Section 5.1.1.4.63.
                 */
                union CtrlmmrPok3p3v0Wkup1p8ioVddsCtrl
                {
                    CtrlmmrPok3p3v0Wkup1p8ioVddsCtrl(){}
                    CtrlmmrPok3p3v0Wkup1p8ioVddsCtrl(uint32 v){value = v;}
                   ~CtrlmmrPok3p3v0Wkup1p8ioVddsCtrl(){}

                    uint32 value;
                } ctrlmmrPok3p3v0Wkup1p8ioVddsCtrl;

                /**
                 * 18020h WKUP 3.3 Volt IO Power-OK Control Register 4301 8020h Section 5.1.1.4.64.
                 */
                union CtrlmmrPok3p3v1Wkup3p3ioVddsCtrl
                {
                    CtrlmmrPok3p3v1Wkup3p3ioVddsCtrl(){}
                    CtrlmmrPok3p3v1Wkup3p3ioVddsCtrl(uint32 v){value = v;}
                   ~CtrlmmrPok3p3v1Wkup3p3ioVddsCtrl(){}

                    uint32 value;
                } ctrlmmrPok3p3v1Wkup3p3ioVddsCtrl;

            private:

                uint32 space28_[0x3];

            public:

                /**
                 * 18030h WKUP LDO Control Register 4301 8030h Section 5.1.1.4.65.
                 */
                union LdoCtrl
                {
                    LdoCtrl(){}
                    LdoCtrl(uint32 v){value = v;}
                   ~LdoCtrl(){}

                    uint32 value;
                } ldoCtrl;

                /**
                 * 18034h WKUP SRAM LDO Control Register 4301 8034h Section 5.1.1.4.66.
                 */
                union SramLdoCtrl
                {
                    SramLdoCtrl(){}
                    SramLdoCtrl(uint32 v){value = v;}
                   ~SramLdoCtrl(){}

                    uint32 value;
                } sramLdoCtrl;

            private:

                uint32 space29_[0x3];

            public:

                /**
                 * 18044h WKUP LDO Bandgap Module Trim Register 4301 8044h Section 5.1.1.4.67.
                 */
                union BandgapTrim
                {
                    BandgapTrim(){}
                    BandgapTrim(uint32 v){value = v;}
                   ~BandgapTrim(){}

                    uint32 value;
                } bandgapTrim;

            private:

                uint32 space30_[0x6];

            public:

                /**
                 * 18060h Voltage Domain Control Register 4301 8060h Section 5.1.1.4.68.
                 */
                union McuVdomCtrlmcu
                {
                    McuVdomCtrlmcu(){}
                    McuVdomCtrlmcu(uint32 v){value = v;}
                   ~McuVdomCtrlmcu(){}

                    uint32 value;
                } mcuVdomCtrlmcu;

            private:

                uint32 space31_[0x3];

            public:

                /**
                 * 18070h MAIN Voltage Domain Control Register 4301 8070h Section 5.1.1.4.69.
                 */
                union MainVdomCtrl
                {
                    MainVdomCtrl(){}
                    MainVdomCtrl(uint32 v){value = v;}
                   ~MainVdomCtrl(){}

                    uint32 value;
                } mainVdomCtrl;

            private:

                uint32 space32_[0xB];

            public:

                /**
                 * 180A0h Temperature diode trim register 4301 80A0h Section 5.1.1.4.70.
                 */
                union TempDiodeTrim
                {
                    TempDiodeTrim(){}
                    TempDiodeTrim(uint32 v){value = v;}
                   ~TempDiodeTrim(){}

                    uint32 value;
                } tempDiodeTrim;

            private:

                uint32 space33_[0x19];

            public:

                /**
                 * 18108h MAIN PRG Control Register 4301 8108h Section 5.1.1.4.71.
                 */
                union MainPrgCtrl
                {
                    MainPrgCtrl(){}
                    MainPrgCtrl(uint32 v){value = v;}
                   ~MainPrgCtrl(){}

                    uint32 value;
                } mainPrgCtrl;

                /**
                 * 1810Ch MAIN PRG Status Register 4301 810Ch Section 5.1.1.4.72.
                 */
                union MainPrgStat
                {
                    MainPrgStat(){}
                    MainPrgStat(uint32 v){value = v;}
                   ~MainPrgStat(){}

                    uint32 value;
                } mainPrgStat;

                /**
                 * 18110h MAIN Core Voltage Power-OK Control Register 4301 8110h Section 5.1.1.4.73.
                 */
                union Pok1p5v2MainCoreVddCtrl
                {
                    Pok1p5v2MainCoreVddCtrl(){}
                    Pok1p5v2MainCoreVddCtrl(uint32 v){value = v;}
                   ~Pok1p5v2MainCoreVddCtrl(){}

                    uint32 value;
                } cok1p5v2MainCoreVddCtrl;

                /**
                 * 18114h MPU0 Voltage Power-OK Control Register 4301 8114h Section 5.1.1.4.74.
                 */
                union Pok1p5v3Mpu0VddCtrl
                {
                    Pok1p5v3Mpu0VddCtrl(){}
                    Pok1p5v3Mpu0VddCtrl(uint32 v){value = v;}
                   ~Pok1p5v3Mpu0VddCtrl(){}

                    uint32 value;
                } pok1p5v3Mpu0VddCtrl;

                /**
                 * 18118h MPU1 Voltage Power-OK Control Register 4301 8118h Section 5.1.1.4.75.
                 */
                union Pok1p5v4Mpu1VddCtrl
                {
                    Pok1p5v4Mpu1VddCtrl(){}
                    Pok1p5v4Mpu1VddCtrl(uint32 v){value = v;}
                   ~Pok1p5v4Mpu1VddCtrl(){}

                    uint32 value;
                } pok1p5v4Mpu1VddCtrl;

                /**
                 * 1811Ch IO Voltage Power-OK Control Register 4301 811Ch Section 5.1.1.4.76.
                 */
                union Pok1p5v5DdrioVddsCtrlddr
                {
                    Pok1p5v5DdrioVddsCtrlddr(){}
                    Pok1p5v5DdrioVddsCtrlddr(uint32 v){value = v;}
                   ~Pok1p5v5DdrioVddsCtrlddr(){}

                    uint32 value;
                } pok1p5v5DdrioVddsCtrlddr;

                /**
                 * 18120h 1.8 Volt IO Power-OK Control Register 4301 8120h Section 5.1.1.4.77.
                 */
                union Pok3p3v2Main1p8ioVddsCtrlmain
                {
                    Pok3p3v2Main1p8ioVddsCtrlmain(){}
                    Pok3p3v2Main1p8ioVddsCtrlmain(uint32 v){value = v;}
                   ~Pok3p3v2Main1p8ioVddsCtrlmain(){}

                    uint32 value;
                } pok3p3v2Main1p8ioVddsCtrlmain;

                /**
                 * 18124h MAIN 3.3 Volt IO Power-OK Control Register 4301 8124h Section 5.1.1.4.78.
                 */
                union Pok3p3v3Main3p3ioVddsCtrl
                {
                    Pok3p3v3Main3p3ioVddsCtrl(){}
                    Pok3p3v3Main3p3ioVddsCtrl(uint32 v){value = v;}
                   ~Pok3p3v3Main3p3ioVddsCtrl(){}

                    uint32 value;
                } pok3p3v3Main3p3ioVddsCtrl;

            private:

                uint32 space34_[0x12];

            public:

                /**
                 * 18170h PowerOn Reset Control Register 4301 8170h Section 5.1.1.4.79.
                 */
                union PorRstCtrl
                {
                    PorRstCtrl(){}
                    PorRstCtrl(uint32 v){value = v;}
                   ~PorRstCtrl(){}

                    uint32 value;
                } porRstCtrl;

                /**
                 * 18174h MAIN Domain Warm Reset Control Register 4301 8174h Section 5.1.1.4.80.
                 */
                union MainWarmRstCtrl
                {
                    MainWarmRstCtrl(){}
                    MainWarmRstCtrl(uint32 v){value = v;}
                   ~MainWarmRstCtrl(){}

                    uint32 value;
                } mainWarmRstCtrl;

                /**
                 * 18178h MAIN Domain Reset Status Register 4301 8178h Section 5.1.1.4.81.
                 */
                union MainRstStat
                {
                    MainRstStat(){}
                    MainRstStat(uint32 v){value = v;}
                   ~MainRstStat(){}

                    uint32 value;
                } mainRstStat;

                /**
                 * 1817Ch MCU Domain Warm Reset Control Register 4301 817Ch Section 5.1.1.4.82.
                 */
                union McuWarmRstCtrl
                {
                    McuWarmRstCtrl(){}
                    McuWarmRstCtrl(uint32 v){value = v;}
                   ~McuWarmRstCtrl(){}

                    uint32 value;
                } mcuWarmRstCtrl;

                /**
                 * 18180h MPU Cluster 0 Glitch Detect Control Register 4301 8180h Section 5.1.1.4.83.
                 */
                union Mpu0GldtcCtrl
                {
                    Mpu0GldtcCtrl(){}
                    Mpu0GldtcCtrl(uint32 v){value = v;}
                   ~Mpu0GldtcCtrl(){}

                    uint32 value;
                } mpu0GldtcCtrl;

                /**
                 * 18184h MPU Cluster 1 Glitch Detect Control Register 4301 8184h Section 5.1.1.4.84.
                 */
                union Mpu1GldtcCtrl
                {
                    Mpu1GldtcCtrl(){}
                    Mpu1GldtcCtrl(uint32 v){value = v;}
                   ~Mpu1GldtcCtrl(){}

                    uint32 value;
                } mpu1GldtcCtrl;

            private:

                uint32 space35_[0x2];

            public:

                /**
                 * 18190h Core Glitch Detect Control Register 4301 8190h Section 5.1.1.4.85.
                 */
                union CoreGldtcCtrl
                {
                    CoreGldtcCtrl(){}
                    CoreGldtcCtrl(uint32 v){value = v;}
                   ~CoreGldtcCtrl(){}

                    uint32 value;
                } coreGldtcCtrl;

            private:

                uint32 space36_[0x3];

            public:

                /**
                 * 181A0h Cluster 0 Glitch Detect Status Register 4301 81A0h Section5.1.1.4.86.
                 */
                union Mpu0GldtcStatmpu
                {
                    Mpu0GldtcStatmpu(){}
                    Mpu0GldtcStatmpu(uint32 v){value = v;}
                   ~Mpu0GldtcStatmpu(){}

                    uint32 value;
                } mpu0GldtcStatmpu;

                /**
                 * 181A4h MPU Cluster 1 Glitch Detect Status Register 4301 81A4h Section 5.1.1.4.87.
                 */
                union Mpu1GldtcStat
                {
                    Mpu1GldtcStat(){}
                    Mpu1GldtcStat(uint32 v){value = v;}
                   ~Mpu1GldtcStat(){}

                    uint32 value;
                } mpu1GldtcStat;

            private:

                uint32 space37_[0x2];

            public:

                /**
                 * 181B0h Core Glitch Detect Status Register 4301 81B0h Section 5.1.1.4.88.
                 */
                union CoreGldtcStat
                {
                    CoreGldtcStat(){}
                    CoreGldtcStat(uint32 v){value = v;}
                   ~CoreGldtcStat(){}

                    uint32 value;
                } coreGldtcStat;

            private:

                uint32 space38_[0x395];

            public:

                /**
                 * 19008h Partition 6 Lock Key 0 Register 4301 9008h Section 5.1.1.4.89.
                 */
                union Lock6Kick0
                {
                    Lock6Kick0(){}
                    Lock6Kick0(uint32 v){value = v;}
                   ~Lock6Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock6Kick0;

                /**
                 * 1900Ch Partition 6 Lock Key 1 Register 4301 900Ch Section 5.1.1.4.90.
                 */
                union Lock6Kick1
                {
                    Lock6Kick1(){}
                    Lock6Kick1(uint32 v){value = v;}
                   ~Lock6Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock6Kick1;

            private:

                uint32 space39_[0xBFC];

            public:

                /**
                 * 1C000h - 1C114h PADCONFIG0 - PADCONFIG69 PAD Configuration Registers Section 5.1.1.4.91 - 160.
                 */
                union Padconfig
                {
                    Padconfig(){}
                    Padconfig(uint32 v){value = v;}
                   ~Padconfig(){}

                    uint32 value;
                } padconfig[70];

            private:

                uint32 space40_[0x3BC];

            public:

                /**
                 * 1D008h Partition 7 Lock Key 0 Register 4301 D008h Section 5.1.1.4.161.
                 */
                union Lock7Kick0
                {
                    Lock7Kick0(){}
                    Lock7Kick0(uint32 v){value = v;}
                   ~Lock7Kick0(){}

                    uint32 value;
                    struct
                    {
                        uint32 unlocked : 1;
                        uint32 key      : 31;
                    } bit;
                } lock7Kick0;

                /**
                 * 1D00Ch Partition 7 Lock Key 1 Register    4301 D00Ch Section 5.1.1.4.162        .
                 */
                union Lock7Kick1
                {
                    Lock7Kick1(){}
                    Lock7Kick1(uint32 v){value = v;}
                   ~Lock7Kick1(){}

                    uint32 value;
                    struct
                    {
                        uint32 key : 32;
                    } bit;
                } lock7Kick1;

            public:

                /**
                 * Test if registers access is locked.
                 *
                 * @param index - an index of a partition that is one of 0, 1, 2, 3, 6, or 7
                 * @return true if access is denied.
                 */
                bool isLocked(int32 const index) const
                {
                    bool res;
                    switch(index)
                    {
                        case 0:
                            res = (this->lock0Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        case 1:
                            res = (this->lock1Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        case 2:
                            res = (this->lock2Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        case 3:
                            res = (this->lock3Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        case 6:
                            res = (this->lock6Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        case 7:
                            res = (this->lock7Kick0.bit.unlocked == 0) ? true : false;
                            break;
                        default:
                            res = false;
                            break;
                    }
                    return res;
                }

                /**
                 * Unlocks registers access.
                 *
                 * @param index - an index of a partition that is one of 0, 1, 2, 3, 6, or 7
                 * @return a lock status before this function was called.
                 */
                bool unlock(int32 const index)
                {
                    bool const isLocked = this->isLocked(index);
                    if( isLocked )
                    {
                        switch(index)
                        {
                            case 0:
                                lock0Kick0.value = PARTITION0_KICK0;
                                lock0Kick1.value = PARTITION0_KICK1;
                                break;
                            case 1:
                                lock1Kick0.value = PARTITION1_KICK0;
                                lock1Kick1.value = PARTITION1_KICK1;
                                break;
                            case 2:
                                lock2Kick0.value = PARTITION2_KICK0;
                                lock2Kick1.value = PARTITION2_KICK1;
                                break;
                            case 3:
                                lock3Kick0.value = PARTITION3_KICK0;
                                lock3Kick1.value = PARTITION3_KICK1;
                                break;
                            case 6:
                                lock6Kick0.value = PARTITION6_KICK0;
                                lock6Kick1.value = PARTITION6_KICK1;
                                break;
                            case 7:
                                lock7Kick0.value = PARTITION7_KICK0;
                                lock7Kick1.value = PARTITION7_KICK1;
                                break;
                            default:
                                break;
                        }
                    }
                    return isLocked;
                }

                /**
                 * Locks registers access.
                 *
                 * @param index - an index of a partition that is one of 0, 1, 2, 3, 6, or 7
                 * @param isLocked - returned status by the unlock function, or true for directly locking the access.
                 */
                void lock(int32 const index, bool const isLocked)
                {
                    if( isLocked )
                    {
                        switch(index)
                        {
                            case 0:
                                lock0Kick0.value = 0;
                                lock0Kick1.value = 0;
                                break;
                            case 1:
                                lock1Kick0.value = 0;
                                lock1Kick1.value = 0;
                                break;
                            case 2:
                                lock2Kick0.value = 0;
                                lock2Kick1.value = 0;
                                break;
                            case 3:
                                lock3Kick0.value = 0;
                                lock3Kick1.value = 0;
                                break;
                            case 6:
                                lock6Kick0.value = 0;
                                lock6Kick1.value = 0;
                                break;
                            case 7:
                                lock7Kick0.value = 0;
                                lock7Kick1.value = 0;
                                break;
                            default:
                                break;
                        }
                    }
                }

                /**
                 * Unlocks registers access of all the partitions.
                 *
                 * @return a lock status of all the partitions before this function was called.
                 */
                int32 unlock()
                {
                    int32 isLocked = 0;
                    for(int32 i=0; i<8; i++)
                    {
                        // The partitions are not had
                        if(i == 4 || i == 5)
                        {
                            continue;
                        }
                        bool is = unlock(i);
                        int32 flag = ( is == true ) ? 0x1 : 0x0;
                        isLocked |= flag << i;
                    }
                    return isLocked;
                }

                /**
                 * Locks registers access.
                 *
                 * @param isLocked - returned status by the unlock function, or true for directly locking the access.
                 */
                void lock(int32 const isLocked = 0x000000CF)
                {
                    for(int32 i=0; i<8; i++)
                    {
                        // The partitions are not had
                        if(i == 4 || i == 5)
                        {
                            continue;
                        }
                        bool is = ( (isLocked >> i & 0x1) == 0x1 ) ? true : false;
                        lock(i, is);
                    }
                }

            };
        }
    }
}
#endif // CPU_REG_WKUP_CTRL_MMR0_HPP_
