/**********************************************************/
/* Lesson4 - MySquare.cpp                                 */
/* �֐���DLL�ɕ������Ă݂悤                              */
/**********************************************************/
//#define MYSQUARE_EXPORTS

#include "MySquare.h"

//
// mySquare���\�b�h�̒�`
//
int __stdcall mySquare(int in_val)
{
	return (in_val * in_val * in_val);      // ver1.0
	//return (in_val * in_val);             // ver1.1(bug fix)
}
