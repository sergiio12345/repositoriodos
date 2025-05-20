#include <iostream>
using namespace std;

int particion(int array[], int inicio, int fin) {
    int pivote = array[inicio];
    int i = inicio + 1;
    for (int j = i; j <= fin; j++) {
        if (array[j] < pivote) {
            swap(array[i], array[j]);
            i++;
        }
    }
    swap(array[inicio], array[i - 1]);
    return i - 1;
}

void quickSort(int array[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particion(array, inicio, fin);
        quickSort(array, inicio, pivote - 1);
        quickSort(array, pivote + 1, fin);
    }
}

void imprimirArreglo(int array[], int tamano) {
    for (int i = 0; i < tamano; i++) {
    cout << array[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int arreglo[] = {12, 7, 9, 3, 15, 6};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Arreglo original: ";
    imprimirArreglo(arreglo, tamano);

    quickSort(arreglo, 0, tamano );
     //int ind = particion(arr, 0,7); ind pivot
    cout << "Arreglo ordenado: ";
    imprimirArreglo(arreglo, tamano);

    return 0;
}
