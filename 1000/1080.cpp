#include<iostream>

using namespace std;

int main(){
	int b=-1, p;

	for(int i=0;i<100;i++){
		int y;
		cin>>y;

		if(y>b){
			b=y;
			p=i+1;
		}
	}

	cout.precision(0);
	cout<<fixed<<b<<endl<<p<<endl;

	return 0;
}
