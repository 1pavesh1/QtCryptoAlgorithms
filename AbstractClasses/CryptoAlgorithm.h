#ifndef CRYPTOALGORITHM_H
#define CRYPTOALGORITHM_H

#include <QByteArray>

class CryptoAlgorithm
{
public:
    virtual QByteArray EncryptMsg(const QByteArray &message, const QByteArray &key) = 0;
    virtual QByteArray DecryptMsg(const QByteArray &message, const QByteArray &key) = 0;
};

#endif // CRYPTOALGORITHM_H
