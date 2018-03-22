#define _GNU_SOURCE

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
        asprintf(&output, "%s%.16g", output, x1);
        free(temp);
    }

    //if x2 is real (neither nan or an infinity) then append it to output string
    if(isinf(x2) == 0 && isnan(x2) == 0)
    {
        temp = output;
        if(x1_isReal)
        {
            asprintf(&output, "%s, %.16g\n", output, x2);
        }else
        {
            asprintf(&output, "%s%.16g\n", output, x2);
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
}
