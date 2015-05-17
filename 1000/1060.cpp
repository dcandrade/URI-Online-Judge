#include<iostream>

using namespace std;

int main(){
	int  n=0;
	float x;

	for(int i=0; i<6; i++){
		cin>>x;
		if(x>0) n++; 
	}

	cout<<n<<" valores positivos"<<endl;
}
