// usesystemcmd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>

int main()
{
	//std::cout << "Hello world!" << std::endl;
	//std::system("pause");     //让程序暂停

	//std::system("mstsc");

	std::system("mstsc /v 172.30.10.29");
	//CreatProcess();
	//CWnd *pMainWnd = FindWindow(NULL, "远程桌面连接");
	Sleep(1000);
	HANDLE mstsc;
	mstsc=FindWindow(NULL, (LPCTSTR)"远程桌面连接");
	//if (!pMainWnd)
	if(mstsc)
		std::cout << "gogoggo" << std::endl;
    return 0;
}

