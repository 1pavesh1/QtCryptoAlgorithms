#ifndef CLIENTINTERFACE_H
#define CLIENTINTERFACE_H

#include <QMainWindow>
#include <QByteArray>
#include "CustomWidgets/MessageWidget.h"
#include "Enum/TypeAlgorithm.h"
#include "Timer/TimerOfSpeed.h"
#include "CryptoAlgorithms/AESEncryptor.h"
#include "CryptoAlgorithms/BlowfishEncryptor.h"
#include "CryptoAlgorithms/DESEncryptor.h"
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
    TypeAlghorithm      typeAlghorithm = AES;
    TimerOfSpeed        timer;

    AESEncryptor        aesEncryptor;
    BlowfishEncryptor   blowfishEncryptor;
    DESEncryptor        desEncryptor;
    RSAEncryptor        rsaEncryptor;
    XTEAEncryptor       xteaEncryptor;

    void UpdateInterfaceFrame(const TypeAlghorithm &typeAlghorithm);
    void ClearInterfaceFrame();

    void EncryptMsg(const QByteArray &message);
    void DecryptMsg(const QByteArray &message);

    void EncryptAES(const QByteArray &message);
    void EncryptBlowfish(const QByteArray &message);
    void EncryptDES(const QByteArray &message);
    void EncryptRSA(const QByteArray &message);
    void EncryptXTEA(const QByteArray &message);

    void DecryptAES(const QByteArray &message);
    void DecryptBlowfish(const QByteArray &message);
    void DecryptDES(const QByteArray &message);
    void DecryptRSA(const QByteArray &message);
    void DecryptXTEA(const QByteArray &message);

public:
    ClientInterface(QWidget *parent = nullptr);
    ~ClientInterface();

private slots:
    void on_toCryptPushButton_clicked();

    void on_fromCryptPushButton_clicked();

    void on_alghoritmsCryptComboBox_currentIndexChanged(int index);

    void on_generateRSAKeyPushButton_clicked();

    void on_clearRSAKeysPushButton_clicked();

    void on_formatHEXCheckBox_stateChanged(int arg1);

    void on_formatBase64CheckBox_stateChanged(int arg1);
};
#endif // CLIENTINTERFACE_H
