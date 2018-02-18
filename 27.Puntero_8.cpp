#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;    
    }
    return l;
}
int main(){
    int salir;
    char aux[15];
    int cont,l;
    char *lista[5];
    for(cont=0;cont<5;cont++){
        printf("\nNombre amigo %i; ",cont);
        scanf("%s",aux);
        l=medida(aux);
        lista[cont]=(char*)malloc(l*sizeof(char));
    }
    
    //El * es para iniciar que va a haber tres punteros a tres letras, las inciales de cada palabra.
    lista[0]=(char*) malloc(8*sizeof(char)); //estamos guardando la palabra Melchor (7letras) mas un cero tachado que seimpr se añade al final 
    lista[1]=(char*) malloc(7*sizeof(char)); //viene de la palabra memory allocation. Sirve para buscar en la memoria RAM un hueco de memoria de tamaño x
    lista[2]=(char*) malloc(9*sizeof(char));
    printf("\nPrimer rey mago; ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago; ");
    scanf("%s",lista[1]);
    printf("\nTercero rey mago; ");
    scanf("%s",lista[2]);
    printf("\nLOS TRES REYES MAGOS SON; ");
    printf("%s, ",lista[0]);
    printf("%s, ",lista[1]);
    printf("%s, ",lista[2]);
    printf("\nToca cualquier tecla; ");
    scanf("%i",&salir);
}
