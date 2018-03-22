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
