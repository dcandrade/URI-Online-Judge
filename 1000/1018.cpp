#include<stdio.h>

int main(){
	int x, y;
	
	scanf("%d", &x);
	printf("%d\n", x);	

	y=x%100;
	printf("%d nota(s) de R$ 100,00\n", (x-y)/100);
	x=y;

	y=x%50;
	printf("%d nota(s) de R$ 50,00\n", (x-y)/50);
	x=y;
	
	y=x%20;
	printf("%d nota(s) de R$ 20,00\n", (x-y)/20);
	x=y;
	
	y=x%10;
	printf("%d nota(s) de R$ 10,00\n", (x-y)/10);
	x=y;

	y=x%5;
	printf("%d nota(s) de R$ 5,00\n", (x-y)/5);
	x=y;
	
	y=x%2;
	printf("%d nota(s) de R$ 2,00\n", (x-y)/2);
	x=y;

	y=x%1;
	printf("%d nota(s) de R$ 1,00\n", (x-y));
	x=y;
	
	return 0;
}
