//
//  main.c
//  QuadraticSolver
//
//  Created by Admin on 1/10/18.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    float aVal;
    float bVal;
    float cVal;
    double xVal;
    double xVal2;
    float floatxVal;
    float floatxVal2;
    int scanfCheckVal = 0;
    char line[100];
    
    printf("Quadratic Form aX^2+bx+c\n");
    //-----------A Value Input-----------
    printf("Enter an a value: ");
    scanfCheckVal = scanf("%f",&aVal);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an a value: \n");
        getchar();
        scanfCheckVal = scanf("%f",&aVal);
    }
    //-----------B Value Input-----------
    printf("Enter a b value: ");
    scanfCheckVal = scanf("%f",&bVal);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an b value: \n");
        getchar();
        scanfCheckVal = scanf("%f",&bVal);
    }
    //-----------C Value Input-----------
    printf("Enter a c value: ");
    scanfCheckVal = scanf("%f",& cVal);
    while(scanfCheckVal != 1)
    {
        printf("That was invalid input Enter an c value: \n");
        getchar();
        scanfCheckVal = scanf("%f",&cVal);
    }

    
    xVal = (-bVal+(sqrt((bVal)*(bVal))-(4*(aVal*cVal))))/2*(aVal);
    xVal2 = (-bVal-(sqrt((bVal)*(bVal))-(4*(aVal*cVal))))/2*(aVal);

    //float val = 15030542541.0;
    //double valDBL = 15030542541.0;
    //printf("Square root of %f is %f\n",val, sqrt(val));
    //printf("Square root of %lf is %lf\n",valDBL, sqrt(valDBL));
    printf("X value = %lf\n",xVal);
    printf("X value2 = %lf\n",xVal2);
    
    return 0;
}


//Precision Values
//Float - Square root of 15030542336.000000 is 122599.112297
//Double - Square root of 15030542541.000000 is 122599.113133

/*
 *****Notes*****
 1.Are we doing two separate equations for + and -?
 2.Are we taking float input with double output or double input float output?
 3.Double or Float? Float or Double?
 4.Printed String to be a lf or f?
 5.How many decimal places are we giving
 6.
 */



