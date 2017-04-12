#include "fluffyspoon.h"
#include "ui_fluffyspoon.h"

FluffySpoon::FluffySpoon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FluffySpoon)
{
    ui->setupUi(this);
}

FluffySpoon::~FluffySpoon()
{
    delete ui;
}
