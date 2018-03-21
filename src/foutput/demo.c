#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

#define OUTPUT_PROMPT Factors:

/*used to turn macro into string*/
#define _TEXTIFY(x) #x
#define TEXTIFY(x) _TEXTIFY(x)

char* foutput(double x1, double x2);

int main(int argc, char** argv){
    printf("%s", foutput((double)atof(argv[1]), (double)atof(argv[2])));
    return 1;
}

char* foutput(double x1, double x2)
{
    char* output = calloc(1, sizeof(char));
    char* temp = output;
    asprintf(&output, "%s %lf, %lf\n", TEXTIFY(OUTPUT_PROMPT), x1, x2);
    free(temp);
    return output;
}
