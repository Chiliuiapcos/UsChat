#pragma once
#include<QString>

class EncryptUtils {
public:
	//Base64∆’Õ®º”Ω‚√‹
	static QString QStringToBase64(QString src);
	static QString Base64ToQString(QString base64);
};