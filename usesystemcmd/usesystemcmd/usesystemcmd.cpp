// usesystemcmd.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>

int main()
{
	//std::cout << "Hello world!" << std::endl;
	//std::system("pause");     //�ó�����ͣ

	//std::system("mstsc");

	std::system("mstsc /v 172.30.10.29");
	//CreatProcess();
	//CWnd *pMainWnd = FindWindow(NULL, "Զ����������");
	Sleep(1000);
	HANDLE mstsc;
	mstsc=FindWindow(NULL, (LPCTSTR)"Զ����������");
	//if (!pMainWnd)
	if(mstsc)
		std::cout << "gogoggo" << std::endl;
    return 0;
}

