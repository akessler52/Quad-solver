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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../wline.h"

int main()
{

    char *outputs[] = {"5\n", "Swim\n", "The Dog Ran Fast\n", "44.33 1 11.2\n", "44, 11, 12\n", "///\n", ".\n"};
    int test_num = 7;

    //test battery
    for(int i = 0; i < test_num; i++){
        wline(stdout, outputs[i]);
    }
}
