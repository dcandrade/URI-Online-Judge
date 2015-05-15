#include<iostream>
#include<algorithm>

#define SIZE 3

using namespace std;

int main(){
	int v[SIZE], o[SIZE];
	
	for(int i=0; i<SIZE;i++){
		cin >> v[i];
		o[i]=v[i];
	}
	sort(v, v+SIZE);
	
	for(int i=0; i<SIZE; i++)
		cout <<v[i]<<endl;
	
	cout<<endl;
		
	for(int i=0; i<SIZE; i++)
		cout <<o[i]<<endl;
	

	return 0;	
}
