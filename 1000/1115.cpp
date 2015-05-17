#include<iostream>

using namespace std;

int main(){
	int x,y;

	while(cin>>x>>y){
		if(x==0 || y==0) break;
		
		if(x>0 && y>0) cout<<"primeiro";
		else if(x<0 && y>0) cout<<"segundo";
		else if(x<0 && y<0) cout<<"terceiro";
		else cout<<"quarto";
		
		cout<<endl;
	}

	return 0;
}
