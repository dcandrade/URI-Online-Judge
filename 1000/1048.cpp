#include<iostream>


using namespace std;

int main(){
	float s, a;

	cin >>s;

	if(s>2000)
		a=0.04;
	else if(s>1200)
		a=0.07;
	else if(s>800)
		a=0.1;
	else if(s>400)
		a=0.12;
	else
		a=0.15;

	cout.precision(2);
	cout<<fixed;
	cout<<"Novo salario: "<<s+s*a<<endl<<"Reajuste ganho: "<<s*a<<endl;
	cout.precision(0);
	cout<<"Em percentual: "<<a*100.0<<" %"<<endl;
	return 0;
}
