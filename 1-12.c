#include <stdio.h>

int main(){
	int c;

	while( (c=getchar())!=EOF ){
		//Se trovo uno spazio, un tab o una nuova linea
		//butto nel buffer output un \n
		if(c==' '||c=='\t'||c=='\n')
			putchar('\n');
		//Altrimentri ci butto il carattere	
		else
			putchar(c);

	}
	




}
