#ifndef AESENCRYPTOR_H
#define AESENCRYPTOR_H

#include <QString>
#include <QByteArray>
#include <QRandomGenerator>
#include <QCryptographicHash>
#include "qaesencryption.h"
#include "../Enum/TypeCiphertext.h"
#include "../Enum/TypeKeyAES.h"

const qint16 IV_SIZE = 32;
const qint16 KEY_128_SIZE = 32;
const qint16 KEY_192_SIZE = 48;
const qint16 KEY_256_SIZE = 64;

enum TypeOperatingAES
{
    ECB,
    CBC
};

class AESEncryptor
{
private:
    QByteArray hashKey, hashIV;

    QByteArray Generate128BitKey()
    {
        QByteArray key(KEY_128_SIZE, 0);

        QRandomGenerator *generator = QRandomGenerator::system();
        for (int i = 0; i < KEY_128_SIZE; ++i) {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate192BitKey()
    {
        QByteArray key(KEY_192_SIZE, 0);

        QRandomGenerator *generator = QRandomGenerator::system();
        for (int i = 0; i < KEY_192_SIZE; ++i) {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate256BitKey()
    {
        QByteArray key(KEY_256_SIZE, 0);

        QRandomGenerator *generator = QRandomGenerator::system();
        for (int i = 0; i < KEY_256_SIZE; ++i) {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray EncryptMsgCBC(const QByteArray &message, const QByteArray &key, const QByteArray &IV)
    {
        QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
        hashKey = QCryptographicHash::hash(QByteArray::fromHex(key), QCryptographicHash::Sha256);
        hashIV = QCryptographicHash::hash(QByteArray::fromHex(IV), QCryptographicHash::Md5);

        return encryption.encode(message, hashKey, hashIV);
    }

    QByteArray EncryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        return encryption.encode(message, QByteArray::fromHex(key));
    }

    QByteArray DecryptMsgCBC(const QByteArray &message)
    {
        QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
        return encryption.decode(message, hashKey, hashIV);
    }

    QByteArray DecryptMsgECB(const QByteArray &message, const QByteArray &key)
    {
        QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
        return encryption.decode(message, QByteArray::fromHex(key));
    }

public:
    QByteArray GenerateKey(const TypeKeyAES &typeKeyAES)
    {
        switch (typeKeyAES)
        {
        case bit128:
            return Generate128BitKey();
            break;
        case bit192:
            return Generate192BitKey();
            break;
        case bit256:
            return Generate256BitKey();
            break;
        default:
            return 0;
            break;
        }
    }

    QByteArray GenerateIV()
    {
        QByteArray iv(IV_SIZE, 0);

        QRandomGenerator *generator = QRandomGenerator::system();
        for (int i = 0; i < IV_SIZE; ++i) {
            iv[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return iv;
    }

    QByteArray EncryptMsg(const QByteArray &message, const QByteArray &key, const QByteArray &IV, const TypeOperatingAES &typeOperatingAES)
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
            return 0;
            break;
        }
    }

    QByteArray DecryptMsg(const QByteArray &message, const QByteArray &key, const TypeOperatingAES &typeOperatingAES)
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
            return 0;
            break;
        }
    }
};

#endif // AESENCRYPTOR_H
