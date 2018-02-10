//
//  InputValidation.c
//  QuadraticSolver
//
//  Created by Ryan Hamilton on 2/10/18.
//  Copyright © 2018 Admin. All rights reserved.
//

#include "InputValidation.h"

double * takeInput()
{
    int scanfCheckVal = 0;
    double inputValues[3];
    
    printf("Quadratic Form aX^2+bx+c\n");
    //-----------A Value Input-----------
    printf("Enter an a value: ");
    scanfCheckVal = scanf("%lf",&inputValues[0]);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an a value: \n");
        getchar();
        scanfCheckVal = scanf("%lf",&inputValues[0]);
    }
    //-----------B Value Input-----------
    printf("Enter a b value: ");
    scanfCheckVal = scanf("%lf",&inputValues[1]);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an b value: \n");
        getchar();
        scanfCheckVal = scanf("%lf",&inputValues[1]);
    }
    //-----------C Value Input-----------
    printf("Enter a c value: ");
    scanfCheckVal = scanf("%lf",&inputValues[2]);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an c value: \n");
        getchar();
        scanfCheckVal = scanf("%lf",&inputValues[2]);
    }

    
    return inputValues;
}
