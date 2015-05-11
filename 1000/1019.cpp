#include<stdio.h>


int main(){
	int s, h, m;

	scanf("%d", &s);

	h=s-s%3600;
	s = s-h;
	h=h/3600;
	
	m=s-s%60;
	s = s-m;
	m=m/60;

	printf("%d:%d:%d\n",h,m,s);

	return 0;
}
