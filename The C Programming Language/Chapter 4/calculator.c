#include <stdio.h>
#include <stdlib.h> /* for atof() */

#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
void push(double);
double pop(void);

main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor \n");
            break;
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

#define MAXVAL = 100
int sp = 0;
double val[100];

void push(double f)
{
    if (sp < 100)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g \n", f);
}

double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
    {
        printf("error: stack empty \n");
        return 0.0;
    }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/*getop: get next character or numeric operand */

int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getchar() )== ' ' || c == '\t')
        ;

    s[1] = '\0';

    if (!isdigit(c) && c != '.')
        return c; /* not a number */
    i=0;

    if(isdigit(c)){ /* collect the integer part */
        while(isdigit(s[++i]=c=getch()));
    }

    if (c == '.') /* collect the fraction part */ 
    while(isdigit(s[++i]=c=getch()));

    s[i] = '\0';

    if (c!=EOF){
        ungetch(c);
        }
        return NUMBER;
    
}


# define BUFSIZE 100

char buf[BUFSIZ];
int bufp = 0; 


int getch(void){
    return (bufp > 0) ? buf[--bufp]:getchar();
}

void ungetch(int c){
    if(bufp>=BUFSIZ)
    printf("Ungetch: too many characters \n");
    else
    buf[bufp++] = c;
}