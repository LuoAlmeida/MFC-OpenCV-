
// FaceDetectDlg.h : header file
//

#pragma once
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace std;
using namespace cv;

// CFaceDetectDlg dialog
class CFaceDetectDlg : public CDialogEx
{
// Construction
public:
	CFaceDetectDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FACEDETECT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	String face_cascade_name; 
	String eyes_cascade_name; 
	CascadeClassifier face_cascade;
	CascadeClassifier eyes_cascade;
	VideoCapture capture;

public:
	void detectAndDisplay(Mat frame);//ÉùÃ÷º¯Êý
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedOk();
};
