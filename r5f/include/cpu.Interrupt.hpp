/**
 * TI AM65x R5F MCU Interrupt Controller.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_INTERRUPT_HPP_
#define CPU_INTERRUPT_HPP_

#include "cpu.Object.hpp"
#include "api.Task.hpp"
#include "api.CpuInterrupt.hpp"
#include "Configuration.hpp"

namespace local
{
    namespace cpu
    {

        namespace reg
        {
            struct McuVim;
        }

        class Interrupt : public cpu::Object
        {
            typedef cpu::Interrupt Self;
            typedef cpu::Object    Parent;

        public:

            /**
             * Available interrupt sources.
             *
             * The events to the MCU R5F CORE0. The events used by both processors when operating in lockstep mode.
             * For more details, see 9.4.3 MCU_R5_CORE0 Interrupt Map of Technical Reference Manual
             */
            enum SourceMcu0
            {
                MCU_MCAN_0_INT_0            = 0,
                MCU_MCAN_0_INT_1            = 1,
                MCU_MCAN_1_INT_0            = 2,
                MCU_MCAN_1_INT_1            = 3,
                MCU_MCAN_0_TS_RLOVR_INT     = 4,
                MCU_MCAN_1_TS_RLOVR_INT     = 5,
                MCU_ADC_0_INT               = 6,
                MCU_ADC_1_INT               = 7,
                MCU_SPI_0_INT               = 20,
                MCU_SPI_1_INT               = 21,
                MCU_SPI_2_INT               = 22,
                MCU_I2C_0_INT               = 23,
                MCU_OSPI_0_INT              = 24,
                MCU_OSPI_1_INT              = 25,
                MCU_HYPFLSH_INT             = 26,
                MCU_OTFA_INT                = 27,
                MCU_FSAS_ECC_ERR_INT        = 28,
                MCU_USART_0_INT             = 30,
                MCU_CPSW_STAT_PEND0         = 32,
                MCU_CPSW_EVNT_PEND          = 34,
                MCU_CPSW_MDIO_INTR          = 35,
                MCU_TIMER_0_INT             = 38,
                MCU_TIMER_1_INT             = 39,
                MCU_TIMER_2_INT             = 40,
                MCU_TIMER_3_INT             = 41,
                MCU_RTI_0_WWD_INT           = 42,
                MCU_RTI_1_WWD_INT           = 43,
                MCU_IPC_INT0                = 44,
                MCU_IPC_INT1                = 45,
                MCU_CTRLMOD_ERR_INT         = 46,
                MCU_ESM_HI_INT              = 49,
                MCU_DCC_0_INT               = 50,
                MCU_DCC_1_INT               = 51,
                MCU_DCC_2_INT               = 52,
                MCU_ESM_CFGERR_INT          = 53,
                DEBUG_MCU_ACQ_COMP_INT      = 54,
                DEBUG_MCU_CTM_INT           = 55,
                MCU_R5_CORE0_VALIRQ         = 56,
                MCU_R5_CORE0_VALFIQ         = 57,
                MCU_R5_CORE0_CTI            = 58,
                MCU_R5_CORE1_CTI            = 59,
                MCU_R5_CORE0_COMMRX         = 60,
                MCU_R5_CORE0_COMMTX         = 61,
                MCU_NAVSS_R5_CORE0_INT_0    = 64,
                MCU_NAVSS_R5_CORE0_INT_1    = 65,
                MCU_NAVSS_R5_CORE0_INT_2    = 66,
                MCU_NAVSS_R5_CORE0_INT_3    = 67,
                MCU_NAVSS_R5_CORE0_INT_4    = 68,
                MCU_NAVSS_R5_CORE0_INT_5    = 69,
                MCU_NAVSS_R5_CORE0_INT_6    = 70,
                MCU_NAVSS_R5_CORE0_INT_7    = 71,
                MCU_NAVSS_R5_CORE0_INT_8    = 72,
                MCU_NAVSS_R5_CORE0_INT_9    = 73,
                MCU_NAVSS_R5_CORE0_INT_10   = 74,
                MCU_NAVSS_R5_CORE0_INT_11   = 75,
                MCU_NAVSS_R5_CORE0_INT_12   = 76,
                MCU_NAVSS_R5_CORE0_INT_13   = 77,
                MCU_NAVSS_R5_CORE0_INT_14   = 78,
                MCU_NAVSS_R5_CORE0_INT_15   = 79,
                MCU_NAVSS_R5_CORE0_INT_16   = 80,
                MCU_NAVSS_R5_CORE0_INT_17   = 81,
                MCU_NAVSS_R5_CORE0_INT_18   = 82,
                MCU_NAVSS_R5_CORE0_INT_19   = 83,
                MCU_NAVSS_R5_CORE0_INT_20   = 84,
                MCU_NAVSS_R5_CORE0_INT_21   = 85,
                MCU_NAVSS_R5_CORE0_INT_22   = 86,
                MCU_NAVSS_R5_CORE0_INT_23   = 87,
                MCU_NAVSS_R5_CORE0_INT_24   = 88,
                MCU_NAVSS_R5_CORE0_INT_25   = 89,
                MCU_NAVSS_R5_CORE0_INT_26   = 90,
                MCU_NAVSS_R5_CORE0_INT_27   = 91,
                MCU_NAVSS_R5_CORE0_INT_28   = 92,
                MCU_NAVSS_R5_CORE0_INT_29   = 93,
                MCU_NAVSS_R5_CORE0_INT_30   = 94,
                MCU_NAVSS_R5_CORE0_INT_31   = 95,
                WKUP_I2C_0_INT              = 96,
                WKUP_USART_0_INT            = 97,
                WKUP_ESM_LO_INT             = 98,
                WKUP_ESM_HI_INT             = 99,
                WKUP_ESM_CFGERR_INT         = 100,
                WKUP_DMSC_DEBUG_AUTH_INT    = 103,
                WKUP_DMSC_AES_PUB_INT       = 104,
                WKUP_DMSC_AES_SEC_INT       = 105,
                WKUP_DMSC_SEC_EXCP0_INT     = 106,
                WKUP_DMSC_SEC_EXCP1_INT     = 107,
                WKUP_CTRL_MMR_ERR_INT       = 119,
                WKUP_RESET_SOC_POR          = 120,
                WKUP_RESET_SOC_PRG          = 121,
                WKUP_RESET_SOC_WRM          = 122,
                WKUP_RESET_MCU_WRM          = 123,
                WKUP_GPIOMUX_INT0           = 124,
                WKUP_GPIOMUX_INT1           = 125,
                WKUP_GPIOMUX_INT2           = 126,
                WKUP_GPIOMUX_INT3           = 127,
                WKUP_GPIOMUX_INT4           = 128,
                WKUP_GPIOMUX_INT5           = 129,
                WKUP_GPIOMUX_INT6           = 130,
                WKUP_GPIOMUX_INT7           = 131,
                WKUP_GPIOMUX_INT8           = 132,
                WKUP_GPIOMUX_INT9           = 133,
                WKUP_GPIOMUX_INT10          = 134,
                WKUP_GPIOMUX_INT11          = 135,
                WKUP_GPIOMUX_INT12          = 136,
                WKUP_GPIOMUX_INT13          = 137,
                WKUP_GPIOMUX_INT14          = 138,
                WKUP_GPIOMUX_INT15          = 139,
                MAIN_ESM_LO_INT             = 140,
                MAIN_ESM_HI_INT             = 141,
                MAIN_ESM_CFGERR_INT         = 142,
                MAIN2MCU_RTR_LVL_MUX_INTR0  = 160,
                MAIN2MCU_RTR_LVL_MUX_INTR1  = 161,
                MAIN2MCU_RTR_LVL_MUX_INTR2  = 162,
                MAIN2MCU_RTR_LVL_MUX_INTR3  = 163,
                MAIN2MCU_RTR_LVL_MUX_INTR4  = 164,
                MAIN2MCU_RTR_LVL_MUX_INTR5  = 165,
                MAIN2MCU_RTR_LVL_MUX_INTR6  = 166,
                MAIN2MCU_RTR_LVL_MUX_INTR7  = 167,
                MAIN2MCU_RTR_LVL_MUX_INTR8  = 168,
                MAIN2MCU_RTR_LVL_MUX_INTR9  = 169,
                MAIN2MCU_RTR_LVL_MUX_INTR10 = 170,
                MAIN2MCU_RTR_LVL_MUX_INTR11 = 171,
                MAIN2MCU_RTR_LVL_MUX_INTR12 = 172,
                MAIN2MCU_RTR_LVL_MUX_INTR13 = 173,
                MAIN2MCU_RTR_LVL_MUX_INTR14 = 174,
                MAIN2MCU_RTR_LVL_MUX_INTR15 = 175,
                MAIN2MCU_RTR_LVL_MUX_INTR16 = 176,
                MAIN2MCU_RTR_LVL_MUX_INTR17 = 177,
                MAIN2MCU_RTR_LVL_MUX_INTR18 = 178,
                MAIN2MCU_RTR_LVL_MUX_INTR19 = 179,
                MAIN2MCU_RTR_LVL_MUX_INTR20 = 180,
                MAIN2MCU_RTR_LVL_MUX_INTR21 = 181,
                MAIN2MCU_RTR_LVL_MUX_INTR22 = 182,
                MAIN2MCU_RTR_LVL_MUX_INTR23 = 183,
                MAIN2MCU_RTR_LVL_MUX_INTR24 = 184,
                MAIN2MCU_RTR_LVL_MUX_INTR25 = 185,
                MAIN2MCU_RTR_LVL_MUX_INTR26 = 186,
                MAIN2MCU_RTR_LVL_MUX_INTR27 = 187,
                MAIN2MCU_RTR_LVL_MUX_INTR28 = 188,
                MAIN2MCU_RTR_LVL_MUX_INTR29 = 189,
                MAIN2MCU_RTR_LVL_MUX_INTR30 = 190,
                MAIN2MCU_RTR_LVL_MUX_INTR31 = 191,
                MAIN2MCU_RTR_LVL_MUX_INTR32 = 192,
                MAIN2MCU_RTR_LVL_MUX_INTR33 = 193,
                MAIN2MCU_RTR_LVL_MUX_INTR34 = 194,
                MAIN2MCU_RTR_LVL_MUX_INTR35 = 195,
                MAIN2MCU_RTR_LVL_MUX_INTR36 = 196,
                MAIN2MCU_RTR_LVL_MUX_INTR37 = 197,
                MAIN2MCU_RTR_LVL_MUX_INTR38 = 198,
                MAIN2MCU_RTR_LVL_MUX_INTR39 = 199,
                MAIN2MCU_RTR_LVL_MUX_INTR40 = 200,
                MAIN2MCU_RTR_LVL_MUX_INTR41 = 201,
                MAIN2MCU_RTR_LVL_MUX_INTR42 = 202,
                MAIN2MCU_RTR_LVL_MUX_INTR43 = 203,
                MAIN2MCU_RTR_LVL_MUX_INTR44 = 204,
                MAIN2MCU_RTR_LVL_MUX_INTR45 = 205,
                MAIN2MCU_RTR_LVL_MUX_INTR46 = 206,
                MAIN2MCU_RTR_LVL_MUX_INTR47 = 207,
                MAIN2MCU_RTR_LVL_MUX_INTR48 = 208,
                MAIN2MCU_RTR_LVL_MUX_INTR49 = 209,
                MAIN2MCU_RTR_LVL_MUX_INTR50 = 210,
                MAIN2MCU_RTR_LVL_MUX_INTR51 = 211,
                MAIN2MCU_RTR_LVL_MUX_INTR52 = 212,
                MAIN2MCU_RTR_LVL_MUX_INTR53 = 213,
                MAIN2MCU_RTR_LVL_MUX_INTR54 = 214,
                MAIN2MCU_RTR_LVL_MUX_INTR55 = 215,
                MAIN2MCU_RTR_LVL_MUX_INTR56 = 216,
                MAIN2MCU_RTR_LVL_MUX_INTR57 = 217,
                MAIN2MCU_RTR_LVL_MUX_INTR58 = 218,
                MAIN2MCU_RTR_LVL_MUX_INTR59 = 219,
                MAIN2MCU_RTR_LVL_MUX_INTR60 = 220,
                MAIN2MCU_RTR_LVL_MUX_INTR61 = 221,
                MAIN2MCU_RTR_LVL_MUX_INTR62 = 222,
                MAIN2MCU_RTR_LVL_MUX_INTR63 = 223,
                MAIN2MCU_RTR_PLS_MUX_INTR0  = 224,
                MAIN2MCU_RTR_PLS_MUX_INTR1  = 225,
                MAIN2MCU_RTR_PLS_MUX_INTR2  = 226,
                MAIN2MCU_RTR_PLS_MUX_INTR3  = 227,
                MAIN2MCU_RTR_PLS_MUX_INTR4  = 228,
                MAIN2MCU_RTR_PLS_MUX_INTR5  = 229,
                MAIN2MCU_RTR_PLS_MUX_INTR6  = 230,
                MAIN2MCU_RTR_PLS_MUX_INTR7  = 231,
                MAIN2MCU_RTR_PLS_MUX_INTR8  = 232,
                MAIN2MCU_RTR_PLS_MUX_INTR9  = 233,
                MAIN2MCU_RTR_PLS_MUX_INTR10 = 234,
                MAIN2MCU_RTR_PLS_MUX_INTR11 = 235,
                MAIN2MCU_RTR_PLS_MUX_INTR12 = 236,
                MAIN2MCU_RTR_PLS_MUX_INTR13 = 237,
                MAIN2MCU_RTR_PLS_MUX_INTR14 = 238,
                MAIN2MCU_RTR_PLS_MUX_INTR15 = 239,
                MAIN2MCU_RTR_PLS_MUX_INTR16 = 240,
                MAIN2MCU_RTR_PLS_MUX_INTR17 = 241,
                MAIN2MCU_RTR_PLS_MUX_INTR18 = 242,
                MAIN2MCU_RTR_PLS_MUX_INTR19 = 243,
                MAIN2MCU_RTR_PLS_MUX_INTR20 = 244,
                MAIN2MCU_RTR_PLS_MUX_INTR21 = 245,
                MAIN2MCU_RTR_PLS_MUX_INTR22 = 246,
                MAIN2MCU_RTR_PLS_MUX_INTR23 = 247,
                MAIN2MCU_RTR_PLS_MUX_INTR24 = 248,
                MAIN2MCU_RTR_PLS_MUX_INTR25 = 249,
                MAIN2MCU_RTR_PLS_MUX_INTR26 = 250,
                MAIN2MCU_RTR_PLS_MUX_INTR27 = 251,
                MAIN2MCU_RTR_PLS_MUX_INTR28 = 252,
                MAIN2MCU_RTR_PLS_MUX_INTR29 = 253,
                MAIN2MCU_RTR_PLS_MUX_INTR30 = 254,
                MAIN2MCU_RTR_PLS_MUX_INTR31 = 255,
                MAIN2MCU_RTR_PLS_MUX_INTR32 = 256,
                MAIN2MCU_RTR_PLS_MUX_INTR33 = 257,
                MAIN2MCU_RTR_PLS_MUX_INTR34 = 258,
                MAIN2MCU_RTR_PLS_MUX_INTR35 = 259,
                MAIN2MCU_RTR_PLS_MUX_INTR36 = 260,
                MAIN2MCU_RTR_PLS_MUX_INTR37 = 261,
                MAIN2MCU_RTR_PLS_MUX_INTR38 = 262,
                MAIN2MCU_RTR_PLS_MUX_INTR39 = 263,
                MAIN2MCU_RTR_PLS_MUX_INTR40 = 264,
                MAIN2MCU_RTR_PLS_MUX_INTR41 = 265,
                MAIN2MCU_RTR_PLS_MUX_INTR42 = 266,
                MAIN2MCU_RTR_PLS_MUX_INTR43 = 267,
                MAIN2MCU_RTR_PLS_MUX_INTR44 = 268,
                MAIN2MCU_RTR_PLS_MUX_INTR45 = 269,
                MAIN2MCU_RTR_PLS_MUX_INTR46 = 270,
                MAIN2MCU_RTR_PLS_MUX_INTR47 = 271,
                WKUP_DMSC_IA_PEND0          = 320,
                WKUP_DMSC_IA_PEND1          = 321,
                WKUP_DMSC_IA_PEND2          = 322,
                WKUP_DMSC_IA_PEND3          = 323,
                WKUP_DMSC_IA_PEND4          = 324,
                WKUP_DMSC_IA_PEND5          = 325,
                WKUP_DMSC_IA_PEND6          = 326,
                WKUP_DMSC_IA_PEND7          = 327,
                WKUP_DMSC_IA_PEND8          = 328,
                WKUP_DMSC_IA_PEND9          = 329,
                WKUP_DMSC_IA_PEND10         = 330,
                WKUP_DMSC_IA_PEND11         = 331,
                WKUP_DMSC_IA_PEND12         = 332,
                WKUP_DMSC_IA_PEND13         = 333,
                WKUP_DMSC_IA_PEND14         = 334,
                WKUP_DMSC_IA_PEND15         = 335,
                WKUP_DMSC_IA_PEND16         = 336,
                WKUP_DMSC_IA_PEND17         = 337,
                WKUP_DMSC_IA_PEND18         = 338,
                WKUP_DMSC_IA_PEND19         = 339,
                WKUP_DMSC_IA_PEND20         = 340,
                WKUP_DMSC_IA_PEND21         = 341,
                WKUP_DMSC_IA_PEND22         = 342,
                WKUP_DMSC_IA_PEND23         = 343,
                WKUP_DMSC_IA_PEND24         = 344,
                WKUP_DMSC_IA_PEND25         = 345,
                WKUP_DMSC_IA_PEND26         = 346,
                WKUP_DMSC_IA_PEND27         = 347,
                WKUP_DMSC_IA_PEND28         = 348,
                WKUP_DMSC_IA_PEND29         = 349,
                WKUP_DMSC_IA_PEND30         = 350,
                WKUP_DMSC_IA_PEND31         = 351,
                UNDEF                       = -1
            };

            /**
             * Constructor.
             *
             * NOTE: A passed configuration will NOT be copied to the class internal data, but used by the class.
             *       Do not invalidate the passed configuration object while an object of the class is alive.
             *
             * @param config - a operating system configuration.
             * @param coreId - an ID of this CPU executing core.
             */
            Interrupt(const Configuration& config, int32 coreId);

            /**
             * Destructor.
             */
            virtual ~Interrupt();

            /**
             * Tests if this object has been constructed.
             *
             * @return true if object has been constructed successfully.
             */
            virtual bool isConstructed() const;

            /**
             * Creates a new HW interrupt resource.
             *
             * @param handler - user class which implements an interrupt handler interface.
             * @param source  - available interrupt source number.
             * @return a new interrupt resource, or NULL if an error has been occurred.
             */
            api::CpuInterrupt* create(api::Task& handler, int32 source);

        private:

            /**
             * Constructs this object.
             *
             * @param config - a operating system configuration.
             * @return true if object has been constructed successfully.
             */
            bool construct(int32 coreId);

            /**
             * Copy constructor.
             *
             * @param obj - reference to source object.
             */
            Interrupt(const Interrupt& obj);

            /**
             * Assignment operator.
             *
             * @param obj - reference to source object.
             * @return reference to this object.
             */
            Interrupt& operator =(const Interrupt& obj);

            /**
             * Configuration of the operating system.
             */
            const Configuration& config_;

            /**
             * VIM registers.
             */
            volatile reg::McuVim* regMcuVim_;

        };
    }
}
#endif // CPU_INTERRUPT_HPP_
