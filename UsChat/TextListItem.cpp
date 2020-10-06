#include "TextListItem.h"

TextListItem::TextListItem(TextListItemInfo itemInfo, QWidget* parent) :QFrame(parent) {
	ui.setupUi(this);
	setData(itemInfo);
}

void TextListItem::setData(TextListItemInfo itemInfo) {
	info = itemInfo;
	ui.lb_name->setText(info.name);
	ui.lb_text->setText(info.text);
	ui.lb_date->setText(info.date);
	ui.lb_pic->setPixmap(info.pic);
	ui.RedPoint->setVisible(info.hasRedPoint);
	ui.lb_bell->setVisible(info.isBellBanned);
}

TextListItemInfo* TextListItem::data() {
	return &info;
}