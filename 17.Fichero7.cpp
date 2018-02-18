//Lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string linea;
    string nombre;
    int salir;
    int repetir=0;
    ifstream fichero;//Esta es la lñínea clave. Al declarar aquí el fichero, hacemos que sea "reconocible" en todo el programa
    
    cout<<"Dime la ruta del fichero; ";
    getline(cin,nombre);
  fichero.open(nombre.c_str()); 
    do{
             
       if (fichero.fail()==1){
          cout<<"ERROR. No existe la ruta"<<endl;
          cout<<"Dime la ruta del fichero; ";
          getline(cin,nombre);
          fichero.open (nombre.c_str()); 
          cin>>salir;
          repetir=1;
       }else{
         repetir=0;
       }
    }while(repetir==1);
    while(fichero.eof()==0){
         getline(fichero,linea);
         cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
