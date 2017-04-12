#ifndef FLUFFYSPOON_H
#define FLUFFYSPOON_H

#include <QMainWindow>

namespace Ui {
class FluffySpoon;
}

class FluffySpoon : public QMainWindow
{
    Q_OBJECT

public:
    explicit FluffySpoon(QWidget *parent = 0);
    ~FluffySpoon();

private:
    Ui::FluffySpoon *ui;
};

#endif // FLUFFYSPOON_H
