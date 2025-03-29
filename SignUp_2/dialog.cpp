#include "dialog.h"
#include "ui_dialog.h"
#include "save_load_users.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_register_2_clicked()
{
    QString username = ui->username_line->text();
    QString password = ui->password_line->text();

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


void Dialog::on_list_clicked()
{
    emit accepted();
    this->accept();
}

