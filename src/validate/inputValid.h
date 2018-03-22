//
//  inputValid.h
//  QuadraticSolver
//
//  Created by Admin on 2/23/18.
//  Copyright © 2018 Admin. All rights reserved.
//
/*
 //How to get the A,B,C values from the Input Validation
 #include "inputValid2.h"
 double aVal;
 double bVal;
 double cVal;
 double *values = inputValidation();
 aVal = *(values + 0);
 bVal = *(values + 1);
 cVal = *(values + 2);
 
 //Print Output
 printf("A Val %lf \n",aVal);
 printf("B Val %lf \n",bVal);
 printf("C Val %lf \n",cVal);
 printf("\n");
 */
#ifndef inputValid_h
#define inputValid_h
double * inputValidation(char *);
#endif /* inputValid_h */
