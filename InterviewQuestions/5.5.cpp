#include "stdafx.h"
#include "5.5.h"
#include <math.h>

using namespace std;

void main5_5(int argc, _TCHAR* argv[]){
	unsigned int x; 
	unsigned int y; 
	cin >> x;
	cin >> y;

	cout << bitMultiply(x,y);
}


unsigned int bitMultiply(unsigned int x,unsigned int y)
{	

	unsigned int product =0;
	while(y){
		if(y & 1u){
			product = bitAdd(product,x);
		}
		y >>= 1; 
		x <<=1; 
	}
	return product;
}

unsigned int bitAdd(unsigned int x, unsigned int y)
{
	unsigned int carry = x & y;
	unsigned int sum = x ^ y;
	while(carry){
		x = sum;
		sum ^= (carry << 1);
		carry = (carry << 1) & x; 
	}
	return sum;
}

