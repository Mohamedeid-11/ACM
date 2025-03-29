#ifndef USER_H
#define USER_H

#include <QObject>
#include <QDebug>
#include <QDataStream>
#include <QFile>

struct User
{
    explicit User();
    ~User();
    int ID;
    QString name;
    QString password;
    void add(QString name, QString Password);

// private:

};

#endif // USER_H
