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
    int cont;
    int salir;
    //Declaro una variable de tipo persona
    persona amigo[3];
    for(cont=0;cont<3;cont++){
       cout<<"DATOS AMIGO; "<<cont<<endl;
       cout<<"Como de llama tu amigo; ";
       cin>>amigo[cont].nombre;
       cout<<"Cuantos años tienes; ";
       cin>>amigo[cont].edad;
       cout<<"De que color tiene el pelo; ";
       cin>>amigo[cont].colorPelo;            
    }
    
    for(cont=0;cont<3;cont++){
       cout<<amigo[cont].nombre<<endl;
       cout<<amigo[cont].edad<<endl;
       cout<<amigo[cont].colorPelo<<endl;   
    }
    
    cin>>salir;
}
