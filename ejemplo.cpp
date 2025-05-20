#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void leerescribir(istream& inicio,ostream& fin){
    string palabra;
    fin<< "digite:";
    
    getline(inicio,palabra);
    fin<< palabra;
}

void conMayus(string& plb){
    for(int i=0;i<10;i++){
        plb[i] = toupper(plb[i]);
    }
    cout<< plb<<endl;
}

int main(){
    string palab = "hola world";
    
    conMayus(palab);
    cout<< palab;
    leerescribir(cin,cout);
    return 0;
}