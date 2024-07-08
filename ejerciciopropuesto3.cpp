//Alexander Jesús Tellez Mesa
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    string Dia[8]={"NADA","LUNES","MARTES","MIERCOLES","JUEVES","VIERNES","SABADO","DOMINGO"};
    double Me,T,TMD,MI[8], MA[8];
    for(int i=1;i<=7;i++){
        cout<<"TEMPERATURA DEL DIA "<<Dia[i]<<": "<<endl;
        cout<<"LA TEMPERATURA MINIMA ES: "; cin>>MI[i];
        cout<<"LA TEMPERATURA MAXIMA ES: "; cin>>MA[i];
    system("cls");
    }

    for(int i=1;i<=7;i++){
        cout<<"Temperatura media del "<<Dia[i]<<" es: ";
        TMD=(MI[i]+MA[i])/2; cout<<TMD<<endl; 
    if(MI[i]<MI[i+1]){
        Me=MI[i];
    }
    }

    cout<<"La menor temperatura es: "<<Me<<endl;
    cout<<"Ingrese una temperatura: "; cin>>T;

    for(int i=1;i<=7;i++){  
        if(T==MA[i]){
        cout<<"La temperatura maxima "<<MA[i]<<" conincide con los dias: \n"; cout<<Dia[i]<<endl;  
        } else{
        cout<<"No hay ningun valor similar. "<<endl;
        }
    }
    return 0;
}