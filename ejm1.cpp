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

void merge(int arr1[], int n1, int arr2[], int n2, int arr[]){
    int i = 0, j = 0 , k = 0;

    while(i < n1 && j < n2){
         if(arr1[i] < arr2[j]){
             arr[k] = arr1[i];
             i++;
         }else{
             arr[k] = arr2[j];
             j++;
         }
         k++;
    }
    while(i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void imprimirArreglo(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int arreglo[]={2,1,5,3,4};

    inserccion(arreglo);
    cout<<":::";
    imprimirisr(arreglo);

    return 0;
}
