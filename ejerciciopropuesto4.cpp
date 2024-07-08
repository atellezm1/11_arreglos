//Allexamnder Téllez Mesa
#include<iostream>
using namespace std;
int multi(int x, int y);
int main(){
    int A[10],a,b;
    cout<<"introdusca la cantidad de terminos de la lista a crear: "<<endl;
    cin>>a;
    cout<<"introdusca un numero: "<<endl;
    cin>>b;
    for(int i =1 ;i<=a; i++){
    	A[i]= i*b;
	}
	cout<<"la lista contiene: "<<endl;
	for(int j=1; j<=a;j++){
		cout<<A[j];
		if(j!=a){
			cout<<",";
		}
	}
    return 0;
}

int multi(int x, int y){
	int s;
	s=x*y;
	return s;
}