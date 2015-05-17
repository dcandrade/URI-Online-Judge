#include<iostream>

using namespace std;

int main(){
	int x;
	float y, m=0;

	cin>>x;

	cout.precision(1);

	for(int i=0; i<x; i++){
		m=0;
		cin>>y;
		m+=y*2;
		cin>>y;
		m+=y*3;
		cin>>y;
		m+=y*5;
		m/=10;

		cout<<fixed<<m<<endl;
	}

	return 0;
}
