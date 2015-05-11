#include<stdio.h>


int main(){
	int s, h, m;

	scanf("%d", &s);

	h=s-s%365;
	s = s-h;
	h=h/365;
	
	m=s-s%30;
	s = s-m;
	m=m/30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);

	return 0;
}
