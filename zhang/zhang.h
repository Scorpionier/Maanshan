// zhang.h : main header file for the ZHANG application
//

#if !defined(AFX_ZHANG_H__B8D67972_8ADF_4269_B53F_8E2C905B46A7__INCLUDED_)
#define AFX_ZHANG_H__B8D67972_8ADF_4269_B53F_8E2C905B46A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CZhangApp:
// See zhang.cpp for the implementation of this class
//

class CZhangApp : public CWinApp
{
public:
	CZhangApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZhangApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CZhangApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHANG_H__B8D67972_8ADF_4269_B53F_8E2C905B46A7__INCLUDED_)
