<<<<<<< HEAD
//
//  fOutput.h
//  QuadraticSolver
//
//  Created by Admin on 3/22/18.
//  Copyright © 2018 Admin. All rights reserved.
//

#ifndef fOutput_h
#define fOutput_h

#include <stdio.h>
void fOuput(double,double);
#endif /* fOutput_h */
=======
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
>>>>>>> 5cbc6b0e411c7402816f68d533a81f4e5642e8d7
