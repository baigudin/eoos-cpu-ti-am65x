/** 
 * TI AM65x Phase-Locked Loop Type B.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#include "cpu.PllTypeB.hpp"

namespace local
{
    namespace cpu
    {
        /**
         * Constructor.
         */
        PllTypeB::PllTypeB() : Parent()
        {
            bool const isConstructed = construct();
            setConstructed( isConstructed );
        }
        
        /** 
         * Destructor.
         */
        PllTypeB::~PllTypeB()
        {
        }

        /**
         * Constructs this object.
         *
         * @return true if object has been constructed successfully.     
         */    
        bool PllTypeB::construct()
        {
            return true;
        }
    }
}
