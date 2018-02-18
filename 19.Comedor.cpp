#include<iostream>

using namespace std;
int main(){
//Declaro un nuevo tipo de dato
    struct menu{
       string plato1;
       string plato2;
       string postre;
       int calorias;
    };
    int cont;
    int salir;
    //Declaro una variable de tipo persona
    menu comedor[5];
    for(cont=0;cont<4;cont++){
       cout<<"DATOS MENU; "<<cont<<endl;
       cout<<"Primer plato; ";
       cin>>comedor[cont].plato1;
       cout<<"Segundo plato; ";
       cin>>comedor[cont].plato2;
       cout<<"Postre; ";
       cin>>comedor[cont].postre; 
       cout<<"Calorías; ";
       cin>>comedor[cont].calorias;  
       } 
     for(cont=0;cont<4;cont++){
       cout<<"El nombre del primer plato" <<cont<<" es; "<<comedor[cont].plato1<<endl;
       cout<<"El nombre del segundo plato" <<cont<<" es; "<<comedor[cont].plato2<<endl;
       cout<<"El nombre del postre" <<cont<<" es; "<<comedor[cont].postre<<endl;
       cout<<"El número de calorías" <<cont<<" es; "<<comedor[cont].calorias<<endl;    
       }  
     int suma_calorias=0;
     for(cont=0;cont<4;cont++){
        suma_calorias=suma_calorias + comedor[cont].calorias;
        }
     cin>>salir;
     return 0; 
}
