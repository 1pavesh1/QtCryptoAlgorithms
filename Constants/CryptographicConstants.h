#ifndef CRYPTOGRAPHICCONSTANTS_H
#define CRYPTOGRAPHICCONSTANTS_H

#include <QtGlobal>

namespace CryptoConstants
{
    constexpr const qint16 IV_SIZE = 32;

    namespace KeySize
    {
        constexpr const qint16 KEY_128 = 32;
        constexpr const qint16 KEY_192 = 48;
        constexpr const qint16 KEY_256 = 64;
    }
}

#endif // CRYPTOGRAPHICCONSTANTS_H
