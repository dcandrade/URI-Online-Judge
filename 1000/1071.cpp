#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int x[2], sum=0;

	cin>>x[0];
	cin>>x[1];

	sort(x, x+2);

	//Applying a correction factor to the first number.
	if(x[0]%2==0) x[0]++;
	else x[0]+=2;

	for(int y=x[0]; y<x[1]; y+=2)
		sum+=y;

	cout<<sum<<endl;


	return 0;
}
