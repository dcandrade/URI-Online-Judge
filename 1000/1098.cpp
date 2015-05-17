#include<iostream>

using namespace std;

int main(){
	int j[]={1,2,3};
	float i=0, c=0;

	for(int k=0; k<33; k++){
		if(k!=0 && k%3==0){ i+=0.2; c+=0.2; }
		cout<<"I="<<i<<" J="<<j[k%3]+c<<endl;	
	}

	return 0;
}
