#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

static unsigned int dice(PMSVCRTRNG ms,unsigned int n)
{
	return randomrang(msvcrtrng(ms),n,1);
}

static unsigned int dice6(PMSVCRTRNG ms)
{
	return dice(ms,6);
}

int main()
{
	unsigned int i;
	MSVCRTRNG ms;
	msvcrtrngint(&ms,time(NULL));
	for(i=0;i<=20;++i)
	{
		printf("%u\n",dice6(&ms));
	}
	
	return 0;
}
