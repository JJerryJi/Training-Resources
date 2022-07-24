/*Pointer Subtraction: 

    if P and Q point to elements of the same array, and p<q, then q-p+1 is the number of elements from p to q inclusive


*/
#include<stdio.h>
int strlen2(char *s){
    char *p = &s[0];

    while(*p != '\0'){
        p++;
    }

    return p -s ;
}

int main(){
    char s[]="peace and love";
    printf("%d",strlen2(&s));
}