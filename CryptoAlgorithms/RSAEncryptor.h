#ifndef RSAENCRYPTOR_H
#define RSAENCRYPTOR_H

#include <qrsaencryption.h>
#include "../AbstractClasses/CryptoAlgorithm.h"

class RSAEncryptor : public CryptoAlgorithm
{
public:
    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &publicKey)
    {
        QRSAEncryption RSAEncryption(QRSAEncryption::Rsa::RSA_2048);
        return RSAEncryption.encode(message, QByteArray::fromHex(publicKey));
    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &privateKey)
    {
        QRSAEncryption RSAEncryption(QRSAEncryption::Rsa::RSA_2048);
        return RSAEncryption.decode(message, QByteArray::fromHex(privateKey));
    }
};

#endif // RSAENCRYPTOR_H
