#ifndef CLIENTINTERFACE_H
#define CLIENTINTERFACE_H

#include <QMainWindow>
#include <QByteArray>
#include "CustomWidgets/MessageWidget.h"
#include "Enum/TypeAlgorithm.h"
#include "Timer/SpeedTimer.h"
#include "CryptoAlgorithms/AES.h"
#include "CryptoAlgorithms/Blowfish.h"
#include "CryptoAlgorithms/DES.h"
#include "CryptoAlgorithms/RSA.h"
#include "CryptoAlgorithms/XTEA.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ClientInterface;
}
QT_END_NAMESPACE

class ClientInterface : public QMainWindow
{
    Q_OBJECT

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

private:
    Ui::ClientInterface *ui;
    MessageWidget *messageWidget;
    TypeAlghorithm typeAlghorithm = AES;
    SpeedTimer timer;

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
};
#endif // CLIENTINTERFACE_H
