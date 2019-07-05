/**
 * TI AM65x Phase-Locked Loop base class for all the PLL types.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_PLL_TYPE_BASE_HPP_
#define CPU_PLL_TYPE_BASE_HPP_

#include "cpu.Object.hpp"

namespace local
{
    namespace cpu
    {
        class PllTypeBase : public cpu::Object
        {
            typedef cpu::PllTypeBase Self;
            typedef cpu::Object      Parent;

        public:

            /**
             * Constructor.
             */
            PllTypeBase();

            /**
             * Destructor.
             */
            virtual ~PllTypeBase();

            /**
             * Tests if this object has been constructed.
             *
             * @return true if object has been constructed successfully.
             */
            virtual bool isConstructed() const;

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
            PllTypeBase(const PllTypeBase& obj);

            /**
             * Assignment operator.
             *
             * @param obj reference to source object.
             * @return reference to this object.
             */
            PllTypeBase& operator =(const PllTypeBase& obj);

        };
    }
}
#endif // CPU_PLL_TYPE_BASE_HPP_
