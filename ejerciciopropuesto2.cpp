//Allexamnder Téllez Mesa
#include<iostream>
using namespace std;
int main(){
    int A[10],B[10],C[10],j,k,n;
    cout<<"numero de arreglos: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"introdusca el valor numero "<<i<<" de la lista: "<<endl;
        cin>>A[i];
        if(A[i]==0){
            C[j]=A[i];
            j=j+1;
        }
        else{
            B[k]=A[i];
            k=k+1;
        }
    }
    return 0;
}