#include <stdio.h>

int main(){
	int c, a[10]={0};

	while( (c=getchar())!=EOF )
		if( c>=48 && c<=57 )
			a[c-48]++;
	
	for( int i=0; i<10; i++)
		printf("In the line there are %d %d\n",a[i], i);
	




}
