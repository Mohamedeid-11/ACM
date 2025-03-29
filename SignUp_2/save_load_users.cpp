#include "save_load_users.h"


QList<QSharedPointer<User>> users;


void loadUsers()
{
    QFile file("Users.txt");

    if(!file.exists())
    {
        qWarning() << "file Users.txt does not exist";
        return;
    }

    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << "Could not open Users.txt" << file.errorString();
        file.close();
        return;
    }

    QTextStream stream(&file);
    // while(!file.atEnd())
    // {
    //     qInfo() << file.readLine();
    // }

    // QDataStream stream(&file);
    // if(stream.version() != QDataStream::Qt_6_7)
    // {
    //     qCritical() << "Wrong data stream version" ;
    //     return;
    // }

    users.clear();

    // file.seek(0);
    int users_num;
    stream >> users_num;

    qInfo() << "loading" << users_num << " users...";

    for(int i = 0; i < users_num; i++)
    {
        QSharedPointer<User> user_ptr(new User());
        stream >> user_ptr->name;
        stream >> user_ptr->password;

        users.append(user_ptr);
    }

    file.close();
    qInfo() << "file was loaded successfully!";
}



