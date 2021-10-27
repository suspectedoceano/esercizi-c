#include <stdio.h>

int main(){
	int counter=0;

	while( getchar()!=EOF )
		counter++;
	
	printf("The number of chars are %d\n", counter);


}
