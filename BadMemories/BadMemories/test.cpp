#include "pch.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


//�R�j�������Ǘ�
//�E�|�C���^�A�X�^�b�N�A�q�[�v�i�z��j
//���ށF
//�����񑀍�
//�E"HelloWorld!"��"o"��u�������Ă݂�B
//		����p�^�[��
//			�����������@HelloWorld!��HelloJapan?
//			�����������@HelloWorld!��ByeWorld!
//			�����������@HelloWorld!��Hello!World!
//		�����̃p�^�[��
//			C
//				���͂ŏ���
//					�֐����ŕ���i����OPrint�������Print����̊֐��Ɂj
//				�_���ȗ�𒼂�?
//					�����񃊃e�������̂�ҏW����@���ҏW��ǂ��Ȃ邩��
//					�������m�ۂ��ĉ�����Ȃ�
//					�������ʂ�����Ȃ�
//					�X�^�b�N
//			C++
//�E�����ʒu���w������
//�E�����񃊃e����
//�E�킴��2�d�J������v���O�����������āA�����Ƃ�����w�E������B
//�E��O�����Ƃ̑g�ݍ��킹�itry - catch�j
//�E�l�n���A�Q�Ɠn��
//�E�X���C�V���O
//
//�ڕW���x���F
//�|�C���^����ă������𒼐ڑ���ł���B
//�m�ۂƉ���̂���@��g�ɒ�����B
//
//�E���X�g�ASTL
//�� ����͎��Ȋw�K���Ă��炤�B
//
//�ETips�F�K�x�[�W�R���N�V����
//�� Disposal�p�^�[�����炢�͒m���Ă��炤�B
//
//�E�c�[���ɂ���̓m�E�n�E
//�� ����͂܂������A�̌n������Ƃ��납��B
//�� ���̃X�e�b�v�ɂ܂킷�B
//
//
//
//
//�X�^�b�N�E�q�[�v
//�m�ۉ��
//malloc / free new / delete new[] / delete[]
//NULL�@�s��
//���z