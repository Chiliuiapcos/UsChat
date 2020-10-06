#pragma once
#include "ui_ListScroll.h"
#include <QScrollArea>
#include <QScrollBar>
#include <QGridLayout>
#include <QList>
#include "TextListItem.h"
#include <QFile>
#include <QString>
class SuspensionVerticalBar;

//���Scroll������
class Scroll_GridLayout: public QFrame {
	Q_OBJECT
public:
	//���캯��
	Scroll_GridLayout(QMap< int, TextListItem*>_List, QWidget* parent);
	//��ʼ���б�
	int initList();
	//����item
	bool addItem(TextListItem *item);
	//�޸��б�item����
	bool changeItem(int num, TextListItemInfo item);
	//ɾ���б���ָ��item
	int deleteItem(int num);
	//QVBoxLayout����
	void setStyleQVBoxLayout(QVBoxLayout *layout);
	//����ScrollBar
	void setScrollBar(QScrollBar* bar);
	//ѭ���¼�
	bool eventFilter(QObject* obj, QEvent* event);
private:
	QMap< int, TextListItem*>List;
	Ui::ListScroll ui;
	QVBoxLayout pLayout;
	SuspensionVerticalBar *bar;
};

//���û���
class SuspensionVerticalBar :public QScrollBar {
public:
	SuspensionVerticalBar();
	void setBasicParam();
	void loadQssStyle();
private:
};
