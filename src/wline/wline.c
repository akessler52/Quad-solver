#include <stdio.h>
#include <stdlib.h>
#include "wline.h"

void wline(int file, char *str)
{
    fprintf(file, "%s", str);
}
