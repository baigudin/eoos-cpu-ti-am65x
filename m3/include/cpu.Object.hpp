/** 
 * Root class of the operating system target CPU class hierarchy.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_OBJECT_HPP_
#define CPU_OBJECT_HPP_

#include "Object.hpp"
#include "cpu.Allocator.hpp"

namespace local
{
    namespace cpu
    {
        class Object : public ::local::Object<Allocator>
        {
            typedef ::local::Object<Allocator> Parent;        
        
        public:
        
            /** 
             * Constructor.
             */  
            Object();
    
            /** 
             * Destructor.
             */    
            virtual ~Object();       
        
        };
    }
}
#endif // CPU_OBJECT_HPP_
