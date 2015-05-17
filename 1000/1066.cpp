#include<iostream>

using namespace std;

int main(){
	int x, p=0, pos=0, neg=0;

	for(int i=0; i<5; i++){
		cin>>x;
		if(x%2==0) p++;
		if(x>0) pos++;
		if(x<0) neg++;
	}
	
	cout<< p<< " valor(es) par(es)"<<endl<<5-p<<" valor(es) impar(es)"<<endl<<pos<<" valor(es) positivo(s)"<<endl<<neg<<" valor(es) negativo(s)"<<endl;

	return 0;
}
