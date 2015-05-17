#include<iostream>

using namespace std;

int main(){
	int x, y, q;
	
	cin>>q;
	
	cout.precision(1);
	for(int i=0; i<q; i++){
		cin>>x>>y;
		
		if(y!=0)
			cout<<fixed<<(float)x/y<<endl;
		else
			cout<<"divisao impossivel"<<endl;
			
	
	}

	return 0;
}
