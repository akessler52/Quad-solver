//
//  main.c
//  QuadraticSolver
//
//  Created by Admin on 1/10/18.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "inputValid.h"
#include "citardarqFormula.h"
#include "quadraticFormula.h"
#define MAX_SIZE 1024

int main(int argc, const char * argv[])
{
    int run = 1; //Flag keeps the program running
    do{
    double aVal;
    double bVal;
    double cVal;
    double *values = inputValidation();
    aVal = *(values + 0);
    bVal = *(values + 1);
    cVal = *(values + 2);
    
    printf("A Value %lf \n",aVal);
    printf("B Value %lf \n",bVal);
    printf("C Value %lf \n",cVal);
    printf("\n");
    
    float x1;
    float x2;
    float *xVals = citardarqFormula(aVal, bVal, cVal);
    x1 = *(xVals + 0);
    x2 = *(xVals + 1);
    printf("Citardarq Formula: X1 Value %lf \n",x1);
    printf("Citardarq Formula: X2 Value %lf \n",x2);
    
    float Quadx1;
    float Quadx2;
    float *xVals2 = citardarqFormula(aVal, bVal, cVal);
    Quadx1 = *(xVals2 + 0);
    Quadx2 = *(xVals2 + 1);
    printf("Quadratic Equation: X1 Value %lf \n",Quadx1);
    printf("Quadratic Equation: X2 Value %lf \n",Quadx2);
    printf("\n");
        
    }while(run);
    return 0;
}

