#include "stdafx.h"  //________________________________________ HolaMundo.cpp
#include "HolaMundo.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	HolaMundo app;
	return app.BeginDialog(IDI_HolaMundo, hInstance);
}

void HolaMundo::Window_Open(Win::Event& e)
{
	this->MessageBox(L"Hola mundo", L"WINTEMPLA",MB_OK);
}

