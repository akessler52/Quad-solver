//
//  lineRead.c
//  QuadraticSolver
//
//  Created by Ryan Hamilton on 3/20/18.
//  Copyright © 2018 Admin. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// HOW TO USE
/* char *str = lineRead();
 * Then to reference the values
 * *(values + n) N being the value in the array from 0-n
 */

char * lineRead()
{
    char *str;
    char *strBackup;
    int count = 0;
    str = (char *) malloc(100); //Malloc memory to later check for 3 distinct values
    strBackup = (char *) malloc(100); //Malloc memory to later pass to inputValid
    printf("Enter a Quadratic (aX^2+bx+c) in form A B C \n");
    fgets(str,100, stdin); //Retrieve Stdin values
    //printf("The String is: %s",str);
    strBackup = str; //Copy str to strBackup

    while((str = strchr(str,' ')) != NULL) //While there's another space delimited token add to count and move pointer
    {
        count++;
        str++;
    }

    if(count < 2) //If the count is less than 2 warn user and return lineRead();
    {
        printf("TOO FEW VALUES: Try again \n");
        return lineRead();
    }else
        return strBackup;
}
