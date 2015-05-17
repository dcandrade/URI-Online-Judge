#include<iostream>

using namespace std;

int main(){
	int j[]={7,6,5}, i=1;

	for(int k=0; k<15; k++){
		if(k!=0 && k%3==0) i+=2;
		cout<<"I="<<i<<" J="<<j[k%3]<<endl;		
	}

	return 0;
}
