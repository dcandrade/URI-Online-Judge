#include<stdio.h>
 
int main() {
	char n[100];
	double s, v, total;
	
	scanf("%s", n);
	scanf("%lf", &s);
	scanf("%lf", &v);

	total = s+v*0.15;
	printf("TOTAL = R$ %.2f\n", total); 	
    return 0;
}
