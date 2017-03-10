#include "LaborkaConfig.h"
#ifdef USE_TRYGONOMETRY_DEGREE
	#include<trygonometria.h>
#else
	#define _USE_MATH_DEFINES
	#include<math.h>
#endif

int main() {
	double result; 
#ifdef USE_TRYGONOMETRY_DEGREE
	result = cos_degree(45.0);
#else
	result = cos(M_PI/4.0);
#endif
return 0;}