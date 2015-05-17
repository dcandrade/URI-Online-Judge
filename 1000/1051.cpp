#include<iostream>

using namespace std;

int main(){
	float s,t=0;

	cin>> s;
	cout.precision(2);
	if(s>4500){
		t=(s-4500)*0.28;
		t+=350;
	}else if(s>3000){
		t=(s-3000)*0.18;
		t+=80;
	}else if(s>2000)
		t=(s-2000)*0.08;
	else
		t=0;

	if(t!=0)	
		cout<<fixed<<"R$ "<<t<<endl;
	else
		cout<< "Isento"<<endl;
	return 0;
}
