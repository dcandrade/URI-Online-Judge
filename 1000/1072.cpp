#include<iostream>

using namespace std;

int main(){
	int q, y=0;

	cin>> q;

	for(int i=0; i<q; i++){
		int n;
		cin>>n;
		if(n>=10 && n<=20) y++; 
	}

	cout<<y<<" in"<<endl<<q-y<<" out"<<endl;

	return 0;
}
