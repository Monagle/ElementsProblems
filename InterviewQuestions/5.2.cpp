#include "stdafx.h"
#include "5.2.h"
#include <math.h>

using namespace std;

void main5_2(int argc, _TCHAR* argv[])
{
	unsigned int x = 155;
	unsigned int i = 1;
	unsigned int j = 6;
	cout << "Start: ";
	printAsBinary(x);

	unsigned int swapped = swapBits(x,i,j);
	cout << "End: ";
	printAsBinary(swapped);

	return;
}


unsigned int swapBits(unsigned int x, unsigned int i, unsigned int j)
{
	unsigned int iBit = pow(2,i);
	cout << "i index: ";
	printAsBinary(iBit);
	unsigned int jBit = pow(2,j);
	cout << "j index: ";
	printAsBinary(jBit);
	unsigned int bitMask = ~(jBit + iBit);
	cout << "Mask: ";
	printAsBinary(bitMask);
	unsigned int removedBits = x & bitMask;
	cout << "x with bits removed: ";
	printAsBinary(removedBits);
	iBit = x & iBit;
	cout << "i Bit: ";
	printAsBinary(iBit);
	jBit = x & jBit;
	cout << "j Bit: ";
	printAsBinary(jBit);
	int diff = j - i;
	iBit <<= diff;
	jBit >>= diff;
	return removedBits + iBit + jBit;
}

void printAsBinary(unsigned int num)
{	
	char buffer [64];
	_itoa_s (num,buffer,2);
	printf ("%s\n",buffer);
}