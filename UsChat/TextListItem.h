#pragma once
#include <QString>
#include "ui_TextListItem.h"
#include <QDateTime>

//消息列表item信息类
struct TextListItemInfo {
	int id;
	QString name, text, date;
	QPixmap pic;
	bool hasRedPoint, isBellBanned;
	QDateTime updateTime;
};

//消息列表QFrame类
class TextListItem :public QFrame {
	Q_OBJECT
public:
	//构造函数
	TextListItem(TextListItemInfo itemInfo, QWidget* parent = NULL);
	//设置内容
	void setData(TextListItemInfo itemInfo);
	//返回信息指针
	TextListItemInfo* data();
private:
	TextListItemInfo info;
	Ui::TextListItem ui;
};