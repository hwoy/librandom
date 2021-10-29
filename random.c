#include "random.h"

unsigned int randomrang(unsigned int val,unsigned int a,unsigned int b)
{
	return a>=b ? b+val%(1+a-b) : -1U;
}
