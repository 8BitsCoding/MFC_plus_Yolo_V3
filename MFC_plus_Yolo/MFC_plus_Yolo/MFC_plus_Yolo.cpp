
// MFC_plus_Yolo.cpp: 응용 프로그램에 대한 클래스 동작을 정의합니다.
//

#include "stdafx.h"
#include "MFC_plus_Yolo.h"
#include "MFC_plus_YoloDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCplusYoloApp

BEGIN_MESSAGE_MAP(CMFCplusYoloApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCplusYoloApp 생성

CMFCplusYoloApp::CMFCplusYoloApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CMFCplusYoloApp 개체입니다.

CMFCplusYoloApp theApp;


// CMFCplusYoloApp 초기화

BOOL CMFCplusYoloApp::InitInstance()
{
	
	CMFCplusYoloDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	
	return FALSE;
}

