#include "pch.h"
#include "StringEditCStyle.h"


char* ConvertString(int startIndex, int endIndex, char* ioString, char* convertString)
{

	int count = 0;
	for (int i = startIndex; i < endIndex; i++)
	{
		ioString[i] = convertString[count];//��O�����B�Ȃ��H�H
		count++;
	}
	return ioString;
}


/// <summary>
/// ������AHelloWorld!��HelloJapan?�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
void HelloWorldToHelloJapan(char* ioString)
{
	//1.�ϊ����镶����̃C���f�b�N�X�����
	//2.
	char* str = "Japan?";
	char* tmp;
	ioString = ConvertString(5, 11, ioString, str);
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
