//
//  inputValid.c
//  QuadraticSolver
//
//  Created by Admin on 2/23/18.
//  Copyright © 2018 Admin. All rights reserved.
//
/*
 //How to get the A,B,C values from the Input Validation
 #include "inputValid.h"
 double aVal;
 double bVal;
 double cVal;
 double *values = inputValidation();
 aVal = *(values + 0);
 bVal = *(values + 1);
 cVal = *(values + 2);

 //Print Output
 printf("A Val %lf \n",*(values + 0));
 printf("B Val %lf \n",*(values + 1));
 printf("C Val %lf \n",*(values + 2));
 printf("\n");
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <math.h>
#include <string.h>
#include "../rLine/lineRead.h"
#define MAX_SIZE 1024

double * inputValidation()
{
    //Variables and Arrays
    double * values = (double *) malloc(3); //0-aVal 1-bVal 2cVal
    char* linePtr; //Pointer for tokenizing string
    char *str = lineRead(); //Calls lineRead which pulls the input from console

    //Retriving values
    strtok(str," "); //Sets the pointer on the string read from lineRead()
    *(values + 0) = strtod(str, &linePtr); //Convert
    //printf("%lf \n",strtod(str, &linePtr));

    linePtr = strtok(NULL, " "); //Moves Pointer to next value
    *(values + 1) = strtod(linePtr, NULL);
    //printf("%lf \n",strtod(linePtr, NULL));

    linePtr = strtok(NULL, " "); //Move Pointer to next value
    *(values + 2) = strtod(linePtr, NULL);
    //printf("%lf \n",strtod(linePtr, NULL));

    printf("A Val %lf \n",*(values + 0));
    printf("B Val %lf \n",*(values + 1));
    printf("C Val %lf \n",*(values + 2));
    printf("\n");

    //Error checking and printing
    if(*(values + 0) == 0) //Checks the value of A to see if it's 0. In the case its 0 the string is not a quadratic reRun and tell the user to retry
    {
        printf("WARNING! This is not a quadratic. Enter a new string. \n");
        return inputValidation();
    }

    if(*(values + 1) == 0 || *(values + 2) == 0) //Checks if the next two values are 0 if thats the case it will let these user know it more than likely wont work.
    {
        printf("WARNING! One or more of your values is 0 this can cause nans and erorrs. \n");
    }

    return values;
}
