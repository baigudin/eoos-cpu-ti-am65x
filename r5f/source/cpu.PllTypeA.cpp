/**
 * TI AM65x Phase-Locked Loop Type A.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#include "cpu.PllTypeA.hpp"

namespace local
{
    namespace cpu
    {
        /**
         * Constructor.
         */
        PllTypeA::PllTypeA() : Parent()
        {
            bool const isConstructed = construct();
            setConstructed( isConstructed );
        }

        /**
         * Destructor.
         */
        PllTypeA::~PllTypeA()
        {
        }

        /**
         * Constructs this object.
         *
         * @return true if object has been constructed successfully.
         */
        bool PllTypeA::construct()
        {
            return true;
        }
    }
}
