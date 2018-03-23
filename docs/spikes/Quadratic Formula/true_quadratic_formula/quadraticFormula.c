//
//  quadraticFormula.c
//  QuadraticSolver
//
//  Created by Ryan Hamilton on 3/20/18.
//  Copyright © 2018 Admin. All rights reserved.
//
/* **Directions**
 -Paste this into your "main"
 #include "quadraticFormula.h"
 float Quadx1;
 float Quadx2;
 float *xVals = citardarqFormula(aVal, bVal, cVal);
 Quadx1 = *(xVals + 0);
 Quadx2 = *(xVals + 1);
 printf("X1 Value %lf \n",Quadx1);
 printf("X2 Value %lf \n",Quadx2);
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float * quadraticFormula(double aVal,double bVal, double cVal)
{
    float * xVals = (float *) malloc(2);
    float sqrtVal = (sqrt((bVal*bVal)-(4*(aVal*cVal))));
    xVals[0] = ((-bVal)+(sqrtVal)/(2*(aVal)));
    xVals[1] = ((-bVal)-(sqrtVal)/(2*(aVal)));
    
    return xVals;
}
