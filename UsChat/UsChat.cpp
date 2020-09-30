#include "UsChat.h"
#include <QLineEdit>
UsChat::UsChat(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lb_changeUser->installEventFilter(this);
	ui.lineEdit_user->installEventFilter(this);
	ui.lineEdit_pass->installEventFilter(this);
	ui.lineEdit_pass->setClearButtonEnabled(true);
	ui.lineEdit_user->setClearButtonEnabled(true);
	ui.lineEdit_pass->setEchoMode(QLineEdit::Password);
	ui.lineEdit_user->setMaxLength(25);
	ui.lineEdit_pass->setMaxLength(15);
	//设置图标
	InsertIconToLineEdit(ui.lineEdit_user,":/Icon/Resources/Icon/user.png");
	InsertIconToLineEdit(ui.lineEdit_pass,":/Icon/Resources/Icon/Password_Icon.png");
	this->setWindowFlags(Qt::FramelessWindowHint);
	InitSignalAndSlots();
	//设置初始值
	if (AnalysisUserInfo()) {
		ui.lb_userName->setText(user);
		ui.settings_widget->close();
		ui.newUser_widget->close();
	}
	else {
		ui.settings_widget->close();
		ui.login_widget->close();
		ui.bt_setUser->close();
	}
}

void UsChat::CloseThis() {
	this->close();
}

void UsChat::InitSignalAndSlots() {
	connect(ui.bt_close, SIGNAL(clicked()), this, SLOT(CloseThis()));
	connect(ui.bt_setUser, SIGNAL(clicked()), this, SLOT(LoadSetUser()));
	connect(ui.bt_close, SIGNAL(pressed()), this, SLOT(setStatus_btClose()));
	connect(ui.bt_setUser, SIGNAL(pressed()), this, SLOT(setStatus_btSetUser()));
	connect(ui.bt_newuserlogin, SIGNAL(clicked()), this, SLOT(TryConnect()));
	connect(ui.bt_clearLoginInfo, SIGNAL(clicked()), this, SLOT(ClearLoginInfo()));
}

void UsChat::LoadSetUser() {
	if (mainWidgetStatus == 1) {
		ui.login_widget->close();
		mainWidgetStatus = 2;
		ui.bt_setUser->setIcon(QIcon(QString("://Icon//Resources//Icon//user.png")));
		ui.settings_widget->show();
	}
	else if (mainWidgetStatus == 2) {
		ui.settings_widget->close();
		ui.login_widget->show();
		mainWidgetStatus = 1;
		ui.bt_setUser->setIcon(QIcon(QString("://Icon//Resources//Icon//main_Settings.png")));
	}
	else if (mainWidgetStatus == 3) {
		ui.newUser_widget->close();
		ui.login_widget->show();
		mainWidgetStatus = 1;
		ui.bt_setUser->setIcon(QIcon(QString("://Icon//Resources//Icon//main_Settings.png")));
	}
}

void UsChat::mousePressEvent(QMouseEvent* event) {
	if (event->buttons() == Qt::LeftButton)
	{
		StartPos = event->globalPos() - this->frameGeometry().topLeft();
		btCloseClicked = false;
		btSetUserClicked = false;
	}
}

void UsChat::mouseMoveEvent(QMouseEvent* event) {
	QPoint EndPos;
	if (event->buttons() == Qt::LeftButton && StartPos.x() <= 350 && StartPos.y() <= 42 && !btSetUserClicked && !btCloseClicked)
	{
		EndPos = event->globalPos() - StartPos;
		this->move(EndPos);
	}
}

void UsChat::setStatus_btClose() {
	btCloseClicked = true;
}

void UsChat::setStatus_btSetUser() {
	btSetUserClicked = true;
}

void UsChat::LoadnewUser() {
	ui.login_widget->close();
	mainWidgetStatus = 3;
	ui.bt_setUser->setIcon(QIcon(QString("://Icon//Resources//Icon//user.png")));
	ui.newUser_widget->show();
}

bool UsChat::eventFilter(QObject* obj, QEvent* event) {
	if (obj == ui.lb_changeUser)
	{
		if (event->type() == QEvent::MouseButtonPress)//mouse button pressed
		{
			QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
			if (mouseEvent->button() == Qt::LeftButton)
			{
				LoadnewUser();
				return true;
			}
		}
	}
	else if (obj == ui.lineEdit_user|| obj == ui.lineEdit_pass) {
		if (obj == ui.lineEdit_pass) {
			if (ui.lineEdit_user->text().size() > 0) {
				ui.lineEdit_pass->setEnabled(true);
			}
			else {
				ui.lineEdit_pass->setEnabled(false);
				return true;
			}
		}
		QLineEdit* lineEdit = (obj == ui.lineEdit_user) ? ui.lineEdit_user : ui.lineEdit_pass;
		QFrame* line = (obj == ui.lineEdit_user) ? ui.line_up : ui.line_down;
		QLabel* text = (obj == ui.lineEdit_user) ? ui.lb_userText : ui.lb_passText;
		bool isEdited= (obj == ui.lineEdit_user) ? &isUserEdited : &isPassEdited;
		if (ui.lineEdit_user->text().size() <= 0) {
			ui.lineEdit_pass->setText("");
		}
		text->setVisible(lineEdit->text().size()<=0);
		if (ui.lineEdit_pass->text().size() > 0 && lineEdit->text().size() > 0) {
			ui.bt_newuserlogin->setEnabled(true);
			ui.bt_newuserlogin->setText(QStringLiteral("登录"));
		}
		else {
			ui.bt_newuserlogin->setEnabled(false);
			ui.bt_newuserlogin->setText(QStringLiteral("请输入用户名和密码"));
		}
		if (event->type() == QEvent::HoverEnter || event->type() == QEvent::MouseButtonPress) {
			if (event->type() == QEvent::MouseButtonPress) {
				isEdited = true;
			}
			line->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
				"color: rgb(26, 173, 25);"));
			return true;
		}
		else if (event->type() == QEvent::HoverLeave) {
			if (lineEdit->hasFocus()) {
				return true;
			}
			if (!lineEdit->hasFocus()&&!isEdited) {
				line->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
					"color: rgb(140, 140, 140);"));
			}
			if (lineEdit->text().size() == 0&& isEdited) {
				line->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
					"color: rgb(224,84,84);"));
			}
			return true;
		}
		else if (event->type() == QEvent::FocusAboutToChange) {
			if (lineEdit->text().size() == 0) {
				line->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
					"color: rgb(224,84,84);"));
			}
			user = ui.lineEdit_user->text();
			pass = ui.lineEdit_pass->text();
			return true;
		}
		else {
			this->setFocusPolicy(Qt::ClickFocus);
		}
	}
	return false;
}

void UsChat::InsertIconToLineEdit(QLineEdit* lineEdit, QString path) {
	QAction* searchAction = new QAction(lineEdit);
	searchAction->setIcon(QIcon(path));
	lineEdit->addAction(searchAction, QLineEdit::LeadingPosition);
}

bool UsChat::AnalysisUserInfo() {
	QString context;
	FileUtils::ReadTextFile(USER_INFO_PATH, context);
	if (context.size() == 0) {
		return false;
	}
	context=EncryptUtils::Base64ToQString(context);
	user = context.left(context.lastIndexOf("/"));
	pass = context.mid(context.lastIndexOf("/") + 1);
	return true;
}

void UsChat::TryConnect() {
	//网络请求
	if (ui.checkBox_saveInfo->isChecked()) {
		QString context = EncryptUtils::QStringToBase64(user + "/" + pass);
		FileUtils::WriteTextFile(USER_INFO_PATH, context);
	}
}

void UsChat::ClearLoginInfo() {
	FileUtils::ClearTextFle(USER_INFO_PATH);
	ui.settings_widget->close();
	ui.login_widget->close();
	ui.bt_setUser->close();
	ui.newUser_widget->show();
}