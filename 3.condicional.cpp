#include<iostream>

int main() {
    /*Este programa sirve para leer tres numeros enteros y devolver el numero mayor.*/
    int n1,n2,n3,mayor,salir;
    std::cout<<"Escribe el primer numero; ";
    std::cin>>n1;
    std::cout<<"Escribe el segundo numero; ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer numero; ";
    std::cin>>n3;
    if(n1>n2){
       if(n1>n3){
       mayor=n1;   
       }else{
          mayor=n3; 
       }
    }
    else{
      if(n2>n3){
         mayor=n3;   
    }
   } 
   std::cout<<"El mayor es"<<mayor;
   std::cout<<"Toca cualquier tecla; ";
   std::cin>>salir;
   return 0;
   
   
}    
