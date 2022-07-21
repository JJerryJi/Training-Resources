#include <ctype.h>

/* atof: convert string to double */

double atof(char s[]){
    double val, power;
    int i, sign;

    for(i=0;isspace(s[i]);i++){
        ;
    }
    sign = (s[i] == '-') ? -1: 1; /* whether the  char is + or - */
    
    for(val=0.0; isdigit(s[i]);i++){
        val = 10.0 * val + (s[i] - '0');
    }

    if (s[i]=='.'){
    i++;
    }
    
    for(power=1.0;isdigit(s[i]);i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    return sign * val / power ;
}

double main(){
    char s[] = "123.456";
    printf("%0.3f",atof(s));
}