# include <stdio.h>

int main(){
    int x=1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    printf("X is %d\n",x);
    printf("Y is %d",y);

}