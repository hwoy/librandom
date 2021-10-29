#ifndef __MSVCRTRNG_H__
#define __MSVCRTRNG_H__

typedef URND32 MSVCRTRNG;
typedef const MSVCRTRNG* cont_PMSVCRTRNG;
typedef MSVCRTRNG* PMSVCRTRNG;

#define m_mslcg (1ULL<<32)
#define a_mslcg 214013
#define c_mslcg 2531011

MSVCRTRNG msvcrtrngint(PMSVCRTRNG ms,URND32 seed);
URND32 msvcrtrng(PMSVCRTRNG ms);

#endif