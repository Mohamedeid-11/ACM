#include "user.h"
#include "save_load_users.h"

User::User()
{}

User::~User()
{}

void User::add(QString name, QString Password)
{

    QFile file("Users.txt");
    if(!file.open(QIODevice::ReadWrite))
    {
        qCritical() << "Could not save Users.txt" << file.errorString();
        return;
    }
    QTextStream stream(&file);
    // QDataStream stream(&file);
    // stream.setVersion(QDataStream::Qt_6_7);
    // file.seek(0);

    int len;
    // stream >> len;
    len = users.size();
    stream << len;
    file.close();

    if(!file.open(QIODevice::Append))
    {
        qCritical() << "Could not save Users.txt" << file.errorString();
        return;
    }
    stream << name << Qt::endl;
    stream << password << Qt::endl;

    file.close();
    qInfo() << "user registered successfully!";

}

