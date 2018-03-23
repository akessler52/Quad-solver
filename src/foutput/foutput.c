/*
Copyright @ 2018 Western Michigan University

This file is part of Quadsolver.
Quadsolver is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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
        //if no real factors then notify user
        if(!x1_isReal)
        {
            temp = output;
            asprintf(&output, "%s No Real Solutions", output);
            free(temp);
        }

        temp = output;
        asprintf(&output, "%s\n", output);
        free(temp);

    }

    return output;
}
