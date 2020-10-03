#include "QStringUtils.h"

QString QStringUtils::toUpperAndLower(QString src) {
	for (int i = 0; i < src.size(); i++) {
		QChar cur = src.at(i);
		if (cur.isUpper()) {
			cur.toLower();
		}
		else {
			cur.toUpper();
		}
		src[i] = cur;
	}
	return src;
}