#ifndef WHITEHOUSE_H
#define WHITEHOUSE_H

#include <QMainWindow>

namespace Ui {
class whitehouse;
}

class whitehouse : public QMainWindow
{
    Q_OBJECT

public:
    whitehouse(QWidget *parent = nullptr);
    ~whitehouse();
    Ui::whitehouse *ui;
    virtual void setmap();
};

#endif // WHITEHOUSE_H
