#pragma once
#include "afxwin.h"


// NoteDlg �Ի���

class NoteDlg : public CDialogEx
{
	DECLARE_DYNAMIC(NoteDlg)

public:
	NoteDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~NoteDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOTE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString m_strNote;
};
