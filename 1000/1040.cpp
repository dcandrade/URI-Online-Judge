#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, media;
	
	cin >>a>>b>>c>>d;
	
	media = a*2+b*3+c*4+d;
	media/=10;
	
	cout.precision(1);
	cout<<fixed<< "Media: " <<media<<endl;
	if(media>=7)
		cout << "Aluno aprovado."<<endl;
	else if(media <5)
		cout << "Aluno reprovado."<<endl;
	else{	
		cout << "Aluno em exame." <<endl;
		cin >>a;
		cout <<fixed << "Nota do exame: "<< a <<endl;
		media+=a;
		media/=2;
		if(media>=5)
			cout << "Aluno aprovado."<<endl;
		else
			cout << "Aluno reprovado."<<endl;
		cout << fixed << "Media final: " <<media<<endl;	
		
	} 
	


}
