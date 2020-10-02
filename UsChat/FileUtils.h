#pragma once
#include "TextConstant.h"
#include <QFile>
#include <QIODevice>
class FileUtils {
public:
	//读取文本文件
	static QString ReadTextFile(QString path, QString& context);
	//写入文本文件
	static QString WriteTextFile(const QString &path, const QString& context);
	//清空某个文本文件
	static QString ClearTextFle(const QString& path);
};