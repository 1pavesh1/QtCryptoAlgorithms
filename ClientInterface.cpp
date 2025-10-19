#include "ClientInterface.h"
#include "ui_ClientInterface.h"

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
