#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UsChat.h"
#include <QMouseEvent>
#include <QAction>
#include "FileUtils.h"
#include "EncryptUtils.h"
#include "CommonConstant.h"

class UsChat : public QMainWindow
{
	Q_OBJECT

public:
	UsChat(QWidget* parent = Q_NULLPTR);
	void InitSignalAndSlots();
	bool eventFilter(QObject* obj, QEvent* event);
	void InsertIconToLineEdit(QLineEdit *lineEdit,QString path);
	bool AnalysisUserInfo();
public slots:
	void CloseThis();
	void LoadSetUser();
	void setStatus_btClose();
	void setStatus_btSetUser();
	void LoadnewUser();
	void TryConnect();
	void ClearLoginInfo();
private:
	Ui::UsChatClass ui;
	void mouseMoveEvent(QMouseEvent* event);
	void mousePressEvent(QMouseEvent* event);
	QPoint StartPos;
	bool btCloseClicked=false;
	bool btSetUserClicked = false;
	int mainWidgetStatus = 1;
	bool isUserEdited = false;
	bool isPassEdited = false;
	QString user;
	QString pass;
};
