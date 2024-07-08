//Allexamnder Téllez Mesa
#include<iostream>
using namespace std;
int main(){
	string A[100],B[100],C[100];
	int cant1,cant2;
	int k=1,s=0;
	cout<<"La cantidad de estudiantes de el cuerso de fundamentos de la Programacion es: "<<endl;
	cin>>cant1;
	cout<<"La cantidad de estudiantes de el cuerso de Programacion Grafica es: "<<endl;
	cin>>cant2;
	
	for(int i=1;i<=cant1;i++){
		cout<<"el nombre de el esudiante "<<i<<" de fundamentos de la programacion es: "<<endl;
		cin>>A[i];
	}
	for(int i=1;i<=cant2;i++){
		cout<<"el nombre de el esudiante "<<i<<" de Programacion grafica es: "<<endl;
		cin>>B[i];
	}
	for(int j=1; j<=cant1; j++){
		for(int h=1; h<=cant2; h++){
			if(A[j]==B[h]){
				C[k]=A[j];
				k=k+1;
				s=s+1;
			}
		}
	}
	cout<<"la cantidad de nombres comunes es: "<<s<<endl;
	cout<<"Los nombres repetidos son: "<<endl;
	for(int i=1; i<=s;i++){
		cout<<C[i];
		if(i!=s){
			cout<<",";
		}
	}
	
    return 0;
}