#include<iostream>
#include<string>

using namespace std;

int main(){
	int x;
	string  s ="";

	cin>>x;

	for(int i=0; i<x; i++){
		int r;
		cin>>r;
		
		if(r==0) s+="NULL\n";
		else if(r%2==0) s+="EVEN ";
		else s+="ODD ";

		if(r>0) s+="POSITIVE\n";
		else if(r<0) s+="NEGATIVE\n";
	}

	cout<<s;

	return 0;
}
