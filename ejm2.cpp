#include <iostream>
using namespace std;

void funcion1(int* arr,int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> *(arr + i*cols + j);
            
        }
    }
}

int sum2Darray(int* arr,int rows,int cols){
    int suma=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            suma += *(arr + i*cols + j);
        }
    }
    return suma;
}
double average2Darray(int* arr,int rows,int cols){
    double prom=0;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            prom += *(arr + i*cols + j);
        }
    }
    
    return (prom/(rows*cols));
}
int findMax(int* arr,int rows,int cols){
    int max = *arr; // asumimos que el primer valor es el máximo
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int valor = *(arr + i * cols + j);
            if (valor > max) {
                max = valor;
            }
        }
    }
    return max;
}

int main(){
    int max=100;
    int arreglo[max][max];
    int n;
    cout<<"Digite el oreden nxn:";cin>>n;

    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arreglo[i][j] <<" ";
        }
        cout<<endl;
    }*/
    funcion1((int*)arreglo,n,n);
    double m = average2Darray((int*)arreglo,n,n);

    cout << "La suma de los elementos de la matriz es: " << sum2Darray((int*)arreglo,n,n) << endl;
    cout<<"Promedio:"<< m<<endl;
    cout<< "Valor maximo:"<< findMax((int*)arreglo,n,n);
    return 0;

}