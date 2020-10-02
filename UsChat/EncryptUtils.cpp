#include "EncryptUtils.h"

QString EncryptUtils::QStringToBase64(QString src) {
	QByteArray text = src.toLocal8Bit();
	QByteArray by = text.toBase64();
	return QString::fromLocal8Bit(by);
}

QString EncryptUtils::Base64ToQString(QString base64) {
	QByteArray text = base64.toLocal8Bit();
	QByteArray by = QByteArray::fromBase64(text);
	return QString::fromLocal8Bit(by);
}

QString EncryptUtils::UAL_QStringToBase64(QString src) {
	QByteArray text = src.toLocal8Bit();
	QByteArray by = text.toBase64();
	QString str = QStringUtils::toUpperAndLower(QString::fromLocal8Bit(by));
	return str;
}

QString EncryptUtils::UAL_Base64ToQString(QString base64) {
	QString str = QStringUtils::toUpperAndLower(base64);
	QByteArray text = base64.toLocal8Bit();
	QByteArray by = QByteArray::fromBase64(text);
	return QString::fromLocal8Bit(by);
}