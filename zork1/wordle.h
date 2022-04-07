#ifndef WORDLE_H
#define WORDLE_H

#include <QMainWindow>

namespace Ui {
class wordle;
}

class wordle : public QMainWindow
{
    Q_OBJECT

public:
    bool finish;
    explicit wordle(QWidget *parent = nullptr);
    ~wordle();
    Ui::wordle *ui;
    bool isgood();
    virtual void setmap();

private slots:
    void on_pushButton_clicked();
};

#endif // WORDLE_H
