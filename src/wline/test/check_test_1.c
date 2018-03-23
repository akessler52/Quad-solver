#define _GNU_SOURCE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cunit.h"

void check(char* real_input, char* expected_output);

int main()
{

    // initialize the unit testing framework
    cunit_init();

    char *expected_outputs[] = {"5", "Swim", "The Dog Ran Fast", "44.33 1 11.2", "44, 11, 12", "///", "."};
    int test_num = 7;

    for(int i = 0; i < test_num; i++){
        char* line = NULL;
        size_t n = 0;
        if(getline(&line, &n, stdin) != -1){
            check(line, expected_outputs[i]);
            free(line);
        }
    }

}

//function which actually tests results
void check(char* real_output, char* expected_output)
{
    real_output[strlen(real_output)-1] = '\0';
    if( strcmp(expected_output, real_output) != 0 ) { \
            fprintf(cunit_log, "%s  LINE %d: %s, \"%s\" !== \"%s\"\n", \
                __FILE__ , __LINE__ , ">>>>>>> wline TEST", real_output, expected_output); \
    }
}
