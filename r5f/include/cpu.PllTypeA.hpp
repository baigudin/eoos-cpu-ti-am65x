/**
 * TI AM65x Phase-Locked Loop Type A.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_PLL_TYPE_A_HPP_
#define CPU_PLL_TYPE_A_HPP_

#include "cpu.PllTypeBase.hpp"

namespace local
{
    namespace cpu
    {
        class PllTypeA : public cpu::PllTypeBase
        {
            typedef cpu::PllTypeA    Self;
            typedef cpu::PllTypeBase Parent;

        public:

            /**
             * Constructor.
             */
            PllTypeA();

            /**
             * Destructor.
             */
            virtual ~PllTypeA();

        private:

            /**
             * Constructs this object.
             *
             * @return true if object has been constructed successfully.
             */
            bool construct();

            /**
             * Copy constructor.
             *
             * @param obj reference to source object.
             */
            PllTypeA(const PllTypeA& obj);

            /**
             * Assignment operator.
             *
             * @param obj reference to source object.
             * @return reference to this object.
             */
            PllTypeA& operator =(const PllTypeA& obj);

        };
    }
}
#endif // CPU_PLL_TYPE_A_HPP_
