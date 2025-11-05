#ifndef AESENCRYPTOR_H
#define AESENCRYPTOR_H

#include <QDebug>
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
    QByteArray IV;
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
        QByteArray decryptMsg = encryption.decode(message, hashKey, hashIV);
        return encryption.removePadding(decryptMsg);
    }

    QByteArray EncryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        return encryption.encode(message, QByteArray::fromHex(key));
    }

    QByteArray DecryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        QByteArray decryptMsg = encryption.decode(message, QByteArray::fromHex(key));
        return encryption.removePadding(decryptMsg);
    }

public:
    TypeOperatingAES    typeOperatingAES = ECB;
    SizeKeyAES          sizeKeyAES = bit128;

    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &key) override
    {
        switch (typeOperatingAES)
        {
        case CBC:
            return EncryptMsgCBC(message, key, IV);
            break;
        case ECB:
            return EncryptMsgECB(message, key);
            break;
        default:
            return nullptr;
            break;
        }
    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &key) override
    {
        switch (typeOperatingAES)
        {
        case CBC:
            return DecryptMsgCBC(message);
            break;
        case ECB:
            return DecryptMsgECB(message, key);
            break;
        default:
            return nullptr;
            break;
        }
    }

    void SetInitVector(const QByteArray &IV)
    {
        this->IV = IV;
    }
};

#endif // AESENCRYPTOR_H
