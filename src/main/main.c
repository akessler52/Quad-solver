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
#include "lineRead.h"
#include "quadraticFormula.h"
#include "fOutput.h"
#define MAX_SIZE 1024

int main(int argc, const char * argv[])
{
    //Variables and Arrays
    double * values = (double *) malloc(4); //0-aVal 1-bVal 2-cVal 3-Return Value 0 for valid 1 for invalid
    int run = 1; //Flag keeps the program running
    char *str = (char *) malloc(100);
    float quadX1; //Root One
    float quadX2; //Root Two
    
    do{
    
    str = lineRead();
    values = inputValidation(str);
    
    while(*(values+3) == 1)
    {
        str = lineRead();
        values = inputValidation(str);
    }
    
    float *xVals = quadraticFormula(*(values+0),*(values+1), *(values+2));
    quadX1 = *(xVals + 0);
    quadX2 = *(xVals + 1);
    fOuput(quadX1, quadX2);
   
    
    }while(run);
    return 0;
}

