#include<iostream>
#include<string>

using namespace std;

int main(){
	string c1, c2, c3;
	
	cin >>c1>>c2>>c3;

	if(c1=="vertebrado"){
		if(c2=="ave"){
			if(c3=="carnivoro")
				cout<<"aguia";
			else
				cout<<"pomba";
		}else{
			if(c3=="onivoro")
				cout<<"homem";
			else
				cout<<"vaca";
		}
	}else{
		if(c2=="inseto"){
			if(c3=="hematofago")
				cout<<"pulga";
			else
				cout<<"lagarta";
		}else{
			if(c3=="hematofago")
				cout<<"sanguessuga";
			else
				cout<<"minhoca";
		}
	}

	cout<<endl;

	return 0;
}

