//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string linea;
    int salir;
    ifstream fichero ("mi fichero.txt"); 
    if (fichero.fail()==1){
       cout<<"ERROR. No existe la ruta";
       cin>>salir;
       exit(1);
    }
    /*ifstream es para declarar que vas a usar un fichero 
    y esa linea en ordenador lo que hace es busca la ruta, ya que en un sitio 
    cualquiera (sería así si pudieramos solo el nombre del fichero), o en un 
    lugar concreto (llamado directorio raíz) */
    while(fichero.eof()==0){
         getline(fichero,linea);
         cout<<linea;
         cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
