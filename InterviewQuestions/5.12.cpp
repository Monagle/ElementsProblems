#include "stdafx.h"
#include "5.12.h"
#include <math.h>

using namespace std;

void main5_12(int argc, _TCHAR* argv[]){
	cout << rndFive() << "\n";
	cout << rndFive() << "\n";
	cout << rndFive() << "\n";
	cout << rndFive() << "\n";
	cout << rndFive() << "\n";
}

unsigned int rndFive(){
	return rndSplit(0,9) % 5;
}

unsigned int rndSplit(int sideA, int sideB){
	if( sideA == sideB) return sideA;
		int diff = sideB - sideA;
		int half = (diff / 2);
	if(flipCoin())
	{
		return rndSplit(sideA,sideA + half);
	}
	else {
		return rndSplit(sideB - half, sideA);
	}
}

bool flipCoin(){	
	return rand() % 2;
}