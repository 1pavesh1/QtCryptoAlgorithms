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
    QLabel *formatOutLabel;
    QCheckBox *formatHEXCheckBox;
    QCheckBox *formatBase64CheckBox;
    QLabel *openKeyLabel;
    QLabel *closeKeyLabel;
    QLineEdit *openKeyRSALineEdit;
    QLineEdit *closeKeyRSALineEdit;
    QPushButton *generateRSAKeyPushButton;
    QPushButton *clearRSAKeysPushButton;
    QLabel *timeToCrypt;
    QLabel *textToCrypt;
    QLabel *textCrypt;
    QPushButton *fromCryptPushButton;
    QPlainTextEdit *encryptDataPlainTextEdit;
    QPlainTextEdit *decryptDataPlainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientInterface)
    {
        if (ClientInterface->objectName().isEmpty())
            ClientInterface->setObjectName("ClientInterface");
        ClientInterface->resize(1000, 600);
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
        toCryptPushButton->setGeometry(QRect(10, 490, 481, 31));
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
        rsaInfoFrame->setGeometry(QRect(190, 0, 801, 121));
        rsaInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        rsaInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        formatOutLabel = new QLabel(rsaInfoFrame);
        formatOutLabel->setObjectName("formatOutLabel");
        formatOutLabel->setGeometry(QRect(10, 90, 331, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(15);
        font2.setBold(true);
        formatOutLabel->setFont(font2);
        formatOutLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"}"));
        formatHEXCheckBox = new QCheckBox(rsaInfoFrame);
        formatHEXCheckBox->setObjectName("formatHEXCheckBox");
        formatHEXCheckBox->setGeometry(QRect(350, 87, 61, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(false);
        formatHEXCheckBox->setFont(font3);
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
        formatBase64CheckBox = new QCheckBox(rsaInfoFrame);
        formatBase64CheckBox->setObjectName("formatBase64CheckBox");
        formatBase64CheckBox->setGeometry(QRect(420, 87, 81, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        formatBase64CheckBox->setFont(font4);
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
        openKeyLabel = new QLabel(rsaInfoFrame);
        openKeyLabel->setObjectName("openKeyLabel");
        openKeyLabel->setGeometry(QRect(10, 10, 171, 21));
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
        openKeyRSALineEdit->setGeometry(QRect(190, 10, 601, 24));
        closeKeyRSALineEdit = new QLineEdit(rsaInfoFrame);
        closeKeyRSALineEdit->setObjectName("closeKeyRSALineEdit");
        closeKeyRSALineEdit->setGeometry(QRect(190, 50, 601, 24));
        generateRSAKeyPushButton = new QPushButton(rsaInfoFrame);
        generateRSAKeyPushButton->setObjectName("generateRSAKeyPushButton");
        generateRSAKeyPushButton->setGeometry(QRect(520, 85, 151, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(12);
        font5.setBold(true);
        generateRSAKeyPushButton->setFont(font5);
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
        clearRSAKeysPushButton->setGeometry(QRect(675, 85, 121, 31));
        clearRSAKeysPushButton->setFont(font5);
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
        timeToCrypt->setGeometry(QRect(10, 520, 981, 31));
        timeToCrypt->setFont(font2);
        textToCrypt = new QLabel(centralwidget);
        textToCrypt->setObjectName("textToCrypt");
        textToCrypt->setGeometry(QRect(10, 130, 481, 21));
        textToCrypt->setFont(font2);
        textCrypt = new QLabel(centralwidget);
        textCrypt->setObjectName("textCrypt");
        textCrypt->setGeometry(QRect(500, 130, 491, 21));
        textCrypt->setFont(font2);
        fromCryptPushButton = new QPushButton(centralwidget);
        fromCryptPushButton->setObjectName("fromCryptPushButton");
        fromCryptPushButton->setGeometry(QRect(500, 490, 491, 31));
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
        encryptDataPlainTextEdit->setGeometry(QRect(10, 160, 481, 321));
        decryptDataPlainTextEdit = new QPlainTextEdit(centralwidget);
        decryptDataPlainTextEdit->setObjectName("decryptDataPlainTextEdit");
        decryptDataPlainTextEdit->setGeometry(QRect(500, 160, 491, 321));
        ClientInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
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
        formatOutLabel->setText(QCoreApplication::translate("ClientInterface", "\320\244\320\276\321\200\320\274\320\260\321\202 \320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260:", nullptr));
        formatHEXCheckBox->setText(QCoreApplication::translate("ClientInterface", "HEX", nullptr));
        formatBase64CheckBox->setText(QCoreApplication::translate("ClientInterface", "Base64", nullptr));
        openKeyLabel->setText(QCoreApplication::translate("ClientInterface", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        closeKeyLabel->setText(QCoreApplication::translate("ClientInterface", "\320\227\320\260\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        generateRSAKeyPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        clearRSAKeysPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        timeToCrypt->setText(QCoreApplication::translate("ClientInterface", "\320\222\321\200\320\265\320\274\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        textToCrypt->setText(QCoreApplication::translate("ClientInterface", "\320\242\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        textCrypt->setText(QCoreApplication::translate("ClientInterface", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        fromCryptPushButton->setText(QCoreApplication::translate("ClientInterface", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientInterface: public Ui_ClientInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINTERFACE_H
