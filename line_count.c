#include <stdio.h>

int main(){
	int c,stringhe=0;
	
	while( (c=getchar())!=EOF )
		if( c=='\n')
			stringhe++;

	printf("The number of lines is %d\n", stringhe);


}
