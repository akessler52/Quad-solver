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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "../validate/inputValid.h"
#include "../qsolve/citardarqFormula.h"
#include "../rline/lineRead.h"
#include "../wline/wline.h"
#include "../foutput/foutput.h"

#define MAX_SIZE 1024

int main(int argc, const char * argv[])
{
    //Variables and Arrays
    int run = 1; //Flag keeps the program running
    
    do
    {
        wline(stdout,"Given the form aX^2+bx+c enter in the form of A B C \n");
        
        double aVal;
        double bVal;
        double cVal;
        
        double *values = NULL;

        while(values == NULL)
        {
            char *input = lineRead();
            values = inputValidation(input);
            if(values == NULL)
            {
                    wline(stdout, "Not Valid Input: Please Try Again\n");
            }
        }

        aVal = *(values + 0);
        bVal = *(values + 1);
        cVal = *(values + 2);

        double x1;
        double x2;
        double *xVals = citardarqFormula(aVal, bVal, cVal);
        x1 = *(xVals + 0);
        x2 = *(xVals + 1);

        wline(stdout, foutput(x1, x2));

    }while(run);
    return 0;
}
