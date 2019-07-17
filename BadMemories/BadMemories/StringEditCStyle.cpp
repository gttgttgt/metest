#include "pch.h"
#include <string.h>
#include "StringEditCStyle.h"

/// <summary>
/// 
/// </summary>
/// <param name="srcChar"></param>
/// <param name="desChar"></param>
/// <param name="startIndex"></param>
/// <param name="endIndex"></param>
void Replace(char srcChar[], char desChar[], int startIndex, int endIndex)
{
	int count = 0;
	for (int index = startIndex; index <= endIndex; ++index)
	{
		srcChar[index] = desChar[count];
		count++;
	}
	/*[�����Q]
	char inStr[] = "HelloWorld!";//�z��̐擪�|�C���^��n���ƁA��O�͔������Ȃ�
	char inStr = "HelloWorld!";//�|�C���^���ƃA�N�Z�X�ᔽ���������� 
	[����]
	�_�u���N�H�[�e�[�V����""�ň͂܂ꂽ������𕶎��񃊃e�����Ƃ����B
	�����񃊃e�����́A�v���O�����̎��s�J�n���ɓ���ȗ̈�ɕ�����z��Ƃ��Ċm�ۂ����B
	���̃������̈�́A�X�^�b�N��q�[�v�Ƃ͕ʂ̗̈�ŁA���e�̏����������ł��Ȃ��̈�ł���B
	�������ݕt���̗̈�ɁA�������݂��s�����Ƃ��Ă����̂ŁA�A�N�Z�X�ᔽ�ŗ�O�����ł����B

	[�΍�]
	�s����o���Ȃ����߂ɁAchar*�ŕ����񃊃e������錾����Ƃ��́A const char* �Ƃ��ď���������B
	const �C�����Ă����΁A�R���p�C���ŋC�Â���B
	*/
}

/// <summary>
/// ������AHelloWorld!��HelloJapan?�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
char* HelloWorldToHelloJapan(char ioString[])
{
	char tmp[] = "Japan?";
	int startIndex = 5;
	int endIndex = 10;
	Replace(ioString, tmp, startIndex, endIndex);
	return ioString;
}

/// <summary>
/// ������AHelloWorld!��ByeWorld!�ɕϊ�����B
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C�͈̔͂Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�B
/// </summary>
/// <param name="ioString">�ϊ��O��̕�����</param>
char* HelloWorldToByeWorld(char* ioString)
{
	char tmp[] = "Bye";
	int startIndex = 0;
	int endIndex = 10;
	Replace(ioString, tmp, startIndex, endIndex);
	return ioString;
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
