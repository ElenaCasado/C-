//Programas sobre manejo de memoria
//*palabra1 te muestra la inicila de la palabra que pongas.
//*(palabra1+1) te muestra la segunda letra de la palabra
#include<stdio.h>

int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo; ");
    scanf("%s",palabra1);
    printf("\nDime algo más; ");
    scanf("%s",palabra2);
    printf("direccion palabra1=%x",palabra1);
    printf("palabra1= %c\n",*(palabra1+1)); 
    printf("direccion palabra2= %x",palabra2);
    printf("palabra2= %c ",*(palabra2+1));
    scanf("%i",&salir);
}

