#include<iostream>
#include<string>
using namespace std;

int main(){
	string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int m;

	cin >>m;
	
	cout<<months[m-1]<<endl;

	return 0;
}
