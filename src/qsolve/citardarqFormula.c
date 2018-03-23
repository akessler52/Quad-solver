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

double * citardarqFormula(double aVal,double bVal,double cVal)
{
    double * xVals = (double *) malloc(2);
    double sqrtVal = (sqrt((bVal*bVal)-(4*(aVal*cVal))));
    xVals[0] = ((2*cVal)/((-bVal)+sqrtVal));
    xVals[1] = ((2*cVal)/((-bVal)-sqrtVal));

    return xVals;
}
