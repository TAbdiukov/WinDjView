//	DjVu Dictionary Tool
//	Copyright (C) 2006-2007 Andrew Zhezherun
//
//	This program is free software; you can redistribute it and/or modify
//	it under the terms of the GNU General Public License version 2
//	as published by the Free Software Foundation.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program; if not, write to the Free Software
//	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//	http://www.gnu.org/copyleft/gpl.html

// $Id: WarningsDlg.cpp,v 1.1 2007/03/13 21:37:02 zhezherun Exp $

#include "stdafx.h"
#include "DictionaryTool.h"
#include "WarningsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWarningsDlg dialog

IMPLEMENT_DYNAMIC(CWarningsDlg, CDialog)
CWarningsDlg::CWarningsDlg(CWnd* pParent)
	: CDialog(CWarningsDlg::IDD, pParent)
{
}

CWarningsDlg::~CWarningsDlg()
{
}

void CWarningsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_WARN_LIST, m_strWarnings);
}


BEGIN_MESSAGE_MAP(CWarningsDlg, CDialog)
END_MESSAGE_MAP()


// CWarningsDlg message handlers

