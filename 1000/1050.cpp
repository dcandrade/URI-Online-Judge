#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	int o;
	string x;
	map<int, string>  m;
	
	m[61]="Brasilia";
	m[71]="Salvador";
	m[11]="Sao Paulo";
	m[21]="Rio de Janeiro";
	m[32]="Juiz de Fora";
	m[19]="Campinas";
	m[27]="Vitoria";
	m[31]="Belo Horizonte";

	cin >>o;
	
	if(m[o].length()>0)
		cout<<m[o]<<endl;
	else
		cout<<"DDD nao cadastrado"<<endl;
	
	
	return 0;
}
