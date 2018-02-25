#include<iostream>
#include<fstream>
using namespace std;
int main(){
    struct persona{
       string nombre;
       string apellido1;
       string apellido2;
       string telefono;
    };
    persona vectoragenda[100];
    int cont;
    int cont1;
    int salir=9;
    int primero=0;
    int haydatos;
    string mensaje;
    persona amigo;
    char pausa;
        
    while(salir!=0){
    	system ("CLS");
         cout << "AGENDA ELECTRONICA"<<endl;
         cout << "=================="<<endl;
         cout << "1 - Nueva persona"<<endl;
         cout << "2 - Consultar los datos de una persona"<<endl;
         cout << "3 - Eliminar una persona"<<endl;
         cout << "0 - Salir"<<endl;
         cin >>salir;
         
         if (salir == 1){
            ifstream fichero("MiAgenda.txt"); 
            if (fichero.fail()==0){
                 cont=0;
                 while (fichero.eof()!=1){
                    getline(fichero, mensaje);
                    vectoragenda[cont].nombre=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido1=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido2=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].telefono=mensaje;
                    cont=cont+1;
                 }
                 fichero.close();
             };
             cout<<"Datos de la Persona "<<endl;
             cout<<"Nombre: ";
             cin>>vectoragenda[cont].nombre;
             cout<<"Primer apellido: ";
             cin>>vectoragenda[cont].apellido1;
             cout<<"Segundo apellido: ";
             cin>>vectoragenda[cont].apellido2;
             cout<<"Telefono: ";
             cin>>vectoragenda[cont].telefono; 
             
             ofstream fichero1("MiAgenda.txt");
             for(cont1=0;cont1<=cont;cont1++){
             	if (cont1!=0){fichero1<<endl;};
                 fichero1<<vectoragenda[cont1].nombre<<endl;
                 fichero1<<vectoragenda[cont1].apellido1<<endl;
                 fichero1<<vectoragenda[cont1].apellido2<<endl;
                 fichero1<<vectoragenda[cont1].telefono;
             }
             fichero1.close();
             
         }
         if (salir==2){
         	
			 cout<<"Datos de la Persona que desea consultar "<<endl;
             cout<<"Nombre: ";
             cin>>amigo.nombre;
             cout<<"Primer apellido: ";
             cin>>amigo.apellido1;
             cout<<"Segundo apellido: ";
             cin>>amigo.apellido2;
            
            ifstream fichero("MiAgenda.txt"); 
            if (fichero.fail()==0){
                 cont=0;
                 while (fichero.eof()!=1){
                    getline(fichero, mensaje);
                    vectoragenda[cont].nombre=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido1=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido2=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].telefono=mensaje;
             		if ((amigo.nombre==vectoragenda[cont].nombre) && (amigo.apellido1==vectoragenda[cont].apellido1) && (amigo.apellido2==vectoragenda[cont].apellido2)){
			             cout<<"Telefono: "<<vectoragenda[cont].telefono<<endl; 
			             cin>>pausa;
				 	}
                    cont=cont+1;
                 }
                 fichero.close();
             };			  

        }
         if (salir==3){
            
			ifstream fichero("MiAgenda.txt"); 
            if (fichero.fail()==0){
                 cont=0;
                 while (fichero.eof()!=1){
                    getline(fichero, mensaje);
                    vectoragenda[cont].nombre=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido1=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].apellido2=mensaje;
                    getline(fichero, mensaje);
                    vectoragenda[cont].telefono=mensaje;
                    cont=cont+1;
                 }
                 fichero.close();
             };
			 
			 cout<<"Datos de la Persona que desea eliminar "<<endl;
             cout<<"Nombre: ";
             cin>>amigo.nombre;
             cout<<"Primer apellido: ";
             cin>>amigo.apellido1;
             cout<<"Segundo apellido: ";
             cin>>amigo.apellido2;
             
			 cont=cont-1;
			 primero=0;
			 ofstream fichero1("MiAgenda.txt");
             for(cont1=0;cont1<=cont;cont1++){
             	if ((amigo.nombre==vectoragenda[cont1].nombre) && (amigo.apellido1==vectoragenda[cont1].apellido1) && (amigo.apellido2==vectoragenda[cont1].apellido2)){

				 }else{
		             	if (primero!=0){fichero1<<endl;};
		                 fichero1<<vectoragenda[cont1].nombre<<endl;
		                 fichero1<<vectoragenda[cont1].apellido1<<endl;
		                 fichero1<<vectoragenda[cont1].apellido2<<endl;
		                 fichero1<<vectoragenda[cont1].telefono;
		                 primero=1;
             		}
             }
             fichero1.close();             
             
        	}
 
        }
}
