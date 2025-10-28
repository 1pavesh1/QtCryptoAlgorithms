#ifndef AESENCRYPTOR_H
#define AESENCRYPTOR_H

#include <QString>
#include <QByteArray>
#include "qaesencryption.h"
#include "../Enum/TypeCiphertext.h"

class AESEncryptor
{
private:
    // QAESEncryption AESEncryption;

public:
    void Generate128BitKey()
    {

    }

    void Generate192BitKey()
    {

    }

    void Generate256BitKey()
    {

    }

    void GenerateIV()
    {

    }

    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &publicKey)
    {

    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &privateKey)
    {

    }
};

#endif // AESENCRYPTOR_H
