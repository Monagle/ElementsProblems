#include "stdafx.h"
#include "common.h"
#include <math.h>

using namespace std;


void printAsBinary(unsigned int num)
{	
	char buffer [64];
	_itoa_s (num,buffer,2);
	printf ("%s\n",buffer);
}