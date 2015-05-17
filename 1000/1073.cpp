#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x;

	cin>>x;
	cout.precision(0);

	for(int i=2; i<=x; i+=2)
		cout<<fixed<<i<<"^2 = "<<pow(i, 2)<<endl;

	return 0;
}
