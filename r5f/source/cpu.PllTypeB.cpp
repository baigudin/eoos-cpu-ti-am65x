/**
 * TI AM65x Phase-Locked Loop Type B.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
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
