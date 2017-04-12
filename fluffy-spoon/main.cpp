#include "fluffyspoon.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FluffySpoon w;
    w.show();

    return a.exec();
}
