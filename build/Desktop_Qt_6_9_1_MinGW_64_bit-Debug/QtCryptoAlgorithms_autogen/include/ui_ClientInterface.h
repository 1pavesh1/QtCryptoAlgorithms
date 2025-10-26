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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
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
    QPlainTextEdit *dataToCryptPlainTextEdit;
    QPlainTextEdit *dataCryptPlainTextEdit;
    QComboBox *alghoritmsCryptComboBox;
    QPushButton *toCryptPushButton;
    QFrame *frame;
    QLabel *timeToCrypt;
    QLabel *textToCrypt;
    QLabel *textCrypt;
    QPushButton *fromCryptPushButton;
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
        dataToCryptPlainTextEdit = new QPlainTextEdit(centralwidget);
        dataToCryptPlainTextEdit->setObjectName("dataToCryptPlainTextEdit");
        dataToCryptPlainTextEdit->setGeometry(QRect(10, 120, 481, 361));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        dataToCryptPlainTextEdit->setFont(font);
        dataToCryptPlainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	border: none;\n"
"	border-radius: 20px;\n"
"	background-color: white;\n"
"	padding: 10px;\n"
"}"));
        dataCryptPlainTextEdit = new QPlainTextEdit(centralwidget);
        dataCryptPlainTextEdit->setObjectName("dataCryptPlainTextEdit");
        dataCryptPlainTextEdit->setGeometry(QRect(500, 120, 491, 361));
        dataCryptPlainTextEdit->setFont(font);
        dataCryptPlainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	border: none;\n"
"	border-radius: 20px;\n"
"	background-color: white;\n"
"	padding: 10px;\n"
"}"));
        alghoritmsCryptComboBox = new QComboBox(centralwidget);
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->addItem(QString());
        alghoritmsCryptComboBox->setObjectName("alghoritmsCryptComboBox");
        alghoritmsCryptComboBox->setGeometry(QRect(10, 0, 481, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        alghoritmsCryptComboBox->setFont(font1);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(true);
        toCryptPushButton->setFont(font2);
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
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(500, 0, 491, 91));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        timeToCrypt = new QLabel(centralwidget);
        timeToCrypt->setObjectName("timeToCrypt");
        timeToCrypt->setGeometry(QRect(10, 520, 981, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(15);
        font3.setBold(true);
        timeToCrypt->setFont(font3);
        textToCrypt = new QLabel(centralwidget);
        textToCrypt->setObjectName("textToCrypt");
        textToCrypt->setGeometry(QRect(10, 95, 481, 21));
        textToCrypt->setFont(font3);
        textCrypt = new QLabel(centralwidget);
        textCrypt->setObjectName("textCrypt");
        textCrypt->setGeometry(QRect(500, 95, 451, 21));
        textCrypt->setFont(font3);
        fromCryptPushButton = new QPushButton(centralwidget);
        fromCryptPushButton->setObjectName("fromCryptPushButton");
        fromCryptPushButton->setGeometry(QRect(500, 490, 491, 31));
        fromCryptPushButton->setFont(font2);
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
