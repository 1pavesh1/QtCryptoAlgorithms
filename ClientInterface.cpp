#include "ClientInterface.h"
#include "ui_ClientInterface.h"
#include <QThread>

ClientInterface::ClientInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientInterface)
{
    ui->setupUi(this);
    ClearInterfaceFrame();
}

ClientInterface::~ClientInterface()
{
    delete ui;
}

void ClientInterface::on_alghoritmsCryptComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        typeAlghorithm = AES;
        break;
    case 1:
        typeAlghorithm = Blowfish;
        break;
    case 2:
        typeAlghorithm = DES;
        break;
    case 3:
        typeAlghorithm = RSA;
        break;
    case 4:
        typeAlghorithm = XTEA;
        break;
    default:
        break;
    }
    UpdateInterfaceFrame(typeAlghorithm);
}

void ClientInterface::UpdateInterfaceFrame(const TypeAlghorithm &typeAlghorithm)
{
    ClearInterfaceFrame();
    switch(typeAlghorithm)
    {
    case AES:
        break;
    case Blowfish:
        break;
    case DES:
        break;
    case RSA:
        ui->rsaInfoFrame->setVisible(true);
        break;
    case XTEA:
        break;
    default:
        break;
    }
}

void ClientInterface::ClearInterfaceFrame()
{
    ui->rsaInfoFrame->setVisible(false);
}

void ClientInterface::on_toCryptPushButton_clicked()
{
    if (ui->encryptDataPlainTextEdit->toPlainText().trimmed().isEmpty())
    {
        messageWidget = new MessageWidget(this, "Вы не ввели текст для шифрования", INFORMATION);
        messageWidget->Show();
    }
    else
    {
        QByteArray message = ui->encryptDataPlainTextEdit->toPlainText().trimmed().toUtf8();
        EncryptMsg(message);
    }
}

void ClientInterface::on_fromCryptPushButton_clicked()
{
    if (ui->decryptDataPlainTextEdit->toPlainText().trimmed().isEmpty())
    {
        messageWidget = new MessageWidget(this, "Вы не ввели текст для расшифрования", INFORMATION);
        messageWidget->Show();
    }
    else
    {
        QByteArray message = ui->decryptDataPlainTextEdit->toPlainText().trimmed().toUtf8();
        DecryptMsg(message);
    }
}

void ClientInterface::EncryptMsg(const QByteArray &message)
{
    switch(typeAlghorithm)
    {
    case AES:
        EncryptAES(message);
        break;
    case Blowfish:
        EncryptBlowfish(message);
        break;
    case DES:
        EncryptDES(message);
        break;
    case RSA:
        EncryptRSA(message);
        break;
    case XTEA:
        EncryptXTEA(message);
        break;
    default:
        break;
    }
}

void ClientInterface::DecryptMsg(const QByteArray &message)
{
    switch(typeAlghorithm)
    {
    case AES:
        DecryptAES(message);
        break;
    case Blowfish:
        DecryptBlowfish(message);
        break;
    case DES:
        DecryptDES(message);
        break;
    case RSA:
        DecryptRSA(message);
        break;
    case XTEA:
        DecryptXTEA(message);
        break;
    default:
        break;
    }
}

void ClientInterface::EncryptAES(const QByteArray &message)
{

}

void ClientInterface::EncryptBlowfish(const QByteArray &message)
{

}

void ClientInterface::EncryptDES(const QByteArray &message)
{

}

void ClientInterface::EncryptRSA(const QByteArray &message)
{
    QByteArray publicKey = ui->openKeyRSALineEdit->text().trimmed().toUtf8();
    QByteArray encryptMsg = rsaEncryptor.EncryptMsg(message, publicKey);
    if (ui->formatHEXCheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toHex());
    else if (ui->formatBase64CheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toBase64());
}

void ClientInterface::EncryptXTEA(const QByteArray &message)
{

}

void ClientInterface::DecryptAES(const QByteArray &message)
{

}

void ClientInterface::DecryptBlowfish(const QByteArray &message)
{

}

void ClientInterface::DecryptDES(const QByteArray &message)
{

}

void ClientInterface::DecryptRSA(const QByteArray &message)
{
    QByteArray privateKey = ui->closeKeyRSALineEdit->text().trimmed().toUtf8();
    QByteArray decryptMsg;
    if (ui->formatHEXCheckBox->isChecked())
        decryptMsg = rsaEncryptor.DecryptMsg(QByteArray::fromHex(message), privateKey);
    else if (ui->formatBase64CheckBox->isChecked())
        decryptMsg = rsaEncryptor.DecryptMsg(QByteArray::fromBase64(message), privateKey);
    ui->encryptDataPlainTextEdit->setPlainText(decryptMsg);
}

void ClientInterface::DecryptXTEA(const QByteArray &message)
{

}
void ClientInterface::on_generateRSAKeyPushButton_clicked()
{
    QByteArray publicKey, privateKey;
    rsaEncryptor.GenerateKeys(publicKey, privateKey);
    ui->closeKeyRSALineEdit->setText(privateKey.toHex());
    ui->openKeyRSALineEdit->setText(publicKey.toHex());
}


void ClientInterface::on_clearRSAKeysPushButton_clicked()
{
    ui->closeKeyRSALineEdit->clear();
    ui->openKeyRSALineEdit->clear();
}

void ClientInterface::on_formatHEXCheckBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
        ui->formatBase64CheckBox->setChecked(false);
}

void ClientInterface::on_formatBase64CheckBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
        ui->formatHEXCheckBox->setChecked(false);
}
