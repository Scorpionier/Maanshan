// zhangView.h : interface of the CZhangView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZHANGVIEW_H__7ABBC599_DC64_4779_9AE4_071BD3985E67__INCLUDED_)
#define AFX_ZHANGVIEW_H__7ABBC599_DC64_4779_9AE4_071BD3985E67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CZhangView : public CView
{
protected: // create from serialization only
	CZhangView();
	DECLARE_DYNCREATE(CZhangView)

// Attributes
public:
	CZhangDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZhangView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CZhangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CZhangView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CPoint m_ptOld;
	BOOL m_bDraw;
	CPoint m_ptOrigin;
};

#ifndef _DEBUG  // debug version in zhangView.cpp
inline CZhangDoc* CZhangView::GetDocument()
   { return (CZhangDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHANGVIEW_H__7ABBC599_DC64_4779_9AE4_071BD3985E67__INCLUDED_)
