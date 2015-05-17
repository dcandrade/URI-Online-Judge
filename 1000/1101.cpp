#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int x[2];
	
	while(cin>>x[0]>>x[1]){
		if(x[0]<=0 || x[1]<=0)
			break;
	
		sort(x, x+2);
	
		int sum=0;
		for(int i=x[0]; i<=x[1]; i++){
			cout<<i<<" ";
			sum+=i;
		}
		cout<<"Sum="<<sum<<endl;

	}

}
