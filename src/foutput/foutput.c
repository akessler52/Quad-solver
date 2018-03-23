//
//  fOutput.c
//  QuadraticSolver
//
//  Created by Admin on 3/22/18.
//  Copyright © 2018 Admin. All rights reserved.
//

<<<<<<< HEAD
#include "fOutput.h"

void fOuput(double quadX1,double quadX2)
{
    printf("Quadratic Equation: X1 Value %lf \n",quadX1);
    printf("Quadratic Equation: X2 Value %lf \n",quadX2);
    printf("\n");
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "foutput.h"

/*Stringifies prompt with argument doubles and returns result*/
char* foutput(double x1, double x2)
{
    char* output = calloc(1, sizeof(char));
    char* temp;
    bool x1_isReal = false;

    temp = output;
    asprintf(&output, "%s ", TEXTIFY(OUTPUT_PROMPT));
    free(temp);

    //if x1 is real (neither nan or an infinity) then append it to output string
    if(isinf(x1) == 0 && isnan(x1) == 0)
    {
        x1_isReal = true;
        temp = output;
        asprintf(&output, "%s%g", output, x1);
        free(temp);
    }

    //if x2 is real (neither nan or an infinity) then append it to output string
    if(isinf(x2) == 0 && isnan(x2) == 0)
    {
        temp = output;
        if(x1_isReal)
        {
            asprintf(&output, "%s, %g\n", output, x2);
        }else
        {
            asprintf(&output, "%s%g\n", output, x2);
        }
        free(temp);

    //ensures string ends in new line char
    }else
    {
        temp = output;
        asprintf(&output, "%s\n", output);
        free(temp);
    }

    return output;
>>>>>>> 5cbc6b0e411c7402816f68d533a81f4e5642e8d7
}
