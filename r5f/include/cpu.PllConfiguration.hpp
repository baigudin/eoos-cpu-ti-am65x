/**
 * TI AM65x Phase-Locked Loop configuration.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_PLL_CONFIGURATION_HPP_
#define CPU_PLL_CONFIGURATION_HPP_

#include "Type.hpp"

namespace local
{
    namespace cpu
    {
        struct PllConfiguration
        {
            /**
             * The SoC PLL names.
             */
            enum PllName
            {
                PLL_NAME_MAIN,
                PLL_NAME_PER0,
                PLL_NAME_PER1,
                PLL_NAME_DDR,
                PLL_NAME_DSS,
                PLL_NAME_ARM0,
                PLL_NAME_ARM1,
                PLL_NAME_MCU,
                PLL_NAME_CPSW
            };

            /**
             * The SoC PLL types.
             */
            enum PllType
            {
                PLL_NAME_TYPE_A,
                PLL_NAME_TYPE_B
            };

            /**
             * PLL name.
             */
            PllName name;

            /**
             * PLL type.
             */
            PllType type;

           /**
            * PLL has HSDIV block.
            */
            bool hasHsdiv;

            /**
             * PLL has PLL Control block.
             */
            bool hasCtrl;

            /**
             * PLL fractional multiplication ratio.
             */
            uint32 mulMF;

            /**
             * PLL multiplication ratio.
             */
            uint32 mulM;

            /**
             * PLL Sigma Delta divider.
             */
            uint32 divSD;

            /**
             * PLL N divider.
             */
            uint32 divN;

            /**
             * PLL M1 bypass output divider.
             */
            uint32 divM1;

            /**
             * DCO output divider.
             */
            uint32 divM2;

            /**
             * CLKOUTHIF output divider.
             *
             * NOTE: Applicable only for PLL Type A.
             */
            uint32 divM3;

            /**
             * High speed divider 4.
             *
             * NOTE: Applicable only if PLL has HSDIV block.
             */
            uint32 divHsdiv4;

            /**
             * High speed divider 3.
             *
             * NOTE: Applicable only if PLL has HSDIV block.
             */
            uint32 divHsdiv3;

            /**
             * High speed divider 2.
             *
             * NOTE: Applicable only if PLL has HSDIV block.
             */
            uint32 divHsdiv2;

            /**
             * High speed divider 1.
             *
             * NOTE: Applicable only if PLL has HSDIV block.
             */
            uint32 divHsdiv1;

            /**
             * PLL controller Bypass divider.
             */
            uint32 divBpdiv;

            /**
             * PLL controller Div1 divider.
             */
            uint32 divDiv1;

        };
    }
}
#endif // CPU_PLL_CONFIGURATION_HPP_
