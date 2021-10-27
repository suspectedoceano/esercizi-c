#include <stdio.h>

int main(){
	int c, sc=0;
	
	while( (c=getchar())!=EOF ){
		//Scrivi sempre quelle cazzo di graffe nei condizionali 
		if( c!=' '){
			putchar(c);
			sc=0;
		}
		if ( c==' ')
			sc++;
		if( c==' ' && sc<2)
			putchar(c);
	}
		
}
