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
	//People 1-3
	unsigned int winnerA;
	winnerA = rndBits(32) % 3; 
	//People 4 and 5
	unsigned int winnerB;
	if(flipCoin()){
		winnerB = 4;
	}
	else{
		winnerB = 5;
	}
	//Winner from groups  a and b
	unsigned int winner;
	if (flipCoin()){
		winner = winnerA;
	}
	else{
		winner = winnerB;
	}
	return winner;
	//return rndSplit(0,9) % 5;
}

unsigned int rndBits(unsigned int bits){
	if(bits == 1) return flipCoin();
	unsigned int left;
	unsigned int right;
	unsigned int ret;
	unsigned int half = bits/2;
	left = rndBits(half);
	right = rndBits(half);
	ret = right;
	ret += left << half;
	return ret;
}

unsigned int rndSplit(int sideA, int sideB){
	//if( sideA == sideB) return sideA;
	//	int diff = sideB - sideA;
	//	int half = (diff / 2);
	//if(flipCoin())
	//{
	//	return rndSplit(sideA,sideA + half);
	//}
	//else {
	//	return rndSplit(sideB - half, sideA);
	//}
	return NULL;
}

bool flipCoin(){	
	return rand() % 2;
}
