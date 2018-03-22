#include <stdio.h>
#include <stdlib.h>
#include <wline.h>

wline(int file, char *str)
{
    fprintf(file, "%s", str);
}
