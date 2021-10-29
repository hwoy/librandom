#include <stdio.h>
#include <stdlib.h>
#include "random.h"

#define SEED 100


int main()
{
	unsigned int i;
	URND32 seed=SEED;
	MSVCRTRNG ms;
	GLIBCRNG g;
	
	puts("=========== LIBC ===========");
	srand(SEED);
	for(i=0;i<=10;++i)
	{
		printf("%u\n",rand());
	}
	
	puts("=========== MSVCRT ===========");
	msvcrtrngint(&ms,SEED);
	for(i=0;i<=10;++i)
	{
		printf("%u\n",msvcrtrng(&seed));
	}
	
	puts("=========== glibc ===========");
	glibcrnginit(g,SEED);
	for(i=0;i<=10;++i)
	{
		printf("%u\n",glibcrng(g));
	}
	
	return 0;
}
