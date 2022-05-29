#include <stdio.h>

float main(){
	int fahr = 300;  
	for (fahr=300; fahr>=0;fahr-=15){
		printf("%6d%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
}
}
