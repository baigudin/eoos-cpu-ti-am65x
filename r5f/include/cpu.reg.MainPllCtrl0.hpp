/** 
 * TI AM65x MAIN Domain PLL Control registers.
 *
 * TODO: The set of the registers is not fully filled with bit-fields. 
 *       It will be refreshed by the time it will have been needed.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_REG_MAIN_PLL_CTRL0_HPP_
#define CPU_REG_MAIN_PLL_CTRL0_HPP_

#include "Types.hpp"

namespace local
{
    namespace cpu
    {
        namespace reg
        {
            struct MainPllCtrl0
            {

            public:

                /**
                 * Memory address of this registers.
                 */
                static const intptr ADDRESS0 = 0x00410000;

                /** 
                 * Constructor.
                 */  
                MainPllCtrl0()
                    pid          (),
                    shiftdiv     (),
                    cs0          (),
                    dftfcntr     (),
                    dftfcntrcntl (),
                    fuserr       (),
                    rstype       (),
                    rsctrl       (),
                    rscfg        (),
                    rsiso        (),
                    pllctl       (),
                    pllm         (),
                    plldiv1      (),
                    plldiv2      (),
                    bpdiv        (),
                    wakeup       (),
                    pllcmd       (),
                    pllstat      (),
                    alnctl       (),
                    dchange      (),
                    systat       (){
                }

                /** 
                 * Destructor.
                 */  
               ~MainPllCtrl0(){}

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
                 * 0h WKUP_PLLCTRL0_PID register 4201 0000h Section 5.4.4.12.1.1.
                 */
                union Pid
                {
                    Pid(){}
                    Pid(uint32 v){value = v;}
                   ~Pid(){}

                    uint32 value;
                } pid;

            private:

                uint32 space_[0x33];

            public:

                /**
                 * D0h Shift divider register 4201 00D0h Section 5.4.4.12.1.2.
                 */
                union Shiftdiv
                {
                    Shiftdiv(){}
                    Shiftdiv(uint32 v){value = v;}
                   ~Shiftdiv(){}

                    uint32 value;
                } shiftdiv;

                /**
                 * D4h Catscan control register 4201 00D4h Section 5.4.4.12.1.3.
                 */
                union Cs0
                {
                    Cs0(){}
                    Cs0(uint32 v){value = v;}
                   ~Cs0(){}

                    uint32 value;
                } cs0;

                /**
                 * D8h DFT frequency counter register 4201 00D8h Section 5.4.4.12.1.4.
                 */
                union Dftfcntr
                {
                    Dftfcntr(){}
                    Dftfcntr(uint32 v){value = v;}
                   ~Dftfcntr(){}

                    uint32 value;
                } dftfcntr;

                /**
                 * DCh DFT frequency counter control register 420100DCh Section 5.4.4.12.1.5.
                 */
                union Dftfcntrcntl
                {
                    Dftfcntrcntl(){}
                    Dftfcntrcntl(uint32 v){value = v;}
                   ~Dftfcntrcntl(){}

                    uint32 value;
                } dftfcntrcntl;
 
                /**
                 * E0h Fusefarm error register 4201 00E0h Section 5.4.4.12.1.6.
                 */
                union Fuserr
                {
                    Fuserr(){}
                    Fuserr(uint32 v){value = v;}
                   ~Fuserr(){}

                    uint32 value;
                } fuserr;
 
                /**
                 * E4h Reset type status register 4201 00E4h Section 5.4.4.12.1.7.
                 */
                union Rstype
                {
                    Rstype(){}
                    Rstype(uint32 v){value = v;}
                   ~Rstype(){}

                    uint32 value;
                } rstype;
 
                /**
                 * E8h Reset control register 4201 00E8h Section 5.4.4.12.1.8.
                 */
                union Rsctrl
                {
                    Rsctrl(){}
                    Rsctrl(uint32 v){value = v;}
                   ~Rsctrl(){}

                    uint32 value;
                } rsctrl;
 
                /**
                 * ECh Reset control register 420100ECh Section 5.4.4.12.1.9.
                 */
                union Rscfg
                {
                    Rscfg(){}
                    Rscfg(uint32 v){value = v;}
                   ~Rscfg(){}

                    uint32 value;
                } rscfg;
 
                /**
                 * F0h Reset isolation control register 4201 00F0h Section 5.4.4.12.1.10.
                 */
                union Rsiso
                {
                    Rsiso(){}
                    Rsiso(uint32 v){value = v;}
                   ~Rsiso(){}

                    uint32 value;
                } rsiso;
 
            private:

                uint32 space_[0x3];

            public:

                /**
                 * 100h PLL control register 4201 0100h Section 5.4.4.12.1.11.
                 */
                union Pllctl
                {
                    Pllctl(){}
                    Pllctl(uint32 v){value = v;}
                   ~Pllctl(){}

                    uint32 value;
                } pllctl;
 
            private:

                uint32 space_[0x3];

            public:
            
                /**
                 * 110h PLL multiplier control register 4201 0110h Section 5.4.4.12.1.12.
                 */
                union Pllm
                {
                    Pllm(){}
                    Pllm(uint32 v){value = v;}
                   ~Pllm(){}

                    uint32 value;
                } pllm;
 
            private:

                uint32 space_[0x1];

            public:

                /**
                 * 118h PLL controller divider1 control register 4201 0118h Section 5.4.4.12.1.13.
                 */
                union Plldiv1
                {
                    Plldiv1(){}
                    Plldiv1(uint32 v){value = v;}
                   ~Plldiv1(){}

                    uint32 value;
                } plldiv1;
 
                /**
                 * 11Ch PLL controller divider2 control register 4201 011Ch Section 5.4.4.12.1.14.
                 */
                union Plldiv2
                {
                    Plldiv2(){}
                    Plldiv2(uint32 v){value = v;}
                   ~Plldiv2(){}

                    uint32 value;
                } plldiv2;

            private:

                uint32 space_[0x3];

            public:

                /**
                 * 12Ch Bypass divider register 4201 012Ch Section 5.4.4.12.1.15.
                 */
                union Bpdiv
                {
                    Bpdiv(){}
                    Bpdiv(uint32 v){value = v;}
                   ~Bpdiv(){}

                    uint32 value;
                } bpdiv;
 
                /**
                 * 130h Wakeup register 4201 0130h Section 5.4.4.12.1.16.
                 */
                union Wakeup
                {
                    Wakeup(){}
                    Wakeup(uint32 v){value = v;}
                   ~Wakeup(){}

                    uint32 value;
                } wakeup;
 
            private:

                uint32 space_[0x1];

            public:

                /**
                 * 138h PLL Controller command register 4201 0138h Section 5.4.4.12.1.17.
                 */
                union Pllcmd
                {
                    Pllcmd(){}
                    Pllcmd(uint32 v){value = v;}
                   ~Pllcmd(){}

                    uint32 value;
                } pllcmd;
 
                /**
                 * 13Ch PLL Controller status register 4201 013Ch Section 5.4.4.12.1.18.
                 */
                union Pllstat
                {
                    Pllstat(){}
                    Pllstat(uint32 v){value = v;}
                   ~Pllstat(){}

                    uint32 value;
                } pllstat;
 
                /**
                 * 140h PLL Controller clock align control register 4201 0140h Section 5.4.4.12.1.19.
                 */
                union Alnctl
                {
                    Alnctl(){}
                    Alnctl(uint32 v){value = v;}
                   ~Alnctl(){}

                    uint32 value;
                } alnctl;
 
                /**
                 * 144h PLLDIV ratio change register 4201 0144h Section 5.4.4.12.1.20.
                 */
                union Dchange
                {
                    Dchange(){}
                    Dchange(uint32 v){value = v;}
                   ~Dchange(){}

                    uint32 value;
                } dchange;
 
            private:

                uint32 space_[0x2];

            public:

                /**
                 * 150h Sysclk status register 4201 0150h Section 5.4.4.12.1.21.
                 */
                union Systat
                {
                    Systat(){}
                    Systat(uint32 v){value = v;}
                   ~Systat(){}

                    uint32 value;
                } systat;

            };
        }
    }
} 
#endif // CPU_REG_MAIN_PLL_CTRL0_HPP_
