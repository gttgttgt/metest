#include "pch.h"
#include <string.h>
#include "StringEditCStyle.h"


/// <summary>
/// ������AHelloWorld!��HelloJapan?�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
char* HelloWorldToHelloJapan(char* ioString)
{

	char* retStr=nullptr;
	retStr = strtok(ioString, "W");
	char* strJapan = "Japan?";
	strcat(retStr, strJapan);
	return retStr;
}

/// <summary>
/// ������AHelloWorld!��ByeWorld!�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
void HelloWorldToByeWorld(char* ioString)
{

}

/// <summary>
/// ������AHelloWorld!��Hello!World!�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
void HelloWorldToHelloWorld(char* ioString)
{

}
