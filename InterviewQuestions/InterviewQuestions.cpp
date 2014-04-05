// InterviewQuestions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "questions.h"


using namespace std;

//Prototypes
void waitForExit();

//Definitions
int _tmain(int argc, _TCHAR* argv[])
{
	
	main5_4(argc,argv);

	waitForExit();
	return 0;
}

void waitForExit(){
	char input;
	while(1){
		cout << "\nType e to exit\n";
		cin >> input;
		if(input = 'e'){
			return;
		}
	}
	
}