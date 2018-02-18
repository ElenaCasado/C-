//FICHEROS
#include<iostream>
#include<fstream>

using namespace std;
int main(){
int salir;    
//Abrimos fichero
    ofstream fichero("mi fichero.txt");
    fichero<<"EN un lugar de la Mancha"<<endl;
    fichero<<"de cuyo nombre no quiero acordarme...";
    fichero.close();
    cout<<"ya esta. Fichero cerrado";
    cin>>salir;
    
 return 0;   
}
