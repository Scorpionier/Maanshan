// zhangDoc.cpp : implementation of the CZhangDoc class
//

#include "stdafx.h"
#include "zhang.h"

#include "zhangDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZhangDoc

IMPLEMENT_DYNCREATE(CZhangDoc, CDocument)

BEGIN_MESSAGE_MAP(CZhangDoc, CDocument)
	//{{AFX_MSG_MAP(CZhangDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZhangDoc construction/destruction

CZhangDoc::CZhangDoc()
{
	// TODO: add one-time construction code here

}

CZhangDoc::~CZhangDoc()
{
}

BOOL CZhangDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CZhangDoc serialization

void CZhangDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CZhangDoc diagnostics

#ifdef _DEBUG
void CZhangDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CZhangDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZhangDoc commands
