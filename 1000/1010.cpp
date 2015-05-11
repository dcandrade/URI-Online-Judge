#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int cod, qtd;
	double v, total;
	
	scanf("%d %d %lf", &cod, &qtd, &v);
	
	total = qtd*v;

	scanf("%d %d %lf", &cod, &qtd, &v);

	total = total+qtd*v;

	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}
