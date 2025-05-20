#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void ordenamineto(char* num){
    int len;
    len=0;
    len = strlen(num);
    for(int i=0; i<len ;i++){
        for(int j=0; j<len ;j++){
            if(*(num + i)>*(num + j))
            swap(*(num + i),*(num + j));
        }
    }
}

int main(){
    char numero[30];
    cout<<"Digite un numero:";cin>>numero;

    ordenamineto(numero);
    cout<< numero;
	//
	double mayorNumero = atof(numero);
    double raiz = sqrt(mayorNumero);
	
    cout << "El mayor numero que se puede formar con los digitos es: " << mayorNumero << endl;
    cout << "Y su raiz cuadrada es: " << raiz << endl;

	
	return 0;
}