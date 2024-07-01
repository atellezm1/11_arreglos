//Allexamnder Téllez Mesa
#include<iostream>
using namespace std;
int main(){
    int A[10],n,s,u;
    float por;
    cout<<"numero de arreglos: "<<endl;
    cin>>n;
    s=0;
    u=0;
    for(int i=1;i<=n;i++){
        cout<<"introdusca el valor numero "<<i<<" de la lista: "<<endl;
        cin>>A[i];
        s=s+A[i];
        if(A[i]==0){
            u=u+1;
        }
    }
    por=(u*100)/n;
    cout<<"Las sumatoria de valores es: "<<s<<endl;
    cout<<"el porcentaje de ceros ingresados es: "<<por<<"%";

    return 0;
}