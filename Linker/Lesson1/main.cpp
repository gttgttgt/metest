/****************************************************/
/* Lesson1 - main.cpp                               */
/* �������֐��ɕ������Ă݂悤                       */
/****************************************************/

#include "iostream"

//
// mySquare���\�b�h�̃v���g�^�C�v�錾
// ���͒l��2���Ԃ�
//
int mySquare(int in_val);

//
// �G���g���|�C���g
//
int main(void)
{
	std::cout << mySquare(2) << std::endl;
	
	return 0;
}


//
// mySquare���\�b�h�̒�`
//
int mySquare(int in_val)
{
	return (in_val * in_val);
}

