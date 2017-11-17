#include<iostream>
int main(){
    /*Esto es lo que un comentario
    que ocupa más de una linea del p*/
    //Esto es un comentario en una linea
    /*Definicion de variables*/
    int a;
    int b;
    int c;
    int solucion,salir;
    a=2;
    b=4;
    c=-1;
    solucion=a+b+c;
    std::cout<<"La solucion es; "<<solucion << std::endl;
    std::cout<<"Para seguir, toca cualquier tecla";
    std::cin>> salir;
    return 0;
}
