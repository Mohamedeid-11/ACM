#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_register_2_clicked()
{
    ui->usersList->clear();

    QString username = ui->username_line->text();
    QString password = ui->password_line->text();

    if(username.size()==0 || password.size() == 0)
    {
        qWarning() << "Enter a userName and a Password";
        return;
    }

    for(int i = 0; i < users.size(); i++)
    {
        if(username == users[i]->name)
        {
            qCritical() << "This username already exists";
            return;
        }
    }

    QSharedPointer<User> user_ptr(new User());
    user_ptr->name = username;
    user_ptr->password = password;
    users.append(user_ptr);

    user_ptr->add(username, password);
}


void MainWindow::on_list_users_clicked()
{
    loadUsers();

    ui->usersList->clear();
    for(int i = 0; i < users.size(); i++)
    {
        ui->usersList->appendPlainText(users[i]->name + ", " + users[i]->password + '\n');
    }
}

