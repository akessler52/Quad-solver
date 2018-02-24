//
//  inputValid2.h
//  QuadraticSolver
//
//  Created by Admin on 2/23/18.
//  Copyright © 2018 Admin. All rights reserved.
//

/*
 //How to get the A,B,C values from the Input Validation
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

#ifndef inputValid2_h
#define inputValid2_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double * inputValidation()
{
    double values[3] = {0.0,0.0,0.0}; //0-aVal 1-bVal 2cVal
    double xVal;
    double xVal2;
    char str[100] = "";
    char* token;
    char* aVal;
    char* bVal;
    char* cVal;
    int scanfCheckVal = 0;
    
    printf("Enter a Quadratic in the form aX^2+bx+c \n");
    fgets(str,100, stdin);
    printf("The String is: ");
    printf(str);
    
    /* **TESTING DELIMITED INPUT VALUES**
     printf(strtok(str, " "));
     printf("\n");
     printf(strtok(NULL, " "));
     printf("\n");
     printf(strtok(NULL, " "));
     printf("\n");*/
    
    aVal = strtok(str," ");
    bVal = strtok(NULL, " ");
    cVal = strtok(NULL, " ");
    
    values[0] = strtol(aVal,&token,10);
    values[1] = strtol(bVal,&token,10);
    values[2] = strtol(cVal,&token,10);
    
    if(values[0] == 0)
    {
        printf("ERROR: Enter a different A value: ");
        scanfCheckVal = scanf("%lf",&values[0]);
        while(scanfCheckVal != 1)
        {
            printf("That was invalid input Enter an A value: \n");
            getchar();
            scanfCheckVal = scanf("%lf",&values[0]);
        }
    }
    if(values[1] == 0)
    {
        printf("ERROR: Enter a different B value: ");
        scanfCheckVal = scanf("%lf",&values[1]);
        while(scanfCheckVal != 1)
        {
            printf("That was invalid input Enter an B value: \n");
            getchar();
            scanfCheckVal = scanf("%lf",&values[1]);
        }
    }
    if(values[2]==0)
    {
        printf("ERROR: Enter a different C value: ");
        scanfCheckVal = scanf("%lf",&values[2]);
        while(scanfCheckVal != 1)
        {
            printf("That was invalid input Enter an C value: \n");
            getchar();
            scanfCheckVal = scanf("%lf",&values[2]);
        }
    }
    
    /*
     values[0] = atol(strtok(str," "));
     values[1] = atol(strtok(NULL, " "));
     values[2] = atol(strtok(NULL, " "));
     */
    
    /*printf("A Val %lf \n",values[0]);
    printf("B Val %lf \n",values[1]);
    printf("C Val %lf \n",values[2]);*/
    printf("\n");
    
    return values;
}

#endif /* inputValid2_h */
