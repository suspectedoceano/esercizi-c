#include <stdio.h>
unsigned long long power(unsigned long long , unsigned long long );

int main(){
	unsigned long long	 a,b;

	printf("Just gimme 2 numbers, a base and a power\n");
	scanf("%lld",&a);
	scanf("%lld",&b);
	printf("The power is %lld\n", power(a,b));
}

unsigned long long power(unsigned long long a , unsigned long long b){
	unsigned long long p=1;

	for( ;b>0; b--)
		p*=a;

	return p;
}
