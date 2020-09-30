#include "UsChat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UsChat w;
	w.show();
	return a.exec();
}
