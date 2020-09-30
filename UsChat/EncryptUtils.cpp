#include "EncryptUtils.h"

QString EncryptUtils::QStringToBase64(QString src) {
	QByteArray text = src.toLocal8Bit();
	QByteArray by = text.toBase64();
	return QString::fromLocal8Bit(by);
}

QString EncryptUtils::Base64ToQString(QString base64) {
	QByteArray text = base64.toLocal8Bit();
	QByteArray by = text.fromBase64(text);
	return QString::fromLocal8Bit(by);
}