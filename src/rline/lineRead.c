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
    //printf("Enter a Quadratic (aX^2+bx+c) in form A B C \n");
    fgets(str,100, stdin); //Retrieve Stdin values
    //printf("The String is: %s",str);
    strBackup = str; //Copy str to strBackup

    while((str = strchr(str,' ')) != NULL) //While there's another space delimited token add to count and move pointer
    {
        count++;
        str++;
    }

    /*//lineRead SHOULDNT PRINT TO THE CONSOLE OR DO ANY INPUT VALIDATION
    if(count < 2) //If the count is less than 2 warn user and return lineRead();
    {
        printf("TOO FEW VALUES: Try again \n");
        return lineRead();
    }else
    */

    return strBackup;
}
