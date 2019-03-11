/** 
 * TI AM65x R5F MCU Phase-Locked Loop Controller.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#include "cpu.PllTypeBase.hpp"

namespace local
{
    namespace cpu
    {
        /**
         * Constructor.
         *
         * @param config a operating system configuration.
         */
        PllTypeBase::PllTypeBase() : Parent()
        {
            bool const isConstructed = construct();
            setConstructed( isConstructed );
        }
        
        /** 
         * Destructor.
         */
        PllTypeBase::~PllTypeBase()
        {
        }
        
        /**
         * Tests if this object has been constructed.
         *
         * @return true if object has been constructed successfully.
         */    
        bool PllTypeBase::isConstructed() const
        {
            return Parent::isConstructed();
        }

        /**
         * Constructs this object.
         *
         * @return true if object has been constructed successfully.     
         */    
        bool PllTypeBase::construct()
        {
            return true;
        }
    }
}
