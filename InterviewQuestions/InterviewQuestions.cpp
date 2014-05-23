// InterviewQuestions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "questions.h"
#include <windows.h>


using namespace std;

//Prototypes
bool waitForExit();

//Definitions
int _tmain(int argc, _TCHAR* argv[])
{
	PCONSOLE_FONT_INFOEX font = new CONSOLE_FONT_INFOEX;
	font->cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(outcon, false, font);//PCONSOLE_FONT_INFOEX is the same as CONSOLE_FONT_INFOEX*
	font->dwFontSize.X = 10;
	font->dwFontSize.Y = 18;	

	SetCurrentConsoleFontEx(outcon,false,font);
	do{
		cout <<"Begin:\n";
		main5_13(argc,argv);
	}
	while (waitForExit());
	delete font;

	return 0;
}

bool waitForExit(){
	char input;
	cout << "\nType 0 to exit\n";
	cin >> input;
	if(input == '0'){
		return false;
	}
	return true;
	/*
	while(1){
	cout << "\nType e to exit\n";
	cin >> input;
	}*/

}
