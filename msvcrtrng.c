#include "lcg.h"
#include "msvcrtrng.h"

MSVCRTRNG msvcrtrngint(PMSVCRTRNG ms,URND32 seed)
{
	return *ms=seed;
}

URND32 msvcrtrng(PMSVCRTRNG ms)
{
	*ms=BITRANGE(BITOF(URND64),lcg(*ms,a_mslcg,c_mslcg,m_mslcg),31,0);
	return BITRANGE(BITOF(URND32),*ms,30,16);
}
