#include <stdio.h>
#define PI 3.14159

int main(){
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("TRIANGULO: %.3f\n", (a*c)/2);
	printf("CIRCULO: %.3f\n", PI*c*c);
	printf("TRAPEZIO: %.3f\n", (a+b)/2*c);
	printf("QUADRADO: %.3f\n", b*b);
	printf("RETANGULO: %.3f\n", a*b);
	


	return 0;
}
