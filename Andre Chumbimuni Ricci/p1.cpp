#include<iostream>
#include<cmath>
using namespace std;
float funcion(int n,int i){
    int p;
    
    if(i%2==0){
        p=i/2;
        return i+(pow(-1,i)*p)/funcion(n,i+1);
    }else{
        n=i/2+1;
        return i+(pow(-1,i)*p)/funcion(n,i+1);

    }
    if(n){
        return i;
    }
}

int main(){
    int i=1,n;
    float x,resul;
    cout<<"Ingrese un valor entero n:";
    cin>>n;
    x=funcion(n,i);
    resul=1+(1/x);
    cout<<"El valor de x es: "<<resul;


    return 0;
}