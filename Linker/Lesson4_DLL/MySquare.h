/**********************************************************/
/* Lesson4 - MySquare.h                                   */
/* �֐���DLL�ɕ������Ă݂悤                              */
/**********************************************************/

// �C�L�i�����̂���L�[���[�h�������o�Ă���B
// ���́u�����v�Ƃ݂Ȃ��Ă����B
// ����������Β��ׂ�����B
//
// �N���X�̃G�N�X�|�[�g�́A�A�A�m��Ȃ��ق����K�����ȁB
// CIP�Ŏg���܂����Ă邯�ǁB
#ifdef MYSQUARE_EXPORTS
#define MYSQUARE_API __declspec(dllexport)
#else
#define MYSQUARE_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

//
// mySquare���\�b�h�̐錾
//
MYSQUARE_API
int __stdcall mySquare(int in_val);

#ifdef __cplusplus
}
#endif
