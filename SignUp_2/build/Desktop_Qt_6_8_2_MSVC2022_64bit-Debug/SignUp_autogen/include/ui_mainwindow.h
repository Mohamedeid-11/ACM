/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QGridLayout *gridLayout;
    QLineEdit *password_line;
    QLineEdit *username_line;
    QLabel *password;
    QLabel *username;
    QPushButton *register_2;
    QPlainTextEdit *usersList;
    QPushButton *list_users;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(555, 484);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setMaximumSize(QSize(161, 51));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        title->setFont(font);

        verticalLayout->addWidget(title, 0, Qt::AlignmentFlag::AlignHCenter);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        password_line = new QLineEdit(centralwidget);
        password_line->setObjectName("password_line");

        gridLayout->addWidget(password_line, 1, 0, 1, 1);

        username_line = new QLineEdit(centralwidget);
        username_line->setObjectName("username_line");

        gridLayout->addWidget(username_line, 0, 0, 1, 1);

        password = new QLabel(centralwidget);
        password->setObjectName("password");
        QFont font1;
        font1.setPointSize(12);
        password->setFont(font1);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setFont(font1);

        gridLayout->addWidget(username, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        register_2 = new QPushButton(centralwidget);
        register_2->setObjectName("register_2");

        verticalLayout->addWidget(register_2);

        usersList = new QPlainTextEdit(centralwidget);
        usersList->setObjectName("usersList");

        verticalLayout->addWidget(usersList);

        list_users = new QPushButton(centralwidget);
        list_users->setObjectName("list_users");

        verticalLayout->addWidget(list_users);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 555, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "\330\247\331\206\330\264\330\247\330\241 \330\255\330\263\330\247\330\250", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "\331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "\330\252\330\263\330\254\331\212\331\204", nullptr));
        list_users->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205\331\212\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
