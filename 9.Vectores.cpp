
#include<iostream>
using namespace std;
int main(){
    int vector1[5];
    int vector2[5];
    int vectort[5];
    int cont=0;
    int salir;
//Rellenamos los vectores

    for(cont=0;cont<5;cont++){
          cout<<"vector["<<cont<<"]=";
          cin>>vector1[cont];
    }
    for(cont=0;cont<5;cont++){
          cout<<"vector["<<cont<<"]=";
          cin>>vector2[cont];
    }
    for(cont=0;cont<5;cont++){    
         vectort[cont]=vector1[cont]+vector2[cont];
    }
   //Mostramos el vector por pantalla
    for(int cont=0;cont<5;cont++){
       if(cont==0){
         cout<< "["<<vectort[cont]<<",";
       }
       if(cont==4){
         cout<< vectort[cont]<<"]";
       }
       if(cont!=0 && cont!=4){
         cout<< vectort[cont]<<",";
       }
    }
    cout<<"presiona para salir";
    cin>>salir;
    return 0;
    
}
