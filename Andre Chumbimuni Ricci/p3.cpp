#include<iostream>
using namespace std;
void QuickSort(int vect[],int n){
    if(i<n)
    int indexi=particionar(vect,n);
    QuickSort(vect,indexi);
    QuickSort(vect,indexi+1);
}

int particionar(int vect[],int n){
    int m=vect[i];
    int p=i;
    for(int i=0;i<n;i++){
        if(vect[i]<m){
            swap(m,vect[i]);
            if(vect[i]<vect[p]){
                swap(p,i);
            }
        }
    }


}
void Merge(int vec1[],int n,int vec2[], int m,int resultado[], &tam_resultado);
void PrintArray(int vect[], int n){
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
};
int main(){
    int vec1[] = {7, 2, 5, 10};
    int vec2[] = {5, 2, 18, 1, 0, 14, 7, 3, 6};
    
    QuickSort(vec1, 4);
    QuickSort(vec2, 9);

    int resultado[13], tam_resultado;
    Merge(vec1, 4, vec2, 9, resultado, &tam_resultado);
    PrintArray(vec1, 4);
    PrintArray(vec2, 9);

    cout << "Resultado: ";
    PrintArray(resultado, tam_resultado);
    return 0;
}