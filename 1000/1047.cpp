#include<iostream>

using namespace std;
//CONVERTER PRA MIN
int main(){
	int b, bm, e, em;
		
	cin >>b>>bm>>e>>em;

	b*=60;
	e*=60;

	if(bm>=em)
		em+=1440;//a day in min

	bm+=b;
	em+=e;
	 
	
	cout << "O JOGO DUROU "<<(em-bm)/60<<" HORA(S) E "<<(em-bm)%60<<" MINUTO(S)"<<endl;

	return 0;
}
