#ifndef XTEAENCRYPTOR_H
#define XTEAENCRYPTOR_H

#define BLOCK_SIZE 8

#include "../AbstractClasses/CryptoAlgorithm.h"

constexpr const qint32 DELTA = 0x9e3669b9;

class XTEAEncryptor : public CryptoAlgorithm
{
private:
    qint32 rounds;

    void Encrypt(uchar* data, qint32 size, const uchar* key)
    {
        qint32 blocks = size / BLOCK_SIZE;
        if (size % BLOCK_SIZE != 0) blocks++;
        for (qint32 i = 0; i < blocks; ++i)
        {
            Encipher(rounds, (qint32*)(data + (BLOCK_SIZE * i)), (qint32*)key);
        }
    }

    void Decrypt(uchar* data, qint32 size, const uchar* key)
    {
        qint32 blocks = size / BLOCK_SIZE;
        if (size % BLOCK_SIZE != 0) blocks++;
        for (qint32 i = 0; i < blocks; ++i)
        {
            Decipher(rounds, (qint32*)(data + (BLOCK_SIZE * i)), (qint32*)key);
        }
    }

    void Encipher(qint32 rounds, qint32 v[2], qint32 key[4])
    {
        qint32 sum = 0;
        for (qint32 i = 0; i < rounds; ++i)
        {
            v[0] += ((v[1] << 4) ^ (v[1] >> 5) + v[1]) ^ (sum + key[sum & 3]);
            sum  += DELTA;
            v[1] += ((v[0] << 4) ^ (v[0] >> 5) + v[0]) ^ (sum + key[(sum >> 11) & 3]);
        }
    }

    void Decipher(qint32 rounds, qint32 v[2], qint32 key[4])
    {
        qint32 sum = DELTA * rounds;
        for (qint32 i = 0; i < rounds; ++i)
        {
            v[1] -= ((v[0] << 4) ^ (v[0] >> 5) + v[0]) ^ (sum + key[(sum >> 11) & 3]);
            sum  -= DELTA;
            v[0] -= ((v[1] << 4) ^ (v[1] >> 5) + v[1]) ^ (sum + key[sum & 3]);
        }
    }

public:
    XTEAEncryptor() { rounds = 32; }

    QByteArray EncryptMsg(const QByteArray& data, const QByteArray& key) override
    {
        uchar head = 0;
        QByteArray tempData = data;

        if (tempData.size() < BLOCK_SIZE)
        {
            head = BLOCK_SIZE - tempData.size() + 1;
        }
        else
        {
            head = BLOCK_SIZE - ((tempData.size() + 1) % BLOCK_SIZE);
        }
        tempData.push_front(head);
        tempData.resize(tempData.size() + head);
        Encrypt((uchar*)tempData.data(), tempData.size(), (uchar*)key.data());
        return tempData;
    }

    QByteArray DecryptMsg(const QByteArray& data, const QByteArray& key) override
    {
        QByteArray tempData = data;
        Decrypt((uchar*)tempData.data(), tempData.size(), (uchar*)key.data());
        uchar head = tempData[0];
        tempData.remove(0, 1);
        tempData.resize(tempData.size() - head);
        return tempData;
    }

    void SetRounds(const qint32 &rounds)
    {
        this->rounds = rounds;
    }
};

#endif // XTEAENCRYPTOR_H
