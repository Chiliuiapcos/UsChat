#pragma once
#include "TextConstant.h"
#include <QFile>
#include <QIODevice>
class FileUtils {
public:
	//��ȡ�ı��ļ�
	static QString ReadTextFile(QString path, QString& context);
	//д���ı��ļ�
	static QString WriteTextFile(const QString &path, const QString& context);
	//���ĳ���ı��ļ�
	static QString ClearTextFle(const QString& path);
};