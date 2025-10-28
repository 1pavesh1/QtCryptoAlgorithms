#ifndef RSA_H
#define RSA_H

#include <QString>
#include <QByteArray>
#include <qrsaencryption.h>
#include "../Enum/TypeCiphertext.h"

class RSAEncryptor
{
private:
    QRSAEncryption RSAEncryption;

public:
    void GenerateKeys(QByteArray &publicKey, QByteArray &privateKey)
    {
        RSAEncryption.generatePairKey(publicKey, privateKey);
    }

    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &publicKey)
    {
        return RSAEncryption.encode(message, QByteArray::fromHex(publicKey));
    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &privateKey)
    {
        return RSAEncryption.decode(message, QByteArray::fromHex(privateKey));
    }
};

#endif // RSA_H
