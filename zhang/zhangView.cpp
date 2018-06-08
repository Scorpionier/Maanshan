// zhangView.cpp : implementation of the CZhangView class
//

#include "stdafx.h"
#include "zhang.h"

#include "zhangDoc.h"
#include "zhangView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZhangView

IMPLEMENT_DYNCREATE(CZhangView, CView)

BEGIN_MESSAGE_MAP(CZhangView, CView)
	//{{AFX_MSG_MAP(CZhangView)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZhangView construction/destruction

CZhangView::CZhangView()
{
	// TODO: add construction code here

}

CZhangView::~CZhangView()
{
}

BOOL CZhangView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CZhangView drawing

void CZhangView::OnDraw(CDC* pDC)
{
	CZhangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CZhangView printing

BOOL CZhangView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CZhangView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CZhangView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CZhangView diagnostics

#ifdef _DEBUG
void CZhangView::AssertValid() const
{
	CView::AssertValid();
}

void CZhangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CZhangDoc* CZhangView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZhangDoc)));
	return (CZhangDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZhangView message handlers

CButton m_btn;
int CZhangView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	m_btn.Create(_T("°´Å¥201"), WS_CHILD | BS_DEFPUSHBUTTON, CRect(0, 0, 100, 100), this, 201);
	m_btn.ShowWindow(SW_SHOWNORMAL);
	
	return 0;
}

CButton btn;
//DEL void CZhangView::OnLButtonDown(UINT nFlags, CPoint point) 
//DEL {
//DEL 	// TODO: Add your message handler code here and/or call default
//DEL 	if(GetDlgItem(202)==NULL)
//DEL     {
//DEL 		btn.Create(_T("°´Å¥202"), WS_CHILD | BS_DEFPUSHBUTTON, CRect(200, 200, 300, 300), this, 202);
//DEL 	    btn.ShowWindow(SW_SHOWNORMAL);
//DEL 	}
//DEL 	CView::OnLButtonDown(nFlags, point);
//DEL 
//DEL 
//DEL }
	/*if(GetDlgItem(202)==NULL)
    {
		btn.Create(_T("°´Å¥202"), WS_CHILD | BS_DEFPUSHBUTTON, CRect(200, 200, 300, 300), this, 202);
	    btn.ShowWindow(SW_SHOWNORMAL);
	}
	CView::OnLButtonDown(nFlags, point);*/

void CZhangView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	m_ptOld=point;
	m_bDraw=TRUE;
	
	CView::OnLButtonDown(nFlags, point);
}

void CZhangView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	/*HDC hdc;
	hdc=::GetDC(m_hWnd);
	MoveToEx(hdc,m_ptOrigin.x,m_ptOrigin.y,NULL);
	LineTo(hdc,point.x,point.y);
	::ReleaseDC(m_hWnd,hdc);*/

	/*CDC * pDC=GetDC();
	pDC->MoveTo(m_ptOrigin);
	pDC->LineTo(point);
	ReleaseDC(pDC);*/

	/*CWindowDC dc(GetDesktopWindow());
	dc.MoveTo(m_ptOrigin);
	dc.LineTo(point);*/

	/*CBitmap bitmap;
	bitmap.LoadBitmap(IDB_BITMAP1);
	CBrush brush(&bitmap);
	CClientDC dc(this);
	dc.FillRect(CRect(m_ptOrigin,point),&brush);*/

    m_bDraw=FALSE;
	
	CView::OnLButtonUp(nFlags, point);
}

void CZhangView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
    
	CPen pen(PS_SOLID,1,RGB(255,0,0));
	CPen* pOldPen=dc.SelectObject(&pen);



	if(m_bDraw==TRUE)
	{
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		dc.LineTo(m_ptOld);
		m_ptOrigin=point;
	}
	dc.SelectObject(pOldPen);


	CView::OnMouseMove(nFlags, point);
}
