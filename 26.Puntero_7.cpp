//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
int main(){
    int salir;
    char *lista[3]; //El * es para iniciar que va a haber tres punteros a tres letras, las inciales de cada palabra.
    lista[0]=(char*) malloc(8*sizeof(char)); //estamos guardando la palabra Melchor (7letras) mas un cero tachado que seimpr se añade al final 
    lista[1]=(char*) malloc(7*sizeof(char)); //viene de la palabra memory allocation. Sirve para buscar en la memoria RAM un hueco de memoria de tamaño x
    lista[2]=(char*) malloc(9*sizeof(char));
    printf("\nPrimer rey mago; ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago; ");
    scanf("%s",lista[1]);
    printf("\nTercero rey mago; ");
    scanf("%s",lista[2]);
    printf("\nLOS TRES REYES MAGOS SON; ")
    printf("%s, ",lista[0]);
    printf("%s, ",lista[1]);
    printf("%s, ",lista[2]);
    printf("\nToca cualquier tecla; ");
    scanf("%i",&salir);
    
}
/*
-Usamos la posicion cero de la lista (Melchor)
-(char*) es un factor de */
