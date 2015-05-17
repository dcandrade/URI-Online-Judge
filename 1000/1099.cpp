#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int x[2], sum=0, q;
	
	cin>>q;

	for(int i=0; i<q; i++){
		sum=0;
		cin >>x[0]>>x[1];
	
		sort(x, x+2);
	
		if(x[0]%2==0) x[0]++; // Now i'm sure that x[0] is odd
		else x[0]+=2; //..and doesn't include the initial x[0]

		for(int i=x[0]; i<x[1]; i+=2)
			sum+=i;

		cout<<sum<<endl;	
	}
	return 0;
}
