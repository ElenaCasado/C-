//Leer líneas
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int salir;
    ifstream fichero("mi fichero.txt");
    string mensaje;
    cout<<"El texto dice; ";
    while (fichero.eof()!=1){    //for(int nlinea=1;nlinea<=4;nlinea++)
        getline(fichero,mensaje);
        if(fichero.eof()!=1){
           cout<<mensaje;
           cout<<endl;
        }
    
    }
    cin>>salir;
}
    
