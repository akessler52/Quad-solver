#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include "../foutput.h"

int main(int argc, char** argv){
    if(argc != 3){
        printf("run with two float args as demo of foutput");
        return 1;
    }
    printf("%s", foutput((double)atof(argv[1]), (double)atof(argv[2])));
    return 1;
}
