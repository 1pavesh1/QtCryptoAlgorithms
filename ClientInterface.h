#ifndef CLIENTINTERFACE_H
#define CLIENTINTERFACE_H

#include <QMainWindow>
#include <QByteArray>
#include <QList>
#include <QLineEdit>
#include "Validator/ValidatorInputText.h"
#include "Singleton/GeneratorDataCrypt.h"
#include "CustomWidgets/MessageWidget.h"
#include "Enum/TypeAlgorithm.h"
#include "Timer/TimerOfSpeed.h"
#include "CryptoAlgorithms/AESEncryptor.h"
#include "CryptoAlgorithms/RSAEncryptor.h"
#include "CryptoAlgorithms/XTEAEncryptor.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ClientInterface;
}
QT_END_NAMESPACE

class ClientInterface : public QMainWindow
{
    Q_OBJECT
private:
    Ui::ClientInterface *ui;
    MessageWidget       *messageWidget;
    TypeAlgorithm      typeAlghorithm = AES;
    TimerOfSpeed        timer;
    QList <QLineEdit*> inputTextList;

    AESEncryptor        aesEncryptor;
    RSAEncryptor        rsaEncryptor;
    XTEAEncryptor       xteaEncryptor;

    void UpdateInterfaceFrame(const TypeAlgorithm &typeAlghorithm);
    void ClearInterfaceFrame();

    void EncryptMsg(const QByteArray &message);
    void DecryptMsg(const QByteArray &message);

    void EncryptAES(const QByteArray &message);
    void EncryptRSA(const QByteArray &message);
    void EncryptXTEA(const QByteArray &message);

    void DecryptAES(const QByteArray &message);
    void DecryptRSA(const QByteArray &message);
    void DecryptXTEA(const QByteArray &message);

    void ClearRSAData();
    void ClearAESData();
    void ClearXTEAData();

    void GenerateRSAData();
    void GenerateAESData();
    void GenerateXTEAData();

public:
    ClientInterface(QWidget *parent = nullptr);
    ~ClientInterface();

private slots:
    void on_toCryptPushButton_clicked();
    void on_fromCryptPushButton_clicked();

    void on_generateKeysDataPushButton_clicked();
    void on_clearKeysDataPushButton_clicked();

    void on_alghoritmsCryptComboBox_currentIndexChanged(int index);
    void on_sizeSecretKeyQComboBox_currentIndexChanged(int index);
    void on_formatHEXCheckBox_stateChanged(int arg1);
    void on_formatBase64CheckBox_stateChanged(int arg1);
    void on_operationModeQComboBox_currentIndexChanged(int index);
};
#endif // CLIENTINTERFACE_H
