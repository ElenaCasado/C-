//Matrices
#include<iostream>
using namespace std;
int main(){
    int matriz[3][3];
    int fila,col;
    int salir;
    for(fila=0;fila<3;fila++){
       for(col=0;col<3;col++){
         cout<<"matriz["<<fila<<"][";
         cout<<col<<"]";
         cin>>matriz[fila][col];
       }
    }
    cout<<endl<<"Hemos acabado";
    cin>>salir;
    return 0;
}
