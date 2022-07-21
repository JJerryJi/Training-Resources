#include <stdio.h>

void squeeze(char s[], char t[]);

void main(){
        char s[]={ "abcefg"};
	char t[]={ "cdf"};
	squeeze(s,t);
	printf("%s",s);
}

void squeeze(char s[],char t[]){
        int i, j;
        i = j = 0;
        while (s[i]!='\0'){
		while(t[j]!='\0'){
                	if(s[i] == t[j]){
                       		s[i]=s[i+1];
                                i--;
                        }
                j++;
                }
	j=0;
        i++;
        }
}

