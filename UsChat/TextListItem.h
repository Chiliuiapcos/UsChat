#pragma once
#include <QString>
#include "ui_TextListItem.h"
#include <QDateTime>

//��Ϣ�б�item��Ϣ��
struct TextListItemInfo {
	int id;
	QString name, text, date;
	QPixmap pic;
	bool hasRedPoint, isBellBanned;
	QDateTime updateTime;
};

//��Ϣ�б�QFrame��
class TextListItem :public QFrame {
	Q_OBJECT
public:
	//���캯��
	TextListItem(TextListItemInfo itemInfo, QWidget* parent = NULL);
	//��������
	void setData(TextListItemInfo itemInfo);
	//������Ϣָ��
	TextListItemInfo* data();
private:
	TextListItemInfo info;
	Ui::TextListItem ui;
};