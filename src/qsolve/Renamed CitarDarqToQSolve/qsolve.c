/*
Copyright @ 2018 Western Michigan University

This file is part of Quadsolver.
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double * qsolve(double aVal,double bVal,double cVal,double *x1, double *x2)
{
    double sqrtVal = (sqrt((bVal*bVal)-(4*(aVal*cVal))));
    x1 = ((2*cVal)/((-bVal)+sqrtVal));
    x2 = ((2*cVal)/((-bVal)-sqrtVal));
    
}
