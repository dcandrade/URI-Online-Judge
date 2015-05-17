#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int x;
	float  t=0;
	map<string, int> q;
	cin >>x;

	for(int i=0; i<x; i++){
		int a; string b;
		cin>>a>>b;
		q[b]+=a;
		t+=a;
	}
	
	cout<<"Total: "<<t<<" cobaias"<<endl;

	cout<<"Total de coelhos: "<<q["C"]<<endl;
	cout<<"Total de ratos: "<<q["R"]<<endl;
	cout<<"Total de sapos: "<<q["S"]<<endl;
	cout.precision(2);
	cout<<fixed;
	cout<<"Percentual de coelhos: "<<(q["C"]/ t)*100<<" %"<<endl;
	cout<<"Percentual de ratos: "<<(q["R"]/t)*100<<" %"<<endl;
	cout<<"Percentual de sapos: "<<(q["S"]/t)*100<<" %"<<endl;

	return 0;
}
