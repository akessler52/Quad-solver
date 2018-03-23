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
#include <stdbool.h>
#include <setjmp.h>
#include <math.h>
#include <string.h>


double * inputValidation(char * lineReadStr)

//converts input string to doubles and returns them. Null is returned instead
//upon failure
double * inputValidation(char* str)
{

    bool isInvalid = false;

    //Variables and Arrays
    double * values = (double *) malloc(4); //0-aVal 1-bVal 2-cVal 3-Return Value 0 for valid 1 for invalid
    char* linePtr; //Pointer for tokenizing string

    //char *str = lineReadStr; //Calls lineRead which pulls the input from console
    //char *str = lineRead(); //Calls lineRead which pulls the input from console

    //Retriving values
    strtok(str," "); //Sets the pointer on the string read from lineRead()
    *(values + 0) = strtod(str, &linePtr); //Convert
    //printf("%lf \n",strtod(str, &linePtr));
    if(values[0] == 0.0f && str == linePtr)
    {
        isInvalid = true;
    }

    linePtr = strtok(NULL, " "); //Moves Pointer to next value
    *(values + 1) = strtod(linePtr, NULL);
    //printf("%lf \n",strtod(linePtr, NULL));
    if(values[0] == 0.0f && str == linePtr)
    {
        isInvalid = true;
    }

    linePtr = strtok(NULL, " "); //Move Pointer to next value
    *(values + 2) = strtod(linePtr, NULL);
    //printf("%lf \n",strtod(linePtr, NULL));
    if(values[0] == 0.0f && str == linePtr)
    {
        isInvalid = true;
    }

/*COMMENTED OUT BECAUSE ONLY wline SHOULD CALL PRINTF, PER DIRECTIONS
    printf("A Val %lf \n",*(values + 0));
    printf("B Val %lf \n",*(values + 1));
    printf("C Val %lf \n",*(values + 2));
    printf("\n");
*/

    //Error checking and printing
    if(isInvalid)
    {
        return NULL;
    }

    if(*(values + 0) == 0) //Checks the value of A to see if it's 0. In the case its 0 the string is not a quadratic reRun and tell the user to retry
    {
            //printf("ERROR: This is not a quadratic. Enter a new string. \n");
        return NULL;
    }
    else if(*(values + 1) == 0 || *(values + 2) == 0) //Checks if the next two values are 0 if thats the case it will let these user know it more than likely wont work.
    {
            //printf("Error! One or more of your values is 0 this can cause nans and erorrs. \n");
        //printf("WARNING! This is not a quadratic. Enter a new string. \n");
        return NULL;
    }


    return values;
}
