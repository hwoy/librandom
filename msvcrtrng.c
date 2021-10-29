#include "lcg.h"
#include "msvcrtrng.h"


URND32 msvcrtrng(URND32 *seed)
{
	*seed=BITRANGE(BITOF(URND64),lcg(*seed,a_mslcg,c_mslcg,m_mslcg),31,0);
	return BITRANGE(BITOF(URND32),*seed,30,16);
}
