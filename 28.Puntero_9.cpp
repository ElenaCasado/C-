//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
         l=15;//l=medida(aux);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
