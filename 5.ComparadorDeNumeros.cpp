/*Este programa sirve para leer por teclado 10 números enteros y devolver
el mayor*/
#include<iostream>

int main(){
    //Definicion de variables
    int cont;
    int numero;
    int mayor;
    int salir;
    
    //bucle de tipo for, cont=cont+1 es = que cont++
    //for(cont=10;cont>=0,cont--){
    mayor=0;
    for(cont=1;cont<=10;cont++){
          std::cout<<"Dime un numero entero; ";
          std::cin>>numero;
          if(numero>mayor){
            mayor=numero;
            }
    }
    std::cout<<"El mayor es; "<<mayor;
    std::cout<<"Toca cualquier tecla";
    std::cin>>salir;
    return 0;
          
}



