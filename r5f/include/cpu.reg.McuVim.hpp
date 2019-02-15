/** 
 * TI AM65x R5F Vectored Interrupt Manager.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_REG_MCU_VIM_HPP_
#define CPU_REG_MCU_VIM_HPP_

#include "Types.hpp"

namespace local
{
    namespace cpu
    {
        namespace reg
        {
            struct McuVim
            {

            public:

                /**
                 * R5F CPU0 memory view.
                 */
                static const intptr ADDRESS0 = 0x40F80000;

                /**
                 * R5F CPU1 memory view.
                 */
                static const intptr ADDRESS1 = 0x40F80000;

                /** 
                 * Constructor.
                 */  
                McuVim() :
                    pid     (),
                    info    (),
                    priirq  (),
                    prifiq  (),
                    irqgsts (),
                    fiqgsts (),
                    irqvec  (),
                    fiqvec  (),
                    actirq  (),
                    actfiq  (),
                    dedvec  (){
                }

                /** 
                 * Destructor.
                 */  
               ~McuVim(){}

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
                 * Revision Register.
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


                /**
                 * Info Register.
                 */
                union Info
                {
                    Info(){}
                    Info(uint32 v){value = v;}
                   ~Info(){}

                    uint32 value;
                    struct
                    {
                        uint32 interrupts : 11;
                        uint32            : 21;
                    } bit;
                } info;

                /**
                 * Prioritized IRQ Register.
                 */
                union Priirq
                {
                    Priirq(){}
                    Priirq(uint32 v){value = v;}
                   ~Priirq(){}

                    uint32 value;
                    struct
                    {
                        uint32 num   : 10;
                        uint32       : 6;
                        uint32 pri   : 4;
                        uint32       : 11;
                        uint32 valid : 1;
                    } bit;
                } priirq;

                /**
                 * Prioritized FIQ Register.
                 */
                union Prifiq
                {
                    Prifiq(){}
                    Prifiq(uint32 v){value = v;}
                   ~Prifiq(){}

                   uint32 value;
                   struct
                   {
                       uint32 num   : 10;
                       uint32       : 6;
                       uint32 pri   : 4;
                       uint32       : 11;
                       uint32 valid : 1;
                   } bit;
                } prifiq;

                /**
                 * IRQ Group Status Register.
                 */
                union Irqgsts
                {
                    Irqgsts(){}
                    Irqgsts(uint32 v){value = v;}
                   ~Irqgsts(){}

                    uint32 value;
                    struct
                    {
                        uint32 sts : 32;
                    } bit;
                } irqgsts;

                /**
                 * FIQ Group Status Register.
                 */
                union Fiqgsts
                {
                    Fiqgsts(){}
                    Fiqgsts(uint32 v){value = v;}
                   ~Fiqgsts(){}

                    uint32 value;
                    struct
                    {
                        uint32 sts : 32;
                    } bit;
                } fiqgsts;

                /**
                 * IRQ Vector Address Register.
                 */
                union Irqvec
                {
                    Irqvec(){}
                    Irqvec(uint32 v){value = v;}
                   ~Irqvec(){}

                    uint32 value;
                    struct
                    {
                        uint32      : 2;
                        uint32 addr : 30;
                    } bit;
                } irqvec;

                /**
                 * FIQ Vector Address Register.
                 */
                union Fiqvec
                {
                    Fiqvec(){}
                    Fiqvec(uint32 v){value = v;}
                   ~Fiqvec(){}

                    uint32 value;
                    struct
                    {
                        uint32      : 2;
                        uint32 addr : 30;
                    } bit;
                } fiqvec;

                /**
                 * Active IRQ Register.
                 */
                union Actirq
                {
                    Actirq(){}
                    Actirq(uint32 v){value = v;}
                   ~Actirq(){}

                   uint32 value;
                   struct
                   {
                       uint32 num   : 10;
                       uint32       : 6;
                       uint32 pri   : 4;
                       uint32       : 11;
                       uint32 valid : 1;
                   } bit;
                } actirq;

                /**
                 * Active FIQ Register.
                 */
                union Actfiq
                {
                    Actfiq(){}
                    Actfiq(uint32 v){value = v;}
                   ~Actfiq(){}

                   uint32 value;
                   struct
                   {
                       uint32 num   : 10;
                       uint32       : 6;
                       uint32 pri   : 4;
                       uint32       : 11;
                       uint32 valid : 1;
                   } bit;
                } actfiq;

            private:

                uint32 space0_[2];

            public:

                /**
                 * DED Vector Address Register.
                 */
                union Dedvec
                {
                    Dedvec(){}
                    Dedvec(uint32 v){value = v;}
                   ~Dedvec(){}

                    uint32 value;
                    struct
                    {
                        uint32      : 2;
                        uint32 addr : 30;
                    } bit;
                } dedvec;

            private:

                /**
                 * To set offset 0x400.
                 */
                uint32 space1_[0xF3];

            public:

                /**
                 * A group.
                 */
                struct GroupJ
                {

                    /**
                     * Constructor.
                     */
                    GroupJ() :
                        rawj       (),
                        stsj       (),
                        intrensetj (),
                        intrenclrj (),
                        irqstsj    (),
                        fiqstsj    (),
                        intmapj    (),
                        inttypej   (){
                    }

                    /**
                     * Destructor.
                     */
                   ~GroupJ(){}

                    /**
                     * Raw Status/Set Register.
                     */
                    union RawJ
                    {
                        RawJ(){}
                        RawJ(uint32 v){value = v;}
                       ~RawJ(){}

                        uint32 value;
                        struct
                        {
                            uint32 sts : 32;
                        } bit;
                    } rawj;

                    /**
                     * Interrupt Enable Status/Clear Register.
                     */
                    union StsJ
                    {
                        StsJ(){}
                        StsJ(uint32 v){value = v;}
                       ~StsJ(){}

                        uint32 value;
                        struct
                        {
                            uint32 msk : 32;
                        } bit;
                    } stsj;

                    /**
                     * Interrupt Enable Set Register.
                     */
                    union IntrEnSetJ
                    {
                        IntrEnSetJ(){}
                        IntrEnSetJ(uint32 v){value = v;}
                       ~IntrEnSetJ(){}

                        uint32 value;
                        struct
                        {
                            uint32 mks : 32;
                        } bit;
                    } intrensetj;

                    /**
                     * Interrupt Enabled Clear Register.
                     */
                    union IntrEnClrJ
                    {
                        IntrEnClrJ(){}
                        IntrEnClrJ(uint32 v){value = v;}
                       ~IntrEnClrJ(){}

                       uint32 value;
                       struct
                       {
                           uint32 mks : 32;
                       } bit;
                    } intrenclrj;

                    /**
                     * IRQ Interrupt Enable Status/Clear.
                     */
                    union IrqstsJ
                    {
                        IrqstsJ(){}
                        IrqstsJ(uint32 v){value = v;}
                       ~IrqstsJ(){}

                       uint32 value;
                       struct
                       {
                           uint32 mks : 32;
                       } bit;
                    } irqstsj;

                    /**
                     * FIQ Interrupt Enable Status/Clear.
                     */
                    union FiqstsJ
                    {
                        FiqstsJ(){}
                        FiqstsJ(uint32 v){value = v;}
                       ~FiqstsJ(){}

                       uint32 value;
                       struct
                       {
                           uint32 mks : 32;
                       } bit;
                    } fiqstsj;

                    /**
                     * Interrupt Map Register.
                     */
                    union IntmapJ
                    {
                        IntmapJ(){}
                        IntmapJ(uint32 v){value = v;}
                       ~IntmapJ(){}

                        uint32 value;
                        struct
                        {
                            uint32 mks : 32;
                        } bit;
                    } intmapj;

                    /**
                     * Interrupt Type Register.
                     */
                    union InttypeJ
                    {
                        InttypeJ(){}
                        InttypeJ(uint32 v){value = v;}
                       ~InttypeJ(){}

                       uint32 value;
                       struct
                       {
                           uint32 mks : 32;
                       } bit;
                    } inttypej;

                } group[16];

            private:

                /**
                 * To set offset 0x1000.
                 */
                uint32 space2_[0x280];

            public:

                /**
                 * Interrupt Priority Register.
                 */
                union PriIntJ
                {
                    PriIntJ(){}
                    PriIntJ(uint32 v){value = v;}
                   ~PriIntJ(){}

                    uint32 value;
                    struct
                    {
                        uint32 val : 4;
                        uint32     : 28;
                    } bit;
                } priintj[0x200];

            private:

                /**
                 * To set offset 0x2000.
                 */
                uint32 space3_[0x200];

            public:

                /**
                 * Interrupt Vector Register.
                 */
                union VecIntJ
                {
                    VecIntJ(){}
                    VecIntJ(uint32 v){value = v;}
                   ~VecIntJ(){}

                    uint32 value;
                    struct
                    {
                        uint32     : 2;
                        uint32 val : 30;
                    } bit;
                } vecintj[0x200];

            };
        }
    }
} 
#endif // CPU_REG_MCU_VIM_HPP_
