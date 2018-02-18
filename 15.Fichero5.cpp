//Programa agenda
#include<iostream>
#include<fstream>
//float decimales
//char letras
//string una palabra
using namespace std;

int main(){
    char otro='s';
    string nombre;
    while(otro=='s'){
         cout<<"Nombre; ";
         cin>>nombre;
         cout<<"Deseas introducir otro amigo (s/n)?; ";
         cin>>otro;
    }
    return 0;
}
