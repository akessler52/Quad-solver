#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float* solve(float, float, float);

int main(int argc, const char * argv[])
{
    float a = atof(argv[1]); //20;
    float b = atof(argv[2]); //130;
    float c = atof(argv[3]); //200;
    float* result;
    float x1, x2;
    x1 = -(sqrt((b*b)-4*a*c)+b)/(2*a);
    x2 = (sqrt((b*b)-4*a*c)-b)/(2*a);
    // result = solve(a, b, c);

    printf("x1 = %f, x2 = %f\n", x1, x2);

    return 0;
}

// float* solve(float a, float b, float c){
//     float result[2] = {-(sqrt((b*b)-4*a*c)+b)/(2*a), (sqrt((b*b)-4*a*c)-b)/(2*a)};
//
//     result[0] = -(sqrt((b*b)-4*a*c)+b)/(2*a);
//     result[1] = (sqrt((b*b)-4*a*c)-b)/(2*a);
//
//     return result;
// }
