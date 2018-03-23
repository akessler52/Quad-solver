
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "cunit.h"
#include "../citardarqFormula.h"

void run_test(double a, double b, double c, double exppected_1, double expected_2);
bool _assert_feqaerr(double a, double b, double aerr);

int main()
{

    // initialize the unit testing framework
    cunit_init();

    double nan = 0.0/0.0;

    //test battery
    run_test(5.0f, 23.0f, -1.0f, -4.6854f, 0.085372f);
    run_test(4.0f, 3.0, 5.0f, nan, nan);
    run_test(2.0f, -8.0f, 5.66678f, 0.919903f, 3.0801f);
    run_test(-50.3f, 0.1234567f, 77.0f, -1.23603f, 1.23849f);
    run_test(23.0f, 7.98f, 2.0f, nan, nan);
    run_test(2.45764f, 33.0f, 5.554f, -13.257f, -0.170467f);
    run_test(55.0f, 55.0f, 6.0f, -0.87538f, 0.12462f);
    run_test(-5.0f, 7.0f, 0.0f, 0.0f, 1.4f);
    run_test(5.0f, 7.0f, 0.0f, -1.4f, 0.0f);
    run_test(1.0f, 22.67f, -3.4009765f, -22.819f, 0.149041f);

}

void run_test(double a, double b, double c, double expected_1, double expected_2)
{
    double aerr = 0.0000005f;
    double *sols = citardarqFormula(a, b, c);

    if( (_assert_feqaerr(sols[0], expected_1, aerr) && _assert_feqaerr(sols[1], expected_2, aerr) ) || \
        (_assert_feqaerr(sols[0], expected_2, aerr) && _assert_feqaerr(sols[1], expected_1, aerr)) )
    {
        fprintf(cunit_log, "%s  LINE %d: %s, %f & %f !== %f & %f\n", \
            __FILE__ , __LINE__ , "qsolve", sols[0], sols[1], expected_1, expected_2); \
    }

}

bool _assert_feqaerr(double a, double b, double aerr)
{
    if( fabs(a - b) > aerr )
    {
        if(isnan(a) && isnan(b))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
