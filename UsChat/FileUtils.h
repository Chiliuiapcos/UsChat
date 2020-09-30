#pragma once
#include "TextConstant.h"
#include <QFile>
#include <QIODevice>
class FileUtils {
public:
	static QString ReadTextFile(QString path, QString& context);
	static QString WriteTextFile(const QString &path, const QString& context);
	static QString ClearTextFle(const QString& path);
};