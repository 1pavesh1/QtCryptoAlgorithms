#ifndef CLIENTINTERFACE_H
#define CLIENTINTERFACE_H

#include <QMainWindow>
#include "CustomWidgets/MessageWidget.h"
#include "Enum/TypeAlgorithm.h"
#include "Timer/SpeedTimer.h"

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

private:
    Ui::ClientInterface *ui;
    MessageWidget *messageWidget;
    TypeAlghorithm typeAlghorithm = AES;
    QList <QString> listWords;
    SpeedTimer timer;

    void EncryptMsg(const QString &msg);
    void DecryptMsg(const QString &msg);

    void EncryptAES(const QList <QString> &listWords);
    void EncryptBlowfish(const QList <QString> &listWords);
    void EncryptDES(const QList <QString> &listWords);
    void EncryptRSA(const QList <QString> &listWords);
    void EncryptXTEA(const QList <QString> &listWords);

    void DecryptAES(const QList <QString> &listWords);
    void DecryptBlowfish(const QList <QString> &listWords);
    void DecryptDES(const QList <QString> &listWords);
    void DecryptRSA(const QList <QString> &listWords);
    void DecryptXTEA(const QList <QString> &listWords);
};
#endif // CLIENTINTERFACE_H
