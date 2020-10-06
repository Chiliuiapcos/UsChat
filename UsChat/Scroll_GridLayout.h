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

//左侧Scroll栏基础
class Scroll_GridLayout: public QFrame {
	Q_OBJECT
public:
	//构造函数
	Scroll_GridLayout(QMap< int, TextListItem*>_List, QWidget* parent);
	//初始化列表
	int initList();
	//增加item
	bool addItem(TextListItem *item);
	//修改列表item内容
	bool changeItem(int num, TextListItemInfo item);
	//删除列表中指定item
	int deleteItem(int num);
	//QVBoxLayout设置
	void setStyleQVBoxLayout(QVBoxLayout *layout);
	//设置ScrollBar
	void setScrollBar(QScrollBar* bar);
	//循环事件
	bool eventFilter(QObject* obj, QEvent* event);
private:
	QMap< int, TextListItem*>List;
	Ui::ListScroll ui;
	QVBoxLayout pLayout;
	SuspensionVerticalBar *bar;
};

//设置滑块
class SuspensionVerticalBar :public QScrollBar {
public:
	SuspensionVerticalBar();
	void setBasicParam();
	void loadQssStyle();
private:
};
