// NoteDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "JingPic.h"
#include "NoteDlg.h"
#include "afxdialogex.h"


// NoteDlg �Ի���

IMPLEMENT_DYNAMIC(NoteDlg, CDialogEx)

NoteDlg::NoteDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_NOTE, pParent)
	, m_strNote(_T(""))
{

}

NoteDlg::~NoteDlg()
{
}

void NoteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NOTE, m_strNote);
}


BEGIN_MESSAGE_MAP(NoteDlg, CDialogEx)
	ON_BN_CLICKED(IDC_OK, &NoteDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// NoteDlg ��Ϣ�������


void NoteDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnOK();
}
