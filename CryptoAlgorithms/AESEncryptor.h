#ifndef AESENCRYPTOR_H
#define AESENCRYPTOR_H

#include <QCryptographicHash>
#include "qaesencryption.h"
#include "../AbstractClasses/CryptoAlgorithm.h"

enum TypeOperatingAES
{
    ECB,
    CBC
};

enum SizeKeyAES
{
    bit128,
    bit192,
    bit256
};

class AESEncryptor : public CryptoAlgorithm
{
private:
    QByteArray key, IV;
    QByteArray hashKey, hashIV;

    QByteArray EncryptMsgCBC(const QByteArray &message, const QByteArray &key, const QByteArray &IV)
    {
        QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);

        hashKey = QCryptographicHash::hash(QByteArray::fromHex(key), QCryptographicHash::Sha256);
        hashIV = QCryptographicHash::hash(QByteArray::fromHex(IV), QCryptographicHash::Md5);

        return encryption.encode(message, hashKey, hashIV);
    }

    QByteArray DecryptMsgCBC(const QByteArray &message)
    {
        QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
        return encryption.decode(message, hashKey, hashIV);
    }

    QByteArray EncryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        return encryption.encode(message, QByteArray::fromHex(key));
    }

    QByteArray DecryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        return encryption.decode(message, QByteArray::fromHex(key));
    }

public:
    TypeOperatingAES    typeOperatingAES = ECB;
    SizeKeyAES          sizeKeyAES = bit128;

    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &key)
    {

    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &key)
    {

    }
};

#endif // AESENCRYPTOR_H
