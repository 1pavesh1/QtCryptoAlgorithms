#include "ClientInterface.h"
#include "ui_ClientInterface.h"

ClientInterface::ClientInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientInterface)
{
    ui->setupUi(this);
    ClearInterfaceFrame();
    UpdateInterfaceFrame(typeAlghorithm);
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
        ui->aesInfoFrame->setVisible(true);
        break;
    case Blowfish:
        break;
    case DES:
        break;
    case RSA:
        ui->rsaInfoFrame->setVisible(true);
        break;
    case XTEA:
        ui->xteaInfoFrame->setVisible(true);
        break;
    default:
        break;
    }
}

void ClientInterface::ClearInterfaceFrame()
{
    ui->rsaInfoFrame->setVisible(false);
    ui->aesInfoFrame->setVisible(false);
    ui->xteaInfoFrame->setVisible(false);
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
        messageWidget = new MessageWidget(this, "Вы не ввели текст для дешифрования", INFORMATION);
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
    timer.StartTimer();
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
    ui->timeToCrypt->setText("Время шифрования: " + QString::number(timer.GetSeconds()) + " миллисекунд");
    timer.StopTimer();
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
    QByteArray key = ui->secretKeyLineEdit->text().trimmed().toUtf8();
    QByteArray IV = ui->IVLineEdit->text().trimmed().toUtf8();
    QByteArray encryptMsg;

    switch (ui->operationModeQComboBox->currentIndex())
    {
    case 0:
        encryptMsg = aesEncryptor.EncryptMsg(message, key, IV, ECB);
        break;
    case 1:
        encryptMsg = aesEncryptor.EncryptMsg(message, key, IV, CBC);
        break;
    default:
        break;
    }

    if (ui->formatHEXCheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toHex());
    else if (ui->formatBase64CheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toBase64());
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
    QByteArray secretKey = ui->secretKeyXTEALineEdit->text().trimmed().toUtf8();
    QByteArray encryptMsg = xteaEncryptor.Encrypt(message, secretKey);
    if (ui->formatHEXCheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toHex());
    else if (ui->formatBase64CheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toBase64());
}

void ClientInterface::DecryptAES(const QByteArray &message)
{
    QByteArray key = ui->secretKeyLineEdit->text().trimmed().toUtf8();
    QByteArray decryptMsg;

    switch (ui->operationModeQComboBox->currentIndex())
    {
    case 0:
        if (ui->formatHEXCheckBox->isChecked())
            decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromHex(message), key, ECB);
        else if (ui->formatBase64CheckBox->isChecked())
            decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromBase64(message), key, ECB);
        break;
    case 1:
        if (ui->formatHEXCheckBox->isChecked())
            decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromHex(message), key, CBC);
        else if (ui->formatBase64CheckBox->isChecked())
            decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromBase64(message), key, CBC);
        break;
    default:
        break;
    }

    ui->encryptDataPlainTextEdit->setPlainText(decryptMsg);
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
    QByteArray secretKey = ui->secretKeyXTEALineEdit->text().trimmed().toUtf8();
    QByteArray decryptMsg;
    if (ui->formatHEXCheckBox->isChecked())
        decryptMsg = xteaEncryptor.Decrypt(QByteArray::fromHex(message), secretKey);
    else if (ui->formatBase64CheckBox->isChecked())
        decryptMsg = xteaEncryptor.Decrypt(QByteArray::fromBase64(message), secretKey);
    ui->encryptDataPlainTextEdit->setPlainText(decryptMsg);
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

void ClientInterface::on_generateAESKeyAndIVPushButton_clicked()
{
    ui->IVLineEdit->setText(aesEncryptor.GenerateIV().toHex());
    ui->secretKeyLineEdit->setText(aesEncryptor.GenerateKey(typeKeyAES).toHex());
}

void ClientInterface::on_sizeSecretKetQComboBox_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        typeKeyAES = bit128;
        ui->secretKeyLineEdit->setMaxLength(32);
        break;
    case 1:
        typeKeyAES = bit192;
        ui->secretKeyLineEdit->setMaxLength(48);
        break;
    case 2:
        typeKeyAES = bit256;
        ui->secretKeyLineEdit->setMaxLength(64);
        break;
    default:
        break;
    }
}

void ClientInterface::on_generateXTEAKeyPushButton_clicked()
{
    ui->secretKeyXTEALineEdit->setText(xteaEncryptor.Generate128BitKey().toHex());
}

void ClientInterface::on_clearXTEAKeyPushButton_clicked()
{
    ui->secretKeyXTEALineEdit->clear();
}

void ClientInterface::on_clearAESKeyAndIVPushButton_clicked()
{
    ui->IVLineEdit->clear();
    ui->secretKeyLineEdit->clear();
}
