#include<iostream>
using namespace std;
void grupos1(int A[],int n,int m,int l){
    int cantidad=(l+m)/n;
    cout<<"Entonces podriamos formar grupos:"<<endl;
    cout<<"[";
    int cont3=0,cont4=0;
    for(int i=0;i<cantidad;i++){
        cout<<A[i]<<",";
        cont4=cont4+A[i];
        
    }
    cout<<"] ,[";
    for(int i=cantidad;i<l;i++){
        cout<<A[i]<<",";
        cont3=cont3+A[i];
        
    }
    int mayor1,mayor2;
    if(cont3<cont4){
         mayor1=cont4;
         
    }else{
        mayor1=cont3;
    }
    cout<<"]"<<endl;
    cout<<endl<<"hay un repartidor que viaja "<<cont3<<" km.";

    cout<<endl<<"[";
    int cont1=0,cont2=0;
    for(int i=0;i<cantidad+1;i++){
        cout<<A[i]<<",";
        cont1=cont1+A[i];
        
    }
    cout<<"] ,[";
    for(int i=cantidad+1;i<l;i++){
        cout<<A[i]<<",";
        cont2=cont2+A[i];

        
    }
    if(cont1<cont2){
        int mayor2=cont2;
        
        }else{
        mayor2=cont1;
    }
    
    cout<<"]";
    cout<<endl<<"hay un repartidor que viaja "<<cont2<<" km.";
    if(mayor1<mayor2){
        cout<<endl;
    }

}
int main(){
    int n=2,l,m=0;
    int A[]={7,2,5,10,8};
    l=sizeof(A)/sizeof(A[0]);
    grupos1(A,n,m,l);
    return 0;
}