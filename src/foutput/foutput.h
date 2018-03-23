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

#ifndef foutput_h
    #define foutput_h
    char* foutput(double x1, double x2);
#endif /* foutput_h */


/*text to be displayed with results*/
#ifndef OUTPUT_PROMPT
    #define OUTPUT_PROMPT Factors:
#endif

/*used to turn macro into string*/
#ifndef _TEXTIFY
    #define _TEXTIFY(x) #x
#endif

#ifndef TEXTIFY
    #define TEXTIFY(x) _TEXTIFY(x)
#endif
