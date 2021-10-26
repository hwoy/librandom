#include "lcg.h"

URND64 lcg(URND64 seed,URND64 a,URND64 c,URND64 m)
{
	return (a*seed+c)%m;
}