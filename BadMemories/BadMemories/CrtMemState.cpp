#include "pch.h"
#include "CrtMemState.h"


CrtMemState::CrtMemState()
{
	Now();
}


CrtMemState::~CrtMemState()
{
}

void CrtMemState::Now()
{
	_CrtMemCheckpoint(&memState);
}

CrtMemState CrtMemState::operator-(const CrtMemState & inRhs) const
{
	CrtMemState diff;
	_CrtMemDifference(&(diff.memState), &(this->memState), &(inRhs.memState));
	return diff;
}

bool CrtMemState::operator==(const CrtMemState & inRhs) const
{
	CrtMemState diff;
	return 0 == _CrtMemDifference(&(diff.memState), &(this->memState), &(inRhs.memState));
}

std::stringstream CrtMemState::dump;

/// <summary> CRT���������m�C�x���g�n���h�� </summary>
/// <param name="reportType"> �����^�C�v </param>
/// <param name="message"> CRT����̏o�̓��b�Z�[�W </param>
/// <param name="returnValue">  </param>
/// <returns> TRUE: _CrtSetReportHook���Ăяo���Ȃ�, FALSE: �Ăяo��  </returns>
int CrtMemState::YourReportHook(int reportType, char * message, int * returnValue)
{
	switch (reportType)
	{
	case _CRT_ASSERT:
	{
		break;
	}
	case _CRT_WARN:
	{
		// ���������[�N�̏ꍇ�́B�����ŁA�����̃��O�o�͊֐��Ńt�@�C���o�͂���Ηǂ��B
		// ���̃T���v���ł̓R���\�[���ɏo�͂���B
		dump << message;
		break;
	}
	case _CRT_ERROR:
	{
		// assert�����Ă΂ꂽ�ꍇ
		break;
	}
	default:
	{
		break;
	}
	}

	// FALSE��Ԃ���_CrtSetReportHook�œo�^�����n���h�����Ăяo���B
	return FALSE;
}
