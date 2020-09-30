#include "FileUtils.h"

QString FileUtils::ReadTextFile(QString path, QString& context) {
	QFile file(path);
	if (!file.exists()) { return QString::fromLocal8Bit(FILE_NOT_EXIST); }
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QByteArray t = file.readAll();
	context = QString::fromLocal8Bit(t);
	file.close();
	return FILE_READ_SUCCESS;
}

QString FileUtils::WriteTextFile(const QString &path, const QString& context) {
	QFile file(path);
	if(!file.exists()){
		file.open(QIODevice::ReadWrite | QIODevice::Text);
		file.close();
	}
	file.resize(0);
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	file.write(context.toUtf8());
	file.close();
	return FILE_WRITE_SUCCESS;
}

QString FileUtils::ClearTextFle(const QString& path) {
	QFile file(path);
	if (!file.exists()) {
		return FILE_CLEAR_SUCCESS;
	}
	file.resize(0);
	return FILE_CLEAR_SUCCESS;
}