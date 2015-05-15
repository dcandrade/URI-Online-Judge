#include<iostream>
#include<cmath>
#include<algorithm>
#define SIZE 3

using namespace std;

int main(){
	float a[SIZE];

	for(int i=0; i<SIZE; i++)
		cin >> a[i];
	
	sort(a, a+SIZE);
	
	if(a[2]>=a[0]+a[1])
		cout<< "NAO FORMA TRIANGULO"<<endl;
	else{	
		if(pow(a[2],2) ==pow(a[1],2)+pow(a[0], 2))
			cout<< "TRIANGULO RETANGULO"<<endl;	
		
		if(pow(a[2],2) > pow(a[1],2)+pow(a[0], 2))
			cout << "TRIANGULO OBTUSANGULO"<<endl;
	
		if(pow(a[2],2) < pow(a[1],2)+pow(a[0], 2))
			cout << "TRIANGULO ACUTANGULO"<<endl;
	
		if(a[2]==a[1] && a[1]==a[0])
			cout << "TRIANGULO EQUILATERO"<<endl;
		else if(a[2]==a[1] || a[1]==a[0] || a[0]==a[2])
			cout<<"TRIANGULO ISOSCELES"<<endl;
	}
	return 0;
}
