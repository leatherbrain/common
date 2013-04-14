/***************************************************************************
 * FILE:			sysdef.h
 * DESCRIPTION:		Common stuff for all projects.
 * 
 * CREATED ON:		26 May 2011
 * AUTHOR:			S. Sundaram
 ***************************************************************************/

#ifndef SYSDEF_H_
#define SYSDEF_H_


/********************* INCLUDES **********************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include <limits>
#include <utility>
#include <assert.h>
#include <iostream>


/******************** NAMESPACES *********************/

using namespace std;


/**************** MACROS AND TYPEDEFS ****************/

#define CONST_PI				3.14159265
#define CONST_PIby2				1.57079633
#define CONST_PIby4				0.78539816
#define CONST_PIinto2			6.28318531
#define CONST_E					2.71828183
#define CONST_PRECISION			0.00000001

typedef unsigned char U8;
typedef char S8;
typedef unsigned int U16;
typedef int S16;
typedef unsigned long int U32;
typedef long int S32;
typedef float F32;
typedef double F64;

#define DEBUG_
#ifdef DEBUG_
#define DEBUG_PRINT				printf
#else
#define DEBUG_PRINT
#endif


/****************** COMMON FUNCTIONS *****************/

inline bool sameFloats(F64 f64A, F64 f64B)
{
	if (fabs(f64A - f64B) < CONST_PRECISION) return true;
	else return false;
}


#endif /* SYSDEF_H_ */
