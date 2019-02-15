/** 
 * Boot routine.
 *
 * The module performs the tasks to initialize C/C++ run-time environment.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 */
#ifndef CPU_BOOT_HPP_
#define CPU_BOOT_HPP_

#include "Types.hpp"

namespace local
{
    namespace cpu
    {
        class Boot
        {
    
        public:

            /**
             * Initialization.
             *
             * @return true if no errors have been occurred.
             */
            static bool initialize();          

        };
    }
}
#endif // CPU_BOOT_HPP_
