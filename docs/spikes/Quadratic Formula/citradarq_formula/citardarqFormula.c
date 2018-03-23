//
//  citardarqFormula.c
//  QuadraticSolver
//
//  Created by Ryan Hamilton on 3/20/18.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float * citardarqFormula(double aVal,double bVal,double cVal)
{
    float * xVals = (float *) malloc(2);
    float sqrtVal = (sqrt((bVal*bVal)-(4*(aVal*cVal))));
    xVals[0] = ((2*cVal)/((-bVal)+sqrtVal));
    xVals[1] = ((2*cVal)/((-bVal)-sqrtVal));

    return xVals;
}
