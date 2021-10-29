#ifndef __LCG_H__
#define __LCG_H__

typedef unsigned long long URND64;
typedef unsigned int URND32;

#define BITOF(x) (sizeof(x)*8)
#define BITRANGE(BIT,VAL,A,B) ((VAL<<(BIT-1-A))>>(B+(BIT-1-A)))


_Static_assert(BITOF(URND64)==64 && BITOF(URND32)==32,"Bit error unsigned int");

typedef long long RND64;
typedef long RND32;

_Static_assert(BITOF(RND64)==64 && BITOF(RND32)==32,"Bit error int");

URND64 lcg(URND64 seed,URND64 a,URND64 c,URND64 m);


#endif