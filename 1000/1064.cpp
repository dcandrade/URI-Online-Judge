#include<iostream>

using namespace std;

int main(){
	float x, m=0, n=0;

	for(int i=0; i<6; i++){
		cin>>x;
		if(x>0){
			n++;
			m+=x;
		}
	}
	cout.precision(1);
	cout<<n<<" valores positivos"<<endl<<fixed<<m/n<<endl;

	return 0;
}
