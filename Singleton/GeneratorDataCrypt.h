#ifndef GENERATORDATACRYPT_H
#define GENERATORDATACRYPT_H

#include <QByteArray>
#include <QRandomGenerator>
#include <QCryptographicHash>
#include <qrsaencryption.h>
#include "../Constants/CryptographicConstants.h"

class GeneratorDataCrypt
{
private:
    GeneratorDataCrypt() { }

public:
    static GeneratorDataCrypt* GetInstance()
    {
        static GeneratorDataCrypt instance;
        return &instance;
    }

    QByteArray Generate128BitKey()
    {
        QByteArray key(CryptoConstants::KeySize::KEY_128, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < CryptoConstants::KeySize::KEY_128; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate192BitKey()
    {
        QByteArray key(CryptoConstants::KeySize::KEY_192, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < CryptoConstants::KeySize::KEY_192; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate256BitKey()
    {
        QByteArray key(CryptoConstants::KeySize::KEY_256, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < CryptoConstants::KeySize::KEY_256; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray GenerateInitVector()
    {
        QByteArray iv(CryptoConstants::IV_SIZE, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < CryptoConstants::IV_SIZE; ++i)
        {
            iv[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return iv;
    }

    void GenerateRSAKeys(QByteArray &publicKey, QByteArray &privateKey)
    {
        QRSAEncryption RSAEncryption(QRSAEncryption::Rsa::RSA_2048);
        RSAEncryption.generatePairKey(publicKey, privateKey);
    }

    GeneratorDataCrypt(const GeneratorDataCrypt& obj) = delete;
    GeneratorDataCrypt& operator=(const GeneratorDataCrypt&) = delete;
};

#endif // GENERATORDATACRYPT_H
