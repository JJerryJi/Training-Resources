#include <stdio.h>

float main(){
	double nc; 
	for(nc=0;getchar()!=EOF;++nc)
		;
	printf("%.0f\n",nc);
}
