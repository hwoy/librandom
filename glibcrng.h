#ifndef __GLIBCRNG_H__
#define __GLIBCRNG_H__

#include "lcg.h"

typedef RND32 GLIBCRNG[31];
typedef const RND32* cont_PGLIBCRNG;
typedef RND32* PGLIBCRNG;

PGLIBCRNG glibcrnginit(PGLIBCRNG buffer,URND32 seed);

URND32 glibcrng(PGLIBCRNG buffer);

#endif
