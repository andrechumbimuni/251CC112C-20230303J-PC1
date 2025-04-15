#include<iostream>
using namespace std;

int main(){
    int temp,primer=0,n;
    int cont=0;
    int A[]={4,5,5,8,4,2,2};
    n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i]==A[j]){
                cont++;
            }
        }
        temp=A[i];
        if(cont==1){
            primer=temp;
            

        }else{
            primer=-1;
        }
        cont=0;
    }
    cout<<"Explicacion: "<<endl;
    for(int i=0;i<n;i++){
        int rep=0;
        
        for(int j=0;j<n;j++){
            if(A[i]==A[j]){
                cont++;
            }
        }
        if(A[i]!=0 && rep<=1){
            cout<<A[i]<<"-> se repite: "<<cont<<endl;
            rep++;

        }
        cont=0;
        rep=0;
    }
    cout<<"Respuesta: "<<primer;
    
    return 0;
}