#include <stdio.h>
#include <stdlib.h>
#include "random.h"

#define SEED 100


int main()
{
	unsigned int i;
	URND32 seed=SEED;
	
	puts("=========== MSVCRT ===========");
	srand(SEED);
	for(i=0;i<=10;++i)
	{
		printf("%u\n",rand());
	}
	
	puts("=========== RANDOM ===========");
	for(i=0;i<=10;++i)
	{
		printf("%u\n",mslcg(&seed));
	}
	
	return 0;
}
