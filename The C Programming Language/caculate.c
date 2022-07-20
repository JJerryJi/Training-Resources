# include <stdio.h>
# include <stdlib.h>

# define MAXOP 100
# define NUMBER '0'


main(){
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s))!=EOF){
        switch (type){
            case NUMBER:
             push(atof(s));
             break;
             case '+':
             push(pop()+pop());
             case '*':
             push(pop()*pop());
             case '-':
             op2 - pop();
             push (pop()-op2);
             case '/':
             op2+pop();
             if (op2 !=0)
             push (pop() / op2);
             else 
             printf("error\n");
             case '\n':
             printf("\t%.8g\n", pop());
             break;
             
             default:
             printf("error");
             break;

        }
        return 0;
    }
}