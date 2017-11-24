//Vamos a aprender a hacer arrays
#include<iostream>
using namespace std;
int main(){
    int pepito[5];
    int cont;
    int salir;
    int suma=0;
    for(cont=0;cont<5;cont++){
        cout<<"Dime un numero; ";
        cin>>pepito[cont];
    }
    //Ahora sumamos
    cout<<"La SUMA vale; "<<endl;
    for(cont=0;cont<5;cont++){
        suma=suma+pepito[cont];
    }
    cout<<suma;
    cout<<"Toca cualquier tecla";
    cin>>salir;
    return 0;
}
