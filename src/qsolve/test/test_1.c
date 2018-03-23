/*
Copyright @ 2018 Western Michigan University

This file is part of Quadsolver.
Quadsolver is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define _GNU_SOURCE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "../citardarqFormula.h"

void run_test(double a, double b, double c, double exppected_1, double expected_2);
bool _assert_feqaerr(double a, double b, double aerr);

int main()
{
    double nan = 0.0/0.0;

    //test battery
    run_test(5.0f, 23.0f, -1.0f, -4.643074902772f, 0.043074902771996f);
    run_test(4.0f, 3.0, 5.0f, nan, nan);
    run_test(2.0f, -8.0f, 5.66678f, 0.91990278215338f, 3.0800972178466f);
    run_test(-50.3f, 0.1234567f, 77.0f, -1.2360345370734f, 1.2384889446281f);
    run_test(23.0f, 7.98f, 2.0f, nan, nan);
    run_test(2.45764f, 33.0f, 5.554f, -13.257048655441f, -0.17046717275185f);
    run_test(55.0f, 55.0f, 6.0f, -0.87537859676477f, -0.12462140323523f);
    run_test(-5.0f, 7.0f, 0.0f, 0.0f, 1.4f);
    run_test(5.0f, 7.0f, 0.0f, -1.4f, 0.0f);
    run_test(1.0f, 22.67f, -3.4009765f, -22.819041165896f, 0.14904116589626f);

}

void run_test(double a, double b, double c, double expected_1, double expected_2)
{
    double aerr = 0.0000005f;
    double *sols = citardarqFormula(a, b, c);

    if( (_assert_feqaerr(sols[0], expected_1, aerr) && _assert_feqaerr(sols[1], expected_2, aerr) ) || \
        (_assert_feqaerr(sols[0], expected_2, aerr) && _assert_feqaerr(sols[1], expected_1, aerr)) )
    {
    }
    else
    {
        fprintf(cunit_log, "%s  LINE %d: %s, %f & %f !== %f & %f\n", \
            __FILE__ , __LINE__ , "qsolve", sols[0], sols[1], expected_1, expected_2); \
    }

}

bool _assert_feqaerr(double a, double b, double aerr)
{
    if(isnan(a) != 0 && isnan(b) != 0)
    {
        return true;
    }
    else if( fabs(a - b) > aerr )
    {
        return false;
    }
    return true;
}
