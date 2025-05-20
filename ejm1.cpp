#include <iostream>
using namespace std;

void inserccion(int arr[]){
    for(int i=0;i<5;i++){
        int temp = arr[i];
        int j = i - 1;

        while((j>=0) && (arr[j]> temp)){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]=temp;
    }
}

void imprimirisr(int arr[]){
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
}

int main(){
    int arreglo[]={2,1,5,3,4};

    inserccion(arreglo);
    cout<<":::";
    imprimirisr(arreglo);

    return 0;
}