#include "pch.h"

#include <string>
using namespace std;

/// Chapter2-1
/// ������AHelloWorld!��HelloJapan?�ɕϊ�����B
/// �{�e�X�g���p�X����R�[�h����������B
/// �ϊ������͉��L�e�X�g�R�[�h�̎w��͈͂Ɏ������邱�ƁB
/// �K�X�֐����܂��́A�N���X�����邱�ƁB
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C++�Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�s�B
TEST(Chapter2, _1_EditStringCPP) {
	string expect;
	{//��������ύX��
	}//�����܂ŕύX��

	EXPECT_EQ(expect.c_str(), "HelloJapan?");
	const char* temp = "HelloWorld!";
	EXPECT_EQ(temp[5], 'W');
}


/// Chapter2-2
/// ������AHelloWorld!��ByeWorld!�ɕϊ�����B
/// �{�e�X�g���p�X����R�[�h����������B
/// �ϊ������͉��L�e�X�g�R�[�h�̎w��͈͂Ɏ������邱�ƁB
/// �K�X�֐����܂��́A�N���X�����邱�ƁB
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C++�Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�s�B
TEST(Chapter2, _2_EditStringCPP) {
	string expect;
	{//��������ύX��
	}//�����܂ŕύX��

	EXPECT_EQ(expect.c_str(), "ByeWorld!");
	const char* temp = "HelloWorld!";
	EXPECT_EQ(temp[5], 'W');
}

/// Chapter2-3
/// ������AHelloWorld!��Hello!World!�ɕϊ�����B
/// �{�e�X�g���p�X����R�[�h����������B
/// �ϊ������͉��L�e�X�g�R�[�h�̎w��͈͂Ɏ������邱�ƁB
/// �K�X�֐����܂��́A�N���X�����邱�ƁB
/// Input�̕�����HelloWorld!�ł��邱�Ƃ͑O��Ƃ��Ă悢�B
/// C++�Ŏ������邱�ƁBC�W�����C�u�����EWin32API�͎g�p�s�B
TEST(Chapter2, _3_EditStringCPP) {
	string expect;
	{//��������ύX��
	}//�����܂ŕύX��

	EXPECT_EQ(expect.c_str(), "Hello!World!");
	const char* temp = "HelloWorld!";
	EXPECT_EQ(temp[5], 'W');
}