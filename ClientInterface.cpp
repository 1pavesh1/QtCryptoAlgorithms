#include "ClientInterface.h"
#include "ui_ClientInterface.h"

ClientInterface::ClientInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientInterface)
{
    ui->setupUi(this);
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
        typeAlghorithm = RSA;
        break;
    case 2:
        typeAlghorithm = XTEA;
        break;
    default:
        break;
    }
    UpdateInterfaceFrame(typeAlghorithm);
}

void ClientInterface::UpdateInterfaceFrame(const TypeAlgorithm &typeAlghorithm)
{
    ClearInterfaceFrame();
    switch(typeAlghorithm)
    {
    case AES:
        ui->aesInfoFrame->setVisible(true);
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
    if (!inputTextList.isEmpty())
        inputTextList.clear();
}

void ClientInterface::on_toCryptPushButton_clicked()
{
    if (ui->formatBase64CheckBox->isChecked() || ui->formatHEXCheckBox->isChecked())
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
    else
    {
        messageWidget = new MessageWidget(this, "Вы не выбрали формат зашифрованного текста", WARNING);
        messageWidget->Show();
    }
}

void ClientInterface::on_fromCryptPushButton_clicked()
{
    if (ui->formatBase64CheckBox->isChecked() || ui->formatHEXCheckBox->isChecked())
    {
        if (ui->decryptDataPlainTextEdit->toPlainText().trimmed().isEmpty())
        {
            messageWidget = new MessageWidget(this, "Вы не ввели текст для шифрования", INFORMATION);
            messageWidget->Show();
        }
        else
        {
            QByteArray message = ui->decryptDataPlainTextEdit->toPlainText().trimmed().toUtf8();
            DecryptMsg(message);
        }
    }
    else
    {
        messageWidget = new MessageWidget(this, "Вы не выбрали формат зашифрованного текста", WARNING);
        messageWidget->Show();
    }
}

void ClientInterface::EncryptMsg(const QByteArray &message)
{
    if (ValidatorInputText::ValidateInpuText(inputTextList, typeAlghorithm))
    {
        timer.StartTimer();
        switch(typeAlghorithm)
        {
        case AES:
            EncryptAES(message);
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
    else
    {
        messageWidget = new MessageWidget(this, "Неверно введены данные", WARNING);
        messageWidget->Show();
    }
}

void ClientInterface::DecryptMsg(const QByteArray &message)
{
    if (ValidatorInputText::ValidateInpuText(inputTextList, typeAlghorithm))
    {
        switch(typeAlghorithm)
        {
        case AES:
            DecryptAES(message);
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
    else
    {
        messageWidget = new MessageWidget(this, "Неверно введены данные", WARNING);
        messageWidget->Show();
    }
}

void ClientInterface::EncryptAES(const QByteArray &message)
{
    aesEncryptor.SetInitVector(ui->IVLineEdit->text().trimmed().toUtf8());
    QByteArray key = ui->secretKeyLineEdit->text().trimmed().toUtf8();
    QByteArray encryptMsg = aesEncryptor.EncryptMsg(message, key);
    if (ui->formatHEXCheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toHex());
    else if (ui->formatBase64CheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toBase64());
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
    QByteArray encryptMsg = xteaEncryptor.EncryptMsg(message, secretKey);
    if (ui->formatHEXCheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toHex());
    else if (ui->formatBase64CheckBox->isChecked())
        ui->decryptDataPlainTextEdit->setPlainText(encryptMsg.toBase64());
}

void ClientInterface::DecryptAES(const QByteArray &message)
{
    QByteArray key = ui->secretKeyLineEdit->text().trimmed().toUtf8();
    QByteArray decryptMsg;
    if (ui->formatHEXCheckBox->isChecked())
        decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromHex(message), key);
    else if (ui->formatBase64CheckBox->isChecked())
        decryptMsg = aesEncryptor.DecryptMsg(QByteArray::fromBase64(message), key);
    ui->encryptDataPlainTextEdit->setPlainText(decryptMsg);
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
        decryptMsg = xteaEncryptor.DecryptMsg(QByteArray::fromHex(message), secretKey);
    else if (ui->formatBase64CheckBox->isChecked())
        decryptMsg = xteaEncryptor.DecryptMsg(QByteArray::fromBase64(message), secretKey);
    ui->encryptDataPlainTextEdit->setPlainText(decryptMsg);
}

void ClientInterface::ClearRSAData()
{
    ui->closeKeyRSALineEdit->clear();
    ui->openKeyRSALineEdit->clear();
}

void ClientInterface::ClearAESData()
{
    ui->secretKeyLineEdit->clear();
    ui->IVLineEdit->clear();
}

void ClientInterface::ClearXTEAData()
{
    ui->secretKeyXTEALineEdit->clear();
}

void ClientInterface::GenerateRSAData()
{
    QByteArray publicKey, privateKey;
    GeneratorDataCrypt::GetInstance()->GenerateRSAKeys(publicKey, privateKey);
    ui->openKeyRSALineEdit->setText(publicKey.toHex());
    ui->closeKeyRSALineEdit->setText(privateKey.toHex());
    inputTextList.append(ui->openKeyRSALineEdit);
    inputTextList.append(ui->closeKeyRSALineEdit);
}

void ClientInterface::GenerateAESData()
{
    QByteArray IV = GeneratorDataCrypt::GetInstance()->GenerateInitVector();
    QByteArray secretAESKey;
    switch (aesEncryptor.sizeKeyAES)
    {
    case bit128:
        secretAESKey = GeneratorDataCrypt::GetInstance()->Generate128BitKey();
        break;
    case bit192:
        secretAESKey = GeneratorDataCrypt::GetInstance()->Generate192BitKey();
        break;
    case bit256:
        secretAESKey = GeneratorDataCrypt::GetInstance()->Generate256BitKey();
        break;
    default:
        break;
    }
    ui->secretKeyLineEdit->setText(secretAESKey.toHex());
    ui->IVLineEdit->setText(IV.toHex());
    inputTextList.append(ui->IVLineEdit);
    inputTextList.append(ui->secretKeyLineEdit);
}

void ClientInterface::GenerateXTEAData()
{
    QByteArray secretXTEAKey = GeneratorDataCrypt::GetInstance()->Generate128BitKey();
    ui->secretKeyXTEALineEdit->setText(secretXTEAKey.toHex());
    inputTextList.append(ui->secretKeyXTEALineEdit);
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

void ClientInterface::on_sizeSecretKeyQComboBox_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        aesEncryptor.sizeKeyAES = bit128;
        ui->secretKeyLineEdit->setMaxLength(32);
        break;
    case 1:
        aesEncryptor.sizeKeyAES = bit192;
        ui->secretKeyLineEdit->setMaxLength(48);
        break;
    case 2:
        aesEncryptor.sizeKeyAES = bit256;
        ui->secretKeyLineEdit->setMaxLength(64);
        break;
    default:
        break;
    }
}

void ClientInterface::on_generateKeysDataPushButton_clicked()
{
    switch(typeAlghorithm)
    {
    case AES:
        GenerateAESData();
        break;
    case RSA:
        GenerateRSAData();
        break;
    case XTEA:
        GenerateXTEAData();
        break;
    default:
        break;
    }
}

void ClientInterface::on_clearKeysDataPushButton_clicked()
{
    switch(typeAlghorithm)
    {
    case AES:
        ClearAESData();
        break;
    case RSA:
        ClearRSAData();
        break;
    case XTEA:
        ClearXTEAData();
        break;
    default:
        break;
    }
}
void ClientInterface::on_operationModeQComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        aesEncryptor.typeOperatingAES = CBC;
        break;
    case 1:
        aesEncryptor.typeOperatingAES = ECB;
        break;
    default:
        break;
    }
}
