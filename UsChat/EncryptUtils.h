#pragma once
#include "QStringUtils.h"

class EncryptUtils {
public:
	//普通字符串Base64加密
	static QString QStringToBase64(QString src);
	//普通Base64转字符串
	static QString Base64ToQString(QString base64);
	//大小写字符串Base64加密
	static QString UAL_QStringToBase64(QString src);
	//大小写Base64转字符串
	static QString UAL_Base64ToQString(QString base64);
};