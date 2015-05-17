#include<iostream>

using namespace std;

int main(){
	int x;
	
	cin>>x;
	if(x%2==0) x--;

	for(int i=0; i<6; i++){
		cout<<x+(2*(i+1))<<endl;
	}

	return 0;
}
