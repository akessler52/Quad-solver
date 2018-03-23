#include <stdio.h>
#include <stdlib.h>
#include "wline.h"

void wline(FILE* file, char *str)
{
    fprintf(file, "%s", str);
}
