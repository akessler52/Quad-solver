#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>

#define OUTPUT_PROMPT Factors:

/*used to turn macro into string*/
#define _TEXTIFY(x) #x
#define TEXTIFY(x) _TEXTIFY(x)


char* foutput(double x1, double x2)
{
    char* output = calloc(1, sizeof(char));
    char* temp = output;
    asprintf(&output, "%s %lf, %lf\n", TEXTIFY(OUTPUT_PROMPT), x1, x2);
    free(temp);
    return output;
}
