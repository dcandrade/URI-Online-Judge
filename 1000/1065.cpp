#include<iostream>

using namespace std;

int main(){
	int x, y=0;

	for(int i=0; i<5; i++){
		cin>>x;
		if(x%2==0) y++;
	}
	
	cout<< y<< " valores pares"<<endl;
	return 0;
}
