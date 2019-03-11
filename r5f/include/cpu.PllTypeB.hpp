/** 
 * TI AM65x Phase-Locked Loop Type B.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_PLL_TYPE_B_HPP_
#define CPU_PLL_TYPE_B_HPP_

#include "cpu.PllTypeBase.hpp"

namespace local
{
    namespace cpu
    {
        class PllTypeB : public cpu::PllTypeBase
        {
            typedef cpu::PllTypeB    Self;
            typedef cpu::PllTypeBase Parent;

        public:
        
            /**
             * Constructor.
             */
            PllTypeB();

            /**
             * Destructor.
             */
            virtual ~PllTypeB();

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
            PllTypeB(const PllTypeB& obj);

            /**
             * Assignment operator.
             *
             * @param obj reference to source object.
             * @return reference to this object.
             */
            PllTypeB& operator =(const PllTypeB& obj);
    
        };
    }
}
#endif // CPU_PLL_TYPE_B_HPP_
