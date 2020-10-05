#include "UsChat.h"
#include <QtWidgets/QApplication>
#include "Scroll_GridLayout.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//UsChat w;
	//w.show();
	QMap< int, TextListItem*>_List;

	TextListItemInfo info;
	info.id = 1;
	info.date = "20/20/20";
	info.hasRedPoint = false;
	info.isBellBanned = false;
	info.name = "hello";
	info.text = "welcome!";
	info.updateTime = QDateTime::currentDateTime();

	TextListItemInfo info_1;
	info_1.id = 2;
	info_1.date = "20/20/20";
	info_1.hasRedPoint = false;
	info_1.isBellBanned = false;
	info_1.name = "world";
	info_1.text = "dear!";
	info_1.updateTime = QDateTime::currentDateTime();

	TextListItem* item = new TextListItem(info);
	TextListItem* item_1 = new TextListItem(info_1);

	_List.insert(info.id, item);
	_List.insert(info_1.id, item_1);

	Scroll_GridLayout w(_List,NULL);
	w.show();
	return a.exec();
}
