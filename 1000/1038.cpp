#include<iostream> 
using namespace std;

int main(){
	int x;
	float y;

	cin >> x >>y;

	switch(x){
		case 1:
			y*=4.0;
			break;
		case 2:
			y*=4.5;
			break;
		case 3:
			y*=5.0;
			break;
		case 4:
			y*=2.0;
			break;
		case 5:
			y*=1.5;
			break;
	}
	cout.precision(2);
	cout << fixed<< "Total: R$ " << y <<endl;
}
