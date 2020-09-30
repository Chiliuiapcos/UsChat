/********************************************************************************
** Form generated from reading UI file 'UsChat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USCHAT_H
#define UI_USCHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsChatClass
{
public:
    QWidget *PaintWidget;
    QWidget *bar_widget;
    QLabel *lb_headName;
    QPushButton *bt_close;
    QPushButton *bt_setUser;
    QWidget *login_widget;
    QLabel *lb_pic;
    QLabel *lb_userName;
    QPushButton *bt_login;
    QLabel *lb_changeUser;
    QWidget *settings_widget;
    QPushButton *bt_clearLoginInfo;
    QLabel *lb_settingheader;
    QWidget *newUser_widget;
    QLabel *lb_newuserheader;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QPushButton *bt_newuserlogin;
    QCheckBox *checkBox_saveInfo;
    QFrame *line_up;
    QFrame *line_down;
    QLabel *lb_userText;
    QLabel *lb_passText;

    void setupUi(QMainWindow *UsChatClass)
    {
        if (UsChatClass->objectName().isEmpty())
            UsChatClass->setObjectName(QString::fromUtf8("UsChatClass"));
        UsChatClass->resize(350, 492);
        UsChatClass->setMinimumSize(QSize(350, 492));
        UsChatClass->setMaximumSize(QSize(350, 492));
        UsChatClass->setCursor(QCursor(Qt::ArrowCursor));
        UsChatClass->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon/Resources/Icon/WxIcon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UsChatClass->setWindowIcon(icon);
        UsChatClass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PaintWidget = new QWidget(UsChatClass);
        PaintWidget->setObjectName(QString::fromUtf8("PaintWidget"));
        PaintWidget->setMinimumSize(QSize(350, 492));
        PaintWidget->setMaximumSize(QSize(350, 492));
        PaintWidget->setSizeIncrement(QSize(0, 0));
        PaintWidget->setStyleSheet(QString::fromUtf8(""));
        bar_widget = new QWidget(PaintWidget);
        bar_widget->setObjectName(QString::fromUtf8("bar_widget"));
        bar_widget->setGeometry(QRect(1, -1, 350, 42));
        bar_widget->setMinimumSize(QSize(350, 42));
        bar_widget->setMaximumSize(QSize(350, 42));
        bar_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius:1px;\n"
""));
        lb_headName = new QLabel(bar_widget);
        lb_headName->setObjectName(QString::fromUtf8("lb_headName"));
        lb_headName->setGeometry(QRect(10, 10, 61, 21));
        lb_headName->setAutoFillBackground(false);
        lb_headName->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 25 11pt \"Akzidenz-Grotesk BQ Light with \";\n"
"color: rgb(160, 160, 160);"));
        lb_headName->setAlignment(Qt::AlignCenter);
        bt_close = new QPushButton(bar_widget);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(306, 0, 43, 33));
        bt_close->setMinimumSize(QSize(43, 33));
        bt_close->setMaximumSize(QSize(43, 33));
        bt_close->setCursor(QCursor(Qt::PointingHandCursor));
        bt_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(224,84,84);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(220,72,72);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icon/Resources/Icon/main_CLOSE.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_close->setIcon(icon1);
        bt_close->setIconSize(QSize(12, 12));
        bt_setUser = new QPushButton(bar_widget);
        bt_setUser->setObjectName(QString::fromUtf8("bt_setUser"));
        bt_setUser->setGeometry(QRect(263, 1, 43, 33));
        bt_setUser->setMinimumSize(QSize(43, 33));
        bt_setUser->setMaximumSize(QSize(43, 33));
        bt_setUser->setCursor(QCursor(Qt::PointingHandCursor));
        bt_setUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(227,227,227);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(205,205,205);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icon/Resources/Icon/main_Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_setUser->setIcon(icon2);
        bt_setUser->setIconSize(QSize(13, 13));
        login_widget = new QWidget(PaintWidget);
        login_widget->setObjectName(QString::fromUtf8("login_widget"));
        login_widget->setEnabled(true);
        login_widget->setGeometry(QRect(0, 40, 350, 450));
        login_widget->setMinimumSize(QSize(350, 450));
        login_widget->setMaximumSize(QSize(350, 450));
        login_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lb_pic = new QLabel(login_widget);
        lb_pic->setObjectName(QString::fromUtf8("lb_pic"));
        lb_pic->setGeometry(QRect(119, 80, 113, 113));
        lb_pic->setMinimumSize(QSize(113, 113));
        lb_pic->setMaximumSize(QSize(113, 113));
        lb_pic->setCursor(QCursor(Qt::PointingHandCursor));
        lb_pic->setAutoFillBackground(false);
        lb_pic->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0,50);\n"
"border-radius:3px;\n"
"\n"
""));
        lb_pic->setPixmap(QPixmap(QString::fromUtf8(":/Icon/Resources/Icon/WxIcon.ico")));
        lb_pic->setAlignment(Qt::AlignCenter);
        lb_userName = new QLabel(login_widget);
        lb_userName->setObjectName(QString::fromUtf8("lb_userName"));
        lb_userName->setGeometry(QRect(100, 234, 151, 31));
        lb_userName->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lb_userName->setAlignment(Qt::AlignCenter);
        bt_login = new QPushButton(login_widget);
        bt_login->setObjectName(QString::fromUtf8("bt_login"));
        bt_login->setGeometry(QRect(44, 280, 263, 50));
        bt_login->setMinimumSize(QSize(263, 50));
        bt_login->setMaximumSize(QSize(263, 50));
        bt_login->setCursor(QCursor(Qt::PointingHandCursor));
        bt_login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(26, 173, 25);\n"
"	color: rgb(245, 245, 245);\n"
"	font: 11.5pt \"YouYuan\";\n"
"	border-radius:1px;\n"
"	font-weight:bold;\n"
"}\n"
"QPushButton:hover{\n"
"    background-color:rgb(18,150,17);\n"
"	\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(26, 173, 25);\n"
"}"));
        lb_changeUser = new QLabel(login_widget);
        lb_changeUser->setObjectName(QString::fromUtf8("lb_changeUser"));
        lb_changeUser->setGeometry(QRect(100, 380, 151, 31));
        lb_changeUser->setCursor(QCursor(Qt::PointingHandCursor));
        lb_changeUser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 11pt \"\345\271\274\345\234\206\";\n"
"color: rgb(100, 104, 166);\n"
"font-weight:normal;"));
        lb_changeUser->setAlignment(Qt::AlignCenter);
        settings_widget = new QWidget(PaintWidget);
        settings_widget->setObjectName(QString::fromUtf8("settings_widget"));
        settings_widget->setEnabled(true);
        settings_widget->setGeometry(QRect(0, 40, 350, 450));
        settings_widget->setMinimumSize(QSize(350, 450));
        settings_widget->setMaximumSize(QSize(350, 450));
        settings_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        bt_clearLoginInfo = new QPushButton(settings_widget);
        bt_clearLoginInfo->setObjectName(QString::fromUtf8("bt_clearLoginInfo"));
        bt_clearLoginInfo->setGeometry(QRect(47, 90, 261, 41));
        bt_clearLoginInfo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\271\274\345\234\206\";\n"
"	background-color: rgb(244, 84, 84);\n"
"	color:rgb(255,255,255);\n"
"	border-radius:1px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(224,84,84);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(220,72,72);\n"
"}"));
        bt_clearLoginInfo->setAutoExclusive(false);
        lb_settingheader = new QLabel(settings_widget);
        lb_settingheader->setObjectName(QString::fromUtf8("lb_settingheader"));
        lb_settingheader->setGeometry(QRect(109, 20, 131, 41));
        lb_settingheader->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\271\274\345\234\206\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        lb_settingheader->setAlignment(Qt::AlignCenter);
        newUser_widget = new QWidget(PaintWidget);
        newUser_widget->setObjectName(QString::fromUtf8("newUser_widget"));
        newUser_widget->setEnabled(true);
        newUser_widget->setGeometry(QRect(0, 40, 350, 450));
        newUser_widget->setMinimumSize(QSize(350, 450));
        newUser_widget->setMaximumSize(QSize(350, 450));
        newUser_widget->setAcceptDrops(true);
        newUser_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 220);"));
        lb_newuserheader = new QLabel(newUser_widget);
        lb_newuserheader->setObjectName(QString::fromUtf8("lb_newuserheader"));
        lb_newuserheader->setGeometry(QRect(95, 9, 151, 61));
        lb_newuserheader->setStyleSheet(QString::fromUtf8("font: 19pt \"\345\271\274\345\234\206\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(107, 107, 107);"));
        lb_newuserheader->setAlignment(Qt::AlignCenter);
        lineEdit_user = new QLineEdit(newUser_widget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(41, 92, 271, 41));
        lineEdit_user->setFocusPolicy(Qt::StrongFocus);
        lineEdit_user->setStyleSheet(QString::fromUtf8("QLineEdit{ \n"
"	background:rgba(255,255,255,0%); \n"
"	border:0px;\n"
"	color: rgb(80, 80, 80);\n"
"	font: 11pt \"\345\271\274\345\234\206\";\n"
"}\n"
"QLineEdit:hover{ \n"
"\n"
"}\n"
"QLineEdit:!hover{\n"
"	background:rgba(0,0,0,0%);\n"
"}\n"
"QLineEdit:focus{\n"
"border-radius:2px;\n"
"}"));
        lineEdit_pass = new QLineEdit(newUser_widget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEnabled(false);
        lineEdit_pass->setGeometry(QRect(40, 171, 271, 41));
        lineEdit_pass->setFocusPolicy(Qt::StrongFocus);
        lineEdit_pass->setStyleSheet(QString::fromUtf8("QLineEdit{ \n"
"	background:rgba(255,255,255,0%); \n"
"	border:0px;\n"
"	color: rgb(80, 80, 80);\n"
"	font: 11pt \"\345\271\274\345\234\206\";\n"
"}\n"
"QLineEdit:hover{ \n"
"\n"
"}\n"
"QLineEdit:!hover{\n"
"	background:rgba(0,0,0,0%);\n"
"}\n"
"QLineEdit:focus{\n"
"border-radius:2px;\n"
"}"));
        bt_newuserlogin = new QPushButton(newUser_widget);
        bt_newuserlogin->setObjectName(QString::fromUtf8("bt_newuserlogin"));
        bt_newuserlogin->setEnabled(false);
        bt_newuserlogin->setGeometry(QRect(48, 295, 263, 50));
        bt_newuserlogin->setMinimumSize(QSize(263, 50));
        bt_newuserlogin->setMaximumSize(QSize(263, 50));
        bt_newuserlogin->setCursor(QCursor(Qt::PointingHandCursor));
        bt_newuserlogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(26, 173, 25);\n"
"	color: rgb(245, 245, 245);\n"
"	font: 11.5pt \"YouYuan\";\n"
"	border-radius:1px;\n"
"	font-weight:bold;\n"
"}\n"
"QPushButton:hover{\n"
"    background-color:rgb(18,150,17);\n"
"	\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(26, 173, 25);\n"
"}"));
        checkBox_saveInfo = new QCheckBox(newUser_widget);
        checkBox_saveInfo->setObjectName(QString::fromUtf8("checkBox_saveInfo"));
        checkBox_saveInfo->setGeometry(QRect(196, 236, 121, 20));
        checkBox_saveInfo->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(122, 122, 122);\n"
"font: 9pt \"\345\271\274\345\234\206\";"));
        line_up = new QFrame(newUser_widget);
        line_up->setObjectName(QString::fromUtf8("line_up"));
        line_up->setGeometry(QRect(41, 124, 271, 16));
        line_up->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(140, 140, 140);"));
        line_up->setFrameShadow(QFrame::Plain);
        line_up->setFrameShape(QFrame::HLine);
        line_down = new QFrame(newUser_widget);
        line_down->setObjectName(QString::fromUtf8("line_down"));
        line_down->setGeometry(QRect(40, 203, 271, 16));
        line_down->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(140, 140, 140);"));
        line_down->setFrameShadow(QFrame::Plain);
        line_down->setFrameShape(QFrame::HLine);
        lb_userText = new QLabel(newUser_widget);
        lb_userText->setObjectName(QString::fromUtf8("lb_userText"));
        lb_userText->setGeometry(QRect(40, 137, 101, 16));
        lb_userText->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(148, 148, 148);\n"
"font: 8pt \"\345\271\274\345\234\206\";"));
        lb_passText = new QLabel(newUser_widget);
        lb_passText->setObjectName(QString::fromUtf8("lb_passText"));
        lb_passText->setGeometry(QRect(41, 216, 91, 16));
        lb_passText->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(148, 148, 148);\n"
"font: 8pt \"\345\271\274\345\234\206\";"));
        UsChatClass->setCentralWidget(PaintWidget);

        retranslateUi(UsChatClass);

        QMetaObject::connectSlotsByName(UsChatClass);
    } // setupUi

    void retranslateUi(QMainWindow *UsChatClass)
    {
        UsChatClass->setWindowTitle(QCoreApplication::translate("UsChatClass", "UsChat", nullptr));
        lb_headName->setText(QCoreApplication::translate("UsChatClass", "UsChat", nullptr));
        bt_close->setText(QString());
        bt_setUser->setText(QString());
        lb_pic->setText(QString());
        lb_userName->setText(QCoreApplication::translate("UsChatClass", "TextLabel", nullptr));
        bt_login->setText(QCoreApplication::translate("UsChatClass", "\347\231\273\345\275\225", nullptr));
        lb_changeUser->setText(QCoreApplication::translate("UsChatClass", "\345\210\207\346\215\242\350\264\246\345\217\267", nullptr));
        bt_clearLoginInfo->setText(QCoreApplication::translate("UsChatClass", "\346\270\205\351\231\244\347\231\273\345\275\225\344\277\241\346\201\257", nullptr));
        lb_settingheader->setText(QCoreApplication::translate("UsChatClass", "\350\256\276\347\275\256", nullptr));
        lb_newuserheader->setText(QCoreApplication::translate("UsChatClass", "\350\257\267\347\231\273\345\275\225", nullptr));
        lineEdit_user->setText(QString());
        lineEdit_pass->setText(QString());
        bt_newuserlogin->setText(QCoreApplication::translate("UsChatClass", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201", nullptr));
        checkBox_saveInfo->setText(QCoreApplication::translate("UsChatClass", "\350\256\260\344\275\217\347\231\273\345\275\225\344\277\241\346\201\257", nullptr));
        lb_userText->setText(QCoreApplication::translate("UsChatClass", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lb_passText->setText(QCoreApplication::translate("UsChatClass", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsChatClass: public Ui_UsChatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USCHAT_H
