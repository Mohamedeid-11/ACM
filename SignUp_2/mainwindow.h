#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "save_load_users.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_register_2_clicked();

    void on_list_users_clicked();
};

#endif // MAINWINDOW_H
