#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(){
	double a,b,c, delta, r1, r2;
	
	cin >>a>>b>>c;

	delta = (b*b)-(4*a*c);

	if(a == 0 || delta < 0){
		cout <<"Impossivel calcular"<<endl;
		return 0;
	}

	r1 = (-b+sqrt(delta))/(2*a)
	r2 = (-b-sqrt(delta))/(2*a)
	printf("R2 = %.5f\n", r1);
	printf("R2 = %.5f\n", r2);

	return 0;
}
 