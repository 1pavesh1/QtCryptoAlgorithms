#ifndef VALIDATORINPUTTEXT_H
#define VALIDATORINPUTTEXT_H

#include <QObject>
#include <QList>
#include <QLineEdit>
#include <qrsaencryption.h>
#include "../Enum/TypeAlgorithm.h"
#include "../Constants/CryptographicConstants.h"

class ValidatorInputText : public QObject
{
    Q_OBJECT;
private:
    QList <QLineEdit*> inputTextList;

    static bool ValidateInputAES(const QList <QLineEdit*> &inputTextList)
    {
        return IsInitVectorAESValid(inputTextList[0]->text()) && IsKeyAESValid(inputTextList[1]->text());
    }

    static bool ValidateInputRSA(const QList <QLineEdit*> &inputTextList)
    {
        return IsPrivateKeyRSAValid(inputTextList[0]->text()) && IsPublicKeyRSAValid(inputTextList[1]->text());
    }

    static bool ValidateInputXTEA(const QList <QLineEdit*> &inputTextList)
    {
        return IsKeyXTEAValid(inputTextList[0]->text());
    }

    static bool IsInitVectorAESValid(const QString &inputText)
    {
        return inputText.size() == CryptoConstants::IV_SIZE;
    }

    static bool IsKeyAESValid(const QString &inputText)
    {
        return inputText.size() == CryptoConstants::KeySize::KEY_128 ||
               inputText.size() == CryptoConstants::KeySize::KEY_192 ||
               inputText.size() == CryptoConstants::KeySize::KEY_256;
    }

    static bool IsPrivateKeyRSAValid(const QString &inputText)
    {
        return QRSAEncryption::isValidRsaKey(inputText.toUtf8());
    }
    static bool IsPublicKeyRSAValid(const QString &inputText)
    {
        return QRSAEncryption::isValidRsaKey(inputText.toUtf8());
    }

    static bool IsKeyXTEAValid(const QString &inputText)
    {
        return inputText.size() == CryptoConstants::KeySize::KEY_128;
    }

public:
    static bool ValidateInpuText(const QList <QLineEdit*> &inputTextList, const TypeAlgorithm &typeAlgorithm)
    {
        if (inputTextList.isEmpty())
            return false;

        switch (typeAlgorithm)
        {
        case AES:
            return ValidateInputAES(inputTextList);
            break;
        case RSA:
            return ValidateInputRSA(inputTextList);
            break;
        case XTEA:
            return ValidateInputXTEA(inputTextList);
            break;
        default:
            return false;
            break;
        }
    }
};

#endif // VALIDATORINPUTTEXT_H
