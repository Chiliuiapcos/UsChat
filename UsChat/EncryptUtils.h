#pragma once
#include<QString>

class EncryptUtils {
public:
	//Base64��ͨ�ӽ���
	static QString QStringToBase64(QString src);
	static QString Base64ToQString(QString base64);
};