#pragma once
#include "QStringUtils.h"

class EncryptUtils {
public:
	//��ͨ�ַ���Base64����
	static QString QStringToBase64(QString src);
	//��ͨBase64ת�ַ���
	static QString Base64ToQString(QString base64);
	//��Сд�ַ���Base64����
	static QString UAL_QStringToBase64(QString src);
	//��СдBase64ת�ַ���
	static QString UAL_Base64ToQString(QString base64);
};