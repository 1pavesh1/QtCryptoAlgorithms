#include "ClientInterface.h"
#include "ui_ClientInterface.h"
#include <QThread>

ClientInterface::ClientInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientInterface)
{
    ui->setupUi(this);
}

ClientInterface::~ClientInterface()
{
    delete ui;
}

void ClientInterface::on_alghoritmsCryptComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 1:
        typeAlghorithm = AES;
        break;
    case 2:
        typeAlghorithm = Blowfish;
        break;
    case 3:
        typeAlghorithm = DES;
        break;
    case 4:
        typeAlghorithm = RSA;
        break;
    case 5:
        typeAlghorithm = XTEA;
        break;
    default:
        break;
    }
}

void ClientInterface::on_toCryptPushButton_clicked()
{
    if (ui->dataToCryptPlainTextEdit->toPlainText().trimmed().isEmpty())
    {
        messageWidget = new MessageWidget(this, "Вы не ввели текст для шифрования", INFORMATION);
        messageWidget->Show();
    }
    else
    {
        EncryptMsg(ui->dataToCryptPlainTextEdit->toPlainText().trimmed());
        ui->dataCryptPlainTextEdit->clear();
    }
}

void ClientInterface::on_fromCryptPushButton_clicked()
{
    if (ui->dataCryptPlainTextEdit->toPlainText().trimmed().isEmpty())
    {
        messageWidget = new MessageWidget(this, "Вы не ввели текст для расшифрования", INFORMATION);
        messageWidget->Show();
    }
    else
    {
        DecryptMsg(ui->dataCryptPlainTextEdit->toPlainText().trimmed());
        ui->dataToCryptPlainTextEdit->clear();
    }
}

void ClientInterface::EncryptMsg(const QString &msg)
{
    QList <QString> listWords = msg.split(' ');
    switch(typeAlghorithm)
    {
    case AES:
        EncryptAES(listWords);
        break;
    case Blowfish:
        EncryptBlowfish(listWords);
        break;
    case DES:
        EncryptDES(listWords);
        break;
    case RSA:
        EncryptRSA(listWords);
        break;
    case XTEA:
        EncryptXTEA(listWords);
        break;
    default:
        break;
    }
}

void ClientInterface::DecryptMsg(const QString &msg)
{
    QList <QString> listWords = msg.split(' ');
    switch(typeAlghorithm)
    {
    case AES:
        DecryptAES(listWords);
        break;
    case Blowfish:
        DecryptBlowfish(listWords);
        break;
    case DES:
        DecryptDES(listWords);
        break;
    case RSA:
        DecryptRSA(listWords);
        break;
    case XTEA:
        DecryptXTEA(listWords);
        break;
    default:
        break;
    }
}

void ClientInterface::EncryptAES(const QList <QString> &listWords)
{

}

void ClientInterface::EncryptBlowfish(const QList <QString> &listWords)
{

}

void ClientInterface::EncryptDES(const QList <QString> &listWords)
{

}

void ClientInterface::EncryptRSA(const QList <QString> &listWords)
{

}

void ClientInterface::EncryptXTEA(const QList <QString> &listWords)
{

}

void ClientInterface::DecryptAES(const QList <QString> &listWords)
{

}

void ClientInterface::DecryptBlowfish(const QList <QString> &listWords)
{

}

void ClientInterface::DecryptDES(const QList <QString> &listWords)
{

}

void ClientInterface::DecryptRSA(const QList <QString> &listWords)
{

}

void ClientInterface::DecryptXTEA(const QList <QString> &listWords)
{

}
