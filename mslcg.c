#include "lcg.h"
#include "mslcg.h"

#define m_mslcg (1ULL<<32)
#define a_mslcg 214013
#define c_mslcg 2531011

URND32 mslcg(URND32 *seed)
{
	*seed=BITRANGE(BITOF(URND64),lcg(*seed,a_mslcg,c_mslcg,m_mslcg),31,0);
	return BITRANGE(BITOF(URND32),*seed,30,16);
}
