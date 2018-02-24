//
//  citardarqFormula.h
//  QuadraticSolver
//
//  Created by Admin on 2/23/18.
//  Copyright © 2018 Admin. All rights reserved.
//
/* **Directions**
 -Paste this into your "main"
 float x1;
 float x2;
 float *xVals = citardarqFormula(aVal, bVal, cVal);
 x1 = *(xVals + 0);
 x2 = *(xVals + 1);
 printf("X1 Value %lf \n",x1);
 printf("X2 Value %lf \n",x2);
*/

#include <math.h>
#include <stdlib.h>

#ifndef citardarqFormula_h
#define citardarqFormula_h

float * citardarqFormula(double aVal,double bVal,double cVal)
{
    float xVals[2] = {0.0,0.0};
    
    xVals[0] = (2*cVal)/((-bVal)+(sqrt((bVal*bVal)-(4*(aVal*cVal)))));
    xVals[1] = (2*cVal)/((-bVal)-(sqrt((bVal*bVal)-(4*(aVal*cVal)))));
    
    return xVals;
}

#endif /* citardarqFormula_h */
