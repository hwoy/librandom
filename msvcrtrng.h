#ifndef __MSRNG_H__
#define __MSRNG_H__

typedef URND32 MSVCRTRNG;
typedef const URND32* cont_PMSVCRTRNG;
typedef URND32* PMSVCRTRNG;

#define m_mslcg (1ULL<<32)
#define a_mslcg 214013
#define c_mslcg 2531011

MSVCRTRNG msvcrtrngint(PMSVCRTRNG ms,URND32 seed);
URND32 msvcrtrng(PMSVCRTRNG ms);

#endif