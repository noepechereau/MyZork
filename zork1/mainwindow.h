#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "player.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QPixmap>
#include "object.h"
#include "whitehouse.h"
#include "wordle.h"

#include <QApplication>

#include <iostream>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public :
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    void openNewWindow();
    int setposition();
    void setmap();
    whitehouse wh;
    wordle wd ;

private slots:
    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_rightButton_clicked();

    void on_leftButton_clicked();
    int on_interactbutton_clicked();
};
#endif // MAINWINDOW_H
