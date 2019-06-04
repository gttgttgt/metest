#include "pch.h"

#include <string>
#include "CrtMemDiffChecker.h"

using namespace std;

string* ReallocString(string* inStr)
{
	string* temp = nullptr;
	if(inStr != nullptr){
		temp = new string(*inStr);
		delete inStr;
	}
	return temp;
}

/// Chapter4-1
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter4, _1)�ɑ΂��s�����ƁB
/// ReallocString()�͏C���֎~
TEST(Chapter4, _1) {
	CRT_MEM_CHECK; //���̍s�͏C���֎~

	string str = "100";

	string* str2 = ReallocString(&str);

	str2->append("101");

	ASSERT_EQ("100", str);
	ASSERT_EQ(*str2, "100101");

	delete str2;
}

/// Chapter4-2
/// �{�e�X�g���p�X����R�[�h����������B
/// �C���̓e�X�g�R�[�h�iTEST(Chapter4, _2)�ɑ΂��s�����ƁB
/// ReallocString()�͏C���֎~
TEST(Chapter4, _2) {
	string* str1 = new string("100");

	string* str2 = ReallocString(str1);

	str2->append("101");

	cout << *str1 << endl;
	cout << *str2 << endl;

	ASSERT_EQ("100", *str1);
	ASSERT_EQ(*str2, "100101");
}

