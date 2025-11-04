#ifndef GENERATORDATACRYPT_H
#define GENERATORDATACRYPT_H

#include <QByteArray>
#include <QRandomGenerator>
#include <QCryptographicHash>
#include <qrsaencryption.h>

constexpr const qint16 IV_SIZE = 32;
constexpr const qint16 KEY_128_SIZE = 32;
constexpr const qint16 KEY_192_SIZE = 48;
constexpr const qint16 KEY_256_SIZE = 64;

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
        QByteArray key(KEY_128_SIZE, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < KEY_128_SIZE; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate192BitKey()
    {
        QByteArray key(KEY_192_SIZE, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < KEY_192_SIZE; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray Generate256BitKey()
    {
        QByteArray key(KEY_256_SIZE, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < KEY_256_SIZE; ++i)
        {
            key[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return key;
    }

    QByteArray GenerateInitVector()
    {
        QByteArray iv(IV_SIZE, 0);
        QRandomGenerator *generator = QRandomGenerator::system();

        for (int i = 0; i < IV_SIZE; ++i)
        {
            iv[i] = static_cast<char>(generator->generate() & 0xFF);
        }

        return iv;
    }

    void GenerateRSAKeys(QByteArray &publicKey, QByteArray &privateKey)
    {
        QRSAEncryption RSAEncryption;
        RSAEncryption.generatePairKey(publicKey, privateKey);
    }

    GeneratorDataCrypt(const GeneratorDataCrypt& obj) = delete;
    GeneratorDataCrypt& operator=(const GeneratorDataCrypt&) = delete;
};

#endif // GENERATORDATACRYPT_H
