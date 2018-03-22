
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cunit.h"
#include "../foutput.h"

void run_test(double x1, double x2, char* expected_output);

int main()
{

    // initialize the unit testing framework
    cunit_init();

    double POS_INF = 1.0/0.0;
    double NEG_INF = -1.0/0.0;
    double _NAN = 0.0/0.0;

    //test battery
    run_test(0.0f, 0.000f, "0, 0"); //zeros test
    run_test(.11111111111111111f, .00000000000000009f, "0.111111, 9e-17");    //precision display test
    run_test(_NAN, 7.5f, "7.5"); //nan tests
    run_test(7.5f, _NAN, "7.5");
    run_test(POS_INF, 36.33f, "36.33");  // positive infinity tests
    run_test(36.33f, POS_INF, "36.33");
    run_test(NEG_INF, 99.45f, "99.45");  //negative infinity tests
    run_test(99.45f, NEG_INF, "99.45");
    run_test(43.4f, 0.22f, "43.4, 0.22");   //general tests

}

void run_test(double x1, double x2, char* expected_output)
{
    char *str = foutput(x1, x2);
    char *tmp = strchr(str, ' ');
    tmp++;
    tmp[strlen(tmp)-1] = '\0';
    if( strcmp(expected_output, tmp) != 0 ) { \
            fprintf(cunit_log, "%s  LINE %d: %s, %s !== %s\n", \
                __FILE__ , __LINE__ , "XX", tmp, expected_output); \
    }
    free(str);
}
