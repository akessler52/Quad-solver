#define _GNU_SOURCE
#define _POSIX_SOURCE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "cunit.h"
#include "../lineRead.h"

void run_test(char* console_input, char* expected_output);

int main()
{

    // initialize the unit testing framework
    cunit_init();

    char *expected_outputs[] = {"5", "Swim", "The Dog Ran Fast", "44.33 1 11.2", "44, 11, 12", "///", "."};
    int test_num = 7;

    //test battery
    for(int i = 0; i < test_num; i++){
        run_test(lineRead(), expected_outputs[i]);
    }

}

//function which actually tests results
void run_test(char* console_input, char* expected_output)
{
    console_input[strlen(console_input)-1] = '\0';
    if( strcmp(expected_output, console_input) != 0 ) { \
            fprintf(cunit_log, "%s  LINE %d: %s, \"%s\" !== \"%s\"\n", \
                __FILE__ , __LINE__ , ">>>>>>> rline TEST", console_input, expected_output); \
    }
    free(console_input);
}
