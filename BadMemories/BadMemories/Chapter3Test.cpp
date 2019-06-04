#include "pch.h"

#include <string>
#include "CrtMemState.h"
#include "CrtMemDiffChecker.h"

using namespace std;

string* newString1()
{
	return new string("100");
}

/// Chapter3-1
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter3, _1)�j�ɑ΂��s�����ƁB
/// newString1()�͏C���֎~
TEST(Chapter3, _1) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~

	string* str = newString1();
}

string* newString2()
{
	return new string[100];
}

/// Chapter3-2
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter3, _2)�j�ɑ΂��s�����ƁB
/// newString2()�͏C���֎~
TEST(Chapter3, _2) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~

	string* str = newString2();
	delete str;
}

string* newString3()
{
	string temp("100");
	return &temp;
}

/// Chapter3-3
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter3, _3)�j/newString3()�ɑ΂��s�����ƁB
TEST(Chapter3, _3) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~
	string* str = newString3();
	delete str;
}

shared_ptr<string> newString4()
{
	return shared_ptr<string>(new string[100]);
}

/// Chapter3-4
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter3, _4)�j/newString4()�ɑ΂��s�����ƁB
TEST(Chapter3, _4) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~
	shared_ptr<string> str = newString4();
}

unique_ptr<string> newString5()
{
	return unique_ptr<string>(new string[100]);
}

/// Chapter3-5
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter3, _5)�j/newString5()�ɑ΂��s�����ƁB
TEST(Chapter3, _5) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~
	unique_ptr<string> str = newString5();
}
