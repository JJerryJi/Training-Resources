#include<stdio.h>

int strlen(char *s){
    int n;
    for(n=0;*s!=0;s++){
        n++;
    }
    return n;
}

int main(){
    char s[]="fuck dyy";
    printf("%d",strlen(&s));
}