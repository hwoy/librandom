#ifndef __MSRNG_H__
#define __MSRNG_H__

#define m_mslcg (1ULL<<32)
#define a_mslcg 214013
#define c_mslcg 2531011

URND32 msvcrtrng(URND32 *seed);

#endif