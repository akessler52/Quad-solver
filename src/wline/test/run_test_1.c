#define _GNU_SOURCE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cunit.h"
#include "../wline.h"

int main()
{

    // initialize the unit testing framework
    cunit_init();

    char *outputs[] = {"5\n", "Swim\n", "The Dog Ran Fast\n", "44.33 1 11.2\n", "44, 11, 12\n", "///\n", ".\n"};
    int test_num = 7;

    //test battery
    for(int i = 0; i < test_num; i++){
        wline(stdout, outputs[i]);
    }
}
