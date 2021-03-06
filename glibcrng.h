#ifndef __GLIBCRNG_H__
#define __GLIBCRNG_H__

#include "lcg.h"

typedef RND32 GLIBCRNGOBJECT;
typedef GLIBCRNGOBJECT GLIBCRNG[31];
typedef const GLIBCRNGOBJECT* cont_PGLIBCRNG;
typedef GLIBCRNGOBJECT* PGLIBCRNG;

PGLIBCRNG glibcrnginit(PGLIBCRNG buffer,URND32 seed);

URND32 glibcrng(PGLIBCRNG buffer);

#endif
