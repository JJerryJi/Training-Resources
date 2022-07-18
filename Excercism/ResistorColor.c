#include <stdio.h>
#include<stdbool.h>

bool resistorColor(char s[]){
    if (s == "Black"){
        return true;
    }
}

void main(){
    printf("%s", resistorColor("Black")? "true": "false");
}
