#include "stdafx.h"
#include "5.4.h"
#include <math.h>

using namespace std;

void main5_4(int argc, _TCHAR* argv[])
{
	unsigned int x = 48;
	cout << "x :";
	printAsBinary(x);
	unsigned int y = checkClosestNumber(x);
	cout << "y :";
	printAsBinary(y);
}

unsigned int checkClosestNumber(unsigned int x)
{
	unsigned int max = -1;
	if(x == 0 || x == max) return 0;
	unsigned int lowestBit = 1 & x;
	cout << "Lowest bit : ";
	printAsBinary(lowestBit);
	for(int i = 1;  i < 63; i++){
		if(((x>>i) & 1 )^ lowestBit){
			unsigned int swap = 3 << (i - 1);
			unsigned int y = swap ^ x;
			return y;
		}
	}
}