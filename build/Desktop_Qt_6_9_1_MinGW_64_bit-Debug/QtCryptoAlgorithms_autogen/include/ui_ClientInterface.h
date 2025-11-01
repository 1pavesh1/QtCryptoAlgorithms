/********************************************************************************
** Form generated from reading UI file 'ClientInterface.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINTERFACE_H
#define UI_CLIENTINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientInterface
{
public:
    QWidget *centralwidget;
    QComboBox *alghoritmsCryptComboBox;
    QPushButton *toCryptPushButton;
    QFrame *rsaInfoFrame;
    QLabel *openKeyLabel;
    QLabel *closeKeyLabel;
    QLineEdit *openKeyRSALineEdit;
    QLineEdit *closeKeyRSALineEdit;
    QPushButton *generateRSAKeyPushButton;
    QPushButton *clearRSAKeysPushButton;
    QLabel *timeToCrypt;
    QPushButton *fromCryptPushButton;
    QPlainTextEdit *encryptDataPlainTextEdit;
    QPlainTextEdit *decryptDataPlainTextEdit;
    QLabel *formatOutLabel;
    QCheckBox *formatHEXCheckBox;
    QCheckBox *formatBase64CheckBox;
    QFrame *aesInfoFrame;
    QLabel *IVLabel;
    QLabel *secretKeyLabel;
    QLineEdit *IVLineEdit;
    QLineEdit *secretKeyLineEdit;
    QPushButton *generateAESKeyAndIVPushButton;
    QPushButton *clearAESKeyAndIVPushButton;
    QComboBox *sizeSecretKetQComboBox;
    QLabel *secretKeyLabel_2;
    QLabel *secretKeyLabel_3;
    QComboBox *operationModeQComboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientInterface)
    {
        if (ClientInterface->objectName().isEmpty())
            ClientInterface->setObjectName("ClientInterface");
        ClientInterface->resize(1200, 750);
        ClientInterface->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        centralwidget = new QWidget(ClientInterface);
        centralwidget->setObjectName("centralwidget");
        alghoritmsCryptComboBox = new QComboBox(centralwidget);
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->setObjectName("alghoritmsCryptComboBox");
        alghoritmsCryptComboBox->setGeometry(QRect(10, 0, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        alghoritmsCryptComboBox->setFont(font);
        alghoritmsCryptComboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        alghoritmsCryptComboBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: none;\n"
"    border-bottom: 2px solid #e0e0e0;\n"
"    padding: 12px 0px 8px 0px;\n"
"    background: transparent;\n"
"    color: #333;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox:focus\n"
"{\n"
"    border-bottom-color: #3f51b5;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 0px;\n"
"	height: 0px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"    border: none;\n"
"    background: white;\n"
"    selection-background-color: #3f51b5;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"}"));
        toCryptPushButton = new QPushButton(centralwidget);
        toCryptPushButton->setObjectName("toCryptPushButton");
        toCryptPushButton->setGeometry(QRect(10, 650, 581, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        font1.setBold(true);
        toCryptPushButton->setFont(font1);
        toCryptPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toCryptPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 57, 60);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(255, 105, 108);\n"
"}"));
        rsaInfoFrame = new QFrame(centralwidget);
        rsaInfoFrame->setObjectName("rsaInfoFrame");
        rsaInfoFrame->setGeometry(QRect(190, 0, 1001, 271));
        rsaInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        rsaInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        openKeyLabel = new QLabel(rsaInfoFrame);
        openKeyLabel->setObjectName("openKeyLabel");
        openKeyLabel->setGeometry(QRect(10, 10, 171, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(15);
        font2.setBold(true);
        openKeyLabel->setFont(font2);
        openKeyLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        closeKeyLabel = new QLabel(rsaInfoFrame);
        closeKeyLabel->setObjectName("closeKeyLabel");
        closeKeyLabel->setGeometry(QRect(10, 50, 171, 21));
        closeKeyLabel->setFont(font2);
        closeKeyLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        openKeyRSALineEdit = new QLineEdit(rsaInfoFrame);
        openKeyRSALineEdit->setObjectName("openKeyRSALineEdit");
        openKeyRSALineEdit->setGeometry(QRect(190, 10, 801, 24));
        closeKeyRSALineEdit = new QLineEdit(rsaInfoFrame);
        closeKeyRSALineEdit->setObjectName("closeKeyRSALineEdit");
        closeKeyRSALineEdit->setGeometry(QRect(190, 50, 801, 24));
        generateRSAKeyPushButton = new QPushButton(rsaInfoFrame);
        generateRSAKeyPushButton->setObjectName("generateRSAKeyPushButton");
        generateRSAKeyPushButton->setGeometry(QRect(10, 230, 151, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        generateRSAKeyPushButton->setFont(font3);
        generateRSAKeyPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        generateRSAKeyPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(60, 187, 255);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(103, 255, 245);\n"
"}"));
        clearRSAKeysPushButton = new QPushButton(rsaInfoFrame);
        clearRSAKeysPushButton->setObjectName("clearRSAKeysPushButton");
        clearRSAKeysPushButton->setGeometry(QRect(170, 230, 121, 31));
        clearRSAKeysPushButton->setFont(font3);
        clearRSAKeysPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        clearRSAKeysPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 57, 60);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(255, 105, 108);\n"
"}"));
        timeToCrypt = new QLabel(centralwidget);
        timeToCrypt->setObjectName("timeToCrypt");
        timeToCrypt->setGeometry(QRect(10, 690, 1181, 31));
        timeToCrypt->setFont(font2);
        fromCryptPushButton = new QPushButton(centralwidget);
        fromCryptPushButton->setObjectName("fromCryptPushButton");
        fromCryptPushButton->setGeometry(QRect(600, 650, 591, 31));
        fromCryptPushButton->setFont(font1);
        fromCryptPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        fromCryptPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(79, 255, 70);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(141, 255, 116);\n"
"}"));
        encryptDataPlainTextEdit = new QPlainTextEdit(centralwidget);
        encryptDataPlainTextEdit->setObjectName("encryptDataPlainTextEdit");
        encryptDataPlainTextEdit->setGeometry(QRect(10, 320, 581, 321));
        decryptDataPlainTextEdit = new QPlainTextEdit(centralwidget);
        decryptDataPlainTextEdit->setObjectName("decryptDataPlainTextEdit");
        decryptDataPlainTextEdit->setGeometry(QRect(600, 320, 591, 321));
        formatOutLabel = new QLabel(centralwidget);
        formatOutLabel->setObjectName("formatOutLabel");
        formatOutLabel->setGeometry(QRect(10, 283, 331, 21));
        formatOutLabel->setFont(font2);
        formatOutLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        formatHEXCheckBox = new QCheckBox(centralwidget);
        formatHEXCheckBox->setObjectName("formatHEXCheckBox");
        formatHEXCheckBox->setGeometry(QRect(350, 280, 61, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(false);
        formatHEXCheckBox->setFont(font4);
        formatHEXCheckBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        formatHEXCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox \n"
"{\n"
"	color: blackl\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 4px;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #3498db;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background: #3498db;\n"
"    border: 2px solid #3498db;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"    background: #95a5a6;\n"
"    border: 2px solid #bdc3c7;\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled {\n"
"    background: #ecf0f1;\n"
"    border: 2px solid #bdc3c7;\n"
"}"));
        formatBase64CheckBox = new QCheckBox(centralwidget);
        formatBase64CheckBox->setObjectName("formatBase64CheckBox");
        formatBase64CheckBox->setGeometry(QRect(420, 280, 91, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(12);
        formatBase64CheckBox->setFont(font5);
        formatBase64CheckBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        formatBase64CheckBox->setStyleSheet(QString::fromUtf8("QCheckBox \n"
"{\n"
"	color: blackl\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 4px;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #3498db;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background: #3498db;\n"
"    border: 2px solid #3498db;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"    background: #95a5a6;\n"
"    border: 2px solid #bdc3c7;\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled {\n"
"    background: #ecf0f1;\n"
"    border: 2px solid #bdc3c7;\n"
"}"));
        aesInfoFrame = new QFrame(centralwidget);
        aesInfoFrame->setObjectName("aesInfoFrame");
        aesInfoFrame->setGeometry(QRect(190, 0, 1001, 271));
        aesInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        aesInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        IVLabel = new QLabel(aesInfoFrame);
        IVLabel->setObjectName("IVLabel");
        IVLabel->setGeometry(QRect(10, 10, 241, 21));
        IVLabel->setFont(font2);
        IVLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        secretKeyLabel = new QLabel(aesInfoFrame);
        secretKeyLabel->setObjectName("secretKeyLabel");
        secretKeyLabel->setGeometry(QRect(10, 50, 171, 21));
        secretKeyLabel->setFont(font2);
        secretKeyLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        IVLineEdit = new QLineEdit(aesInfoFrame);
        IVLineEdit->setObjectName("IVLineEdit");
        IVLineEdit->setGeometry(QRect(250, 10, 741, 24));
        IVLineEdit->setMaxLength(32);
        secretKeyLineEdit = new QLineEdit(aesInfoFrame);
        secretKeyLineEdit->setObjectName("secretKeyLineEdit");
        secretKeyLineEdit->setGeometry(QRect(250, 50, 741, 24));
        secretKeyLineEdit->setMaxLength(32);
        generateAESKeyAndIVPushButton = new QPushButton(aesInfoFrame);
        generateAESKeyAndIVPushButton->setObjectName("generateAESKeyAndIVPushButton");
        generateAESKeyAndIVPushButton->setGeometry(QRect(10, 230, 151, 31));
        generateAESKeyAndIVPushButton->setFont(font3);
        generateAESKeyAndIVPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        generateAESKeyAndIVPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(60, 187, 255);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(103, 255, 245);\n"
"}"));
        clearAESKeyAndIVPushButton = new QPushButton(aesInfoFrame);
        clearAESKeyAndIVPushButton->setObjectName("clearAESKeyAndIVPushButton");
        clearAESKeyAndIVPushButton->setGeometry(QRect(170, 230, 121, 31));
        clearAESKeyAndIVPushButton->setFont(font3);
        clearAESKeyAndIVPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        clearAESKeyAndIVPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 57, 60);\n"
"	color: white;\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgb(255, 105, 108);\n"
"}"));
        sizeSecretKetQComboBox = new QComboBox(aesInfoFrame);
        sizeSecretKetQComboBox->addItem(QString());
        sizeSecretKetQComboBox->addItem(QString());
        sizeSecretKetQComboBox->addItem(QString());
        sizeSecretKetQComboBox->setObjectName("sizeSecretKetQComboBox");
        sizeSecretKetQComboBox->setGeometry(QRect(250, 120, 171, 41));
        sizeSecretKetQComboBox->setFont(font);
        sizeSecretKetQComboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sizeSecretKetQComboBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: none;\n"
"    border-bottom: 2px solid #e0e0e0;\n"
"    padding: 12px 0px 8px 0px;\n"
"    background: transparent;\n"
"    color: #333;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox:focus\n"
"{\n"
"    border-bottom-color: #3f51b5;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 0px;\n"
"	height: 0px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"    border: none;\n"
"    background: white;\n"
"    selection-background-color: #3f51b5;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"}"));
        secretKeyLabel_2 = new QLabel(aesInfoFrame);
        secretKeyLabel_2->setObjectName("secretKeyLabel_2");
        secretKeyLabel_2->setGeometry(QRect(10, 130, 151, 21));
        secretKeyLabel_2->setFont(font2);
        secretKeyLabel_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        secretKeyLabel_3 = new QLabel(aesInfoFrame);
        secretKeyLabel_3->setObjectName("secretKeyLabel_3");
        secretKeyLabel_3->setGeometry(QRect(10, 90, 211, 21));
        secretKeyLabel_3->setFont(font2);
        secretKeyLabel_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        operationModeQComboBox = new QComboBox(aesInfoFrame);
        operationModeQComboBox->addItem(QString());
        operationModeQComboBox->addItem(QString());
        operationModeQComboBox->setObjectName("operationModeQComboBox");
        operationModeQComboBox->setGeometry(QRect(250, 80, 171, 41));
        operationModeQComboBox->setFont(font);
        operationModeQComboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        operationModeQComboBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: none;\n"
"    border-bottom: 2px solid #e0e0e0;\n"
"    padding: 12px 0px 8px 0px;\n"
"    background: transparent;\n"
"    color: #333;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox:focus\n"
"{\n"
"    border-bottom-color: #3f51b5;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 0px;\n"
"	height: 0px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"    border: none;\n"
"    background: white;\n"
"    selection-background-color: #3f51b5;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"}"));
        ClientInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        ClientInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientInterface);
        statusbar->setObjectName("statusbar");
        ClientInterface->setStatusBar(statusbar);

        retranslateUi(ClientInterface);

        QMetaObject::connectSlotsByName(ClientInterface);
    } // setupUi

    void retranslateUi(QMainWindow *ClientInterface)
    {
        ClientInterface->setWindowTitle(QCoreApplication::translate("ClientInterface", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        alghoritmsCryptComboBox->setItemText(0, QCoreApplication::translate("ClientInterface", "AES", nullptr));
        alghoritmsCryptComboBox->setItemText(1, QCoreApplication::translate("ClientInterface", "Blowfish", nullptr));
        alghoritmsCryptComboBox->setItemText(2, QCoreApplication::translate("ClientInterface", "DES", nullptr));
        alghoritmsCryptComboBox->setItemText(3, QCoreApplication::translate("ClientInterface", "RSA", nullptr));
        alghoritmsCryptComboBox->setItemText(4, QCoreApplication::translate("ClientInterface", "XTEA", nullptr));

        toCryptPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        openKeyLabel->setText(QCoreApplication::translate("ClientInterface", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        closeKeyLabel->setText(QCoreApplication::translate("ClientInterface", "\320\227\320\260\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        openKeyRSALineEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "HEX \321\204\320\276\321\200\320\274\320\260\321\202", nullptr));
        closeKeyRSALineEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "HEX \321\204\320\276\321\200\320\274\320\260\321\202", nullptr));
        generateRSAKeyPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        clearRSAKeysPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        timeToCrypt->setText(QCoreApplication::translate("ClientInterface", "\320\222\321\200\320\265\320\274\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        fromCryptPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        encryptDataPlainTextEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "\320\242\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217 (\320\244\320\276\321\200\320\274\320\260\321\202 UTF-8)", nullptr));
        decryptDataPlainTextEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        formatOutLabel->setText(QCoreApplication::translate("ClientInterface", "\320\244\320\276\321\200\320\274\320\260\321\202 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260:", nullptr));
        formatHEXCheckBox->setText(QCoreApplication::translate("ClientInterface", "HEX", nullptr));
        formatBase64CheckBox->setText(QCoreApplication::translate("ClientInterface", "Base64", nullptr));
        IVLabel->setText(QCoreApplication::translate("ClientInterface", "\320\222\320\265\320\272\321\202\320\276\321\200 \320\270\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270:", nullptr));
        secretKeyLabel->setText(QCoreApplication::translate("ClientInterface", "\320\241\320\265\320\272\321\200\320\265\321\202\320\275\321\213\320\271 \320\272\320\273\321\216\321\207: ", nullptr));
        IVLineEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "HEX \321\204\320\276\321\200\320\274\320\260\321\202 (\320\235\320\265\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276)", nullptr));
        secretKeyLineEdit->setPlaceholderText(QCoreApplication::translate("ClientInterface", "HEX \321\204\320\276\321\200\320\274\320\260\321\202", nullptr));
        generateAESKeyAndIVPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        clearAESKeyAndIVPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        sizeSecretKetQComboBox->setItemText(0, QCoreApplication::translate("ClientInterface", "128 Bit", nullptr));
        sizeSecretKetQComboBox->setItemText(1, QCoreApplication::translate("ClientInterface", "192 Bit", nullptr));
        sizeSecretKetQComboBox->setItemText(2, QCoreApplication::translate("ClientInterface", "256 Bit", nullptr));

        secretKeyLabel_2->setText(QCoreApplication::translate("ClientInterface", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\272\320\273\321\216\321\207\320\260: ", nullptr));
        secretKeyLabel_3->setText(QCoreApplication::translate("ClientInterface", "\320\240\320\265\320\266\320\270\320\274 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217: ", nullptr));
        operationModeQComboBox->setItemText(0, QCoreApplication::translate("ClientInterface", "ECB", nullptr));
        operationModeQComboBox->setItemText(1, QCoreApplication::translate("ClientInterface", "CBC", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ClientInterface: public Ui_ClientInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINTERFACE_H
