
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cunit.h"
#include "foutput.h"

void run_test(double x1, double x2, char* expected_output);

int main()
{

    // initialize the unit testing framework
    cunit_init();

    double NAN = 0.0/0.0;
    double POS_INF = 1.0 /0.0;
    double NEG_INF = -1.0/0.0;

    //test battery
    run_test(0f, 0.000f, "0.0, 0.0"); //zeros test
    run_test(.11111111111111119999999999f, .00000000000000009f, "0.1111111111111112, 0.0");    //precision display test
    run_test(NAN, 7.5f, "7.5"); //nan tests
    run_test(7.5f, NAN, "7.5");
    run_test(POS_INF, 36.33f, "UNDEFINED, 36.33");  // positive infinity tests
    run_test(36.33f, POS_INF, "36.33, UNDEFINED");
    run_test(NEG_INF, 99.45f, "UNDEFINED, 36.33");  //negative infinity tests
    run_test(99.45f, NEG_INF, "36.33, UNDEFINED");
    run_test(43.4f, 0.22f, "43.4, 0.22");   //general tests

}

void run_test(double x1, double x2, char* expected_output)
{
    char *str = foutput(x1, x2);
    char *tmp = str;
    strtok(str, "-");   //trim off leading prompt
    assert_feq(expected_output, str);
    free(tmp);
}
