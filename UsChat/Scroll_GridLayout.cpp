#include "Scroll_GridLayout.h"

#pragma region 左侧Scroll栏基础
Scroll_GridLayout::Scroll_GridLayout(QMap< int, TextListItem*>_List, QWidget* parent = NULL) :QFrame(parent) {
	List = _List;
	ui.setupUi(this);
	setStyleQVBoxLayout(&pLayout);
	ui.verticalLayout->setContentsMargins(0, 0, 0, 0);
	bar = new SuspensionVerticalBar();
	setScrollBar(bar);
	ui.scrollArea->installEventFilter(this);
	initList();
}

int Scroll_GridLayout::initList() {
	for each (QFrame *item in List)
	{
		pLayout.addWidget(item);
	}
	ui.messageList->setLayout(&pLayout);
	return List.size();
}

bool Scroll_GridLayout::addItem(TextListItem *item) {
	pLayout.addWidget(item);
	List.insert(item->data()->id, item);
	return true;
}

bool Scroll_GridLayout::changeItem(int num, TextListItemInfo item) {
	List.value(num)->setData(item);
	return true;
}

int Scroll_GridLayout::deleteItem(int num) {
	TextListItem* _d = List.value(num);
	List.remove(num);
	pLayout.removeWidget(_d);
	delete _d;
	return num;
}

void Scroll_GridLayout::setStyleQVBoxLayout(QVBoxLayout* layout) {
	layout->setDirection(QBoxLayout::BottomToTop);	//自下而上
	layout->setSpacing(0);							//item间距
	layout->setMargin(0);							//item外边距
	layout->setAlignment(Qt::AlignTop);				//item对齐
}

void Scroll_GridLayout::setScrollBar(QScrollBar* bar) {
	ui.scrollArea->setVerticalScrollBar(bar);
}

bool Scroll_GridLayout::eventFilter(QObject* obj, QEvent* event) {
	if (obj == ui.scrollArea) 
		bar->setVisible(true);
	else
		bar->setVisible(false);
	return false;
}
#pragma endregion

#pragma region 设置滑块
SuspensionVerticalBar::SuspensionVerticalBar() {
	setBasicParam();
	loadQssStyle();
}

void SuspensionVerticalBar::setBasicParam() {
	//setMaximumWidth(10);
	//setMinimumWidth(10);
}

void SuspensionVerticalBar::loadQssStyle() {
	QFile file("./QssStyle/ScrollBar.qss");
	file.open(QFile::ReadOnly);
	QString qss;
	qss = file.readAll();
	setStyleSheet(qss);
	file.close();
}
#pragma endregion