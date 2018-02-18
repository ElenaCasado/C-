//Leer líneas
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int salir;
    ifstream fichero("mi fichero.txt");
    string mensaje;
    for(int nlinea=1;nlinea<=4;nlinea++){
        getline(fichero,mensaje);
        cout<<"El texto dice; ";
        cout<<mensaje;
        cout<<endl;
    }
    cin>>salir;
}
    
