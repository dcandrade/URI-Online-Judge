#include <stdio.h>
 
int main() {
 	int num, ht;
	float ph;
	
	scanf("%d", &num);
	scanf("%d", &ht);
	scanf("%f", &ph);


	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", ph*ht);
 
    return 0;
}
