//Este programa trata sobre estructuras
#include<iostream>

using namespace std; 
//Ficheros lee completo con comprobador
int main(){
    //Declaro un nuevo tipo de dato
    struct persona{
       string nombre;
       int edad;
       char colorPelo;
    };
    //Declaro una variable de tipo persona
    persona amigo1,amigo2,amigo3;
    cout<<"Como de llama tu amigo; ";
    cin>>amigo1.nombre;
    cout<<"Cuantos años tienes; ";
    cin>>amigo1.edad;
    cout<<"De que color tiene el pelo; ";
    cin>>amigo1.colorPelo;
}
