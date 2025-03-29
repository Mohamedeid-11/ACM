#ifndef SAVE_LOAD_USERS_H
#define SAVE_LOAD_USERS_H

#include "user.h"
#include <QSharedPointer>

extern QList<QSharedPointer<User>> users;

void loadUsers();


#endif // SAVE_LOAD_USERS_H
