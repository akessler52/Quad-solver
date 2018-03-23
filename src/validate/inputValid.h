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

/*
 //How to get the A,B,C values from the Input Validation
 #include "inputValid2.h"
 double aVal;
 double bVal;
 double cVal;
 double *values = inputValidation();
 aVal = *(values + 0);
 bVal = *(values + 1);
 cVal = *(values + 2);

 //Print Output
 printf("A Val %lf \n",aVal);
 printf("B Val %lf \n",bVal);
 printf("C Val %lf \n",cVal);
 printf("\n");
 */
#ifndef inputValid_h
#define inputValid_h
double * inputValidation(char *);
#endif /* inputValid_h */
