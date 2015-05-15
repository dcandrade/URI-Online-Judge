#include<iostream>

using namespace std;

int main(){
	int b,e;
		
	cin >>b>>e;

	if(e>b)
		e=e-b;
	else
		e=24-b+e;

	cout << "O JOGO DUROU "<<e<<" HORA(S)"<<endl;

	return 0;
}
