#include <iostream>
#include <cstring>
using namespace std;

int compararCade(char* a,char* b){
    while( *a != '\0' && *b!='\0'){
       if(*a != *b){
        return *a - *b;
        } 
        a++;
        b++; 
    }
    return *a - *b;
}
int compararSub(char* a,char* b,int len){
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
int escogerPala(char*a , char* b){
    int longtexto = strlen(a);
    int longpalabra = strlen(b);
    int ocurrencias=0;
    for(int i=0; i<=longtexto - longpalabra;i++){
        if(compararSub(a + i,b,longpalabra)==0){
            ocurrencias++;
        }
    }
    return ocurrencias;
}


int main(){
    char A[]= "holb";
    char B[]= "holf";  
    char C1[]="buenas tardes y tardes";
    char C2[]="tardes"; 
    int len;

   // cout<<"R:"<<compararCade(A,B);
    //cout<<"Digite longitud:";cin>>len;
    //cout<< "R:"<<compararSub(A,B,len);
    cout<<escogerPala(C1,C2);
    return 0;
}