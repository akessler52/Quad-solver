//
//  quadraticFormula.h
//  QuadraticSolver
//
//  Created by Admin on 2/23/18.
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

#ifndef quadraticFormula_h
#define quadraticFormula_h
float * quadraticFormula(double aVal,double bVal, double cVal);
#endif /* quadraticFormula_h */
