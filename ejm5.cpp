#include <iostream>
#include <cstring> //strcmp(cad1,cad2);
using namespace std;

int mistrncmp(char* a,char* b,int len){
    int i=0;
      while( *a != '\0' && *b!='\0' && i<len ){
       if(*a != *b){
        return *a - *b;
        } 
        a++;
        b++; 
        i++;
    }  
    if(i==len)
    return 0;
    
    return *a - *b;
}

int numeroOcurr(char* a, char* b){
    int ocurrencias=0;
    int longitudTexto = strlen(a);
    int longitudpalabra = strlen(b);
    
    for (int i = 0; i <= longitudTexto - longitudpalabra; ++i) {
        if (mistrncmp(a + i, b,longitudpalabra) == 0) {
            ocurrencias++;
        }
    }

    return ocurrencias;
}

int main(){
	
	char c1[] = "hola que tal hola que hola";
	char c2[] = "hola";
	
	cout << numeroOcurr(c1,c2) <<endl;
	
	return 0;
}