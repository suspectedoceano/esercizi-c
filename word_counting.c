#include <stdio.h>

int main(){
	int c,nw=0;

	while( (c=getchar())!=EOF )
		if(c==' ' || c=='\n' || c=='\t')
			nw++;

	printf("%d\n",nw);
	


}
