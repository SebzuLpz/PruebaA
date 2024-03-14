#include <iostream>
#include <string>
using namespace std;
struct tipoDatos{
	string nombreFich;
	long tamanyo;
};
int numeroFichas=0;
int i;
int opcion;
string textoTemporal;
int numeroTemporal;
int main ()
{
	tipoDatos*fichas=new tipoDatos [1000];
	do{
		cout<<endl;
		cout<<"Escoja una opcion:"<<endl;
		cout<<"1). Añadir datos de un nuevo archivo"<<endl;
		cout<<"2). Mostrar los nombres de todos los archivos"<<endl;
		cout<<"3). Mostrar archivos que sean de mas de un cierto tamaño"<<endl;
		cout<<"4). Ver datos de un archivo"<<endl;
		cout<<"5). Salir"<<endl;
		cin>>opcion;
		switch (opcion){
			case 1:
				if (numeroFichas<1000){
					cout<<"Introduce el nombre del archivo: ";
					cin>>fichas[numeroFichas].nombreFich;
					cout<<"Introduce el tamaño en KB: ";
					cin>>fichas[numeroFichas].tamanyo;
					numeroFichas++;
				}
				else
				cout<<"Maximo de fichas alcanzado (1000)!"<<endl;
				break; 
				case 2: 
				for (i=0;i<numeroFichas;i++)
				cout<<"Nombre: "<<fichas[i].nombreFich
				<<"; tamaño: "<<fichas[i].tamanyo
				<<"KB"<<endl;
				break;
				case 3:
					cout<<"¿A partir de que tamaño quieres que te muestre?";
					cin>>numeroTemporal;
					for (i=0;i<numeroFichas;i++)
					if (fichas[i].tamanyo>=numeroTemporal)
					cout<<"Nombre: "<<fichas[i].nombreFich
					<<"; tamaño: "<<fichas[i].tamanyo
					<<"KB"<<endl;
					break;
					case 4: cout<<"¿De que archibo quieres ver todos los datos?";
					cin>>textoTemporal;
					for (i=0;i<numeroFichas;i++)
					if (fichas[i].tamanyo==numeroTemporal)
					cout<<"Nombre: "<<fichas[i].nombreFich
					<<"; tamaño: "<<fichas[i].tamanyo
					<<"KB"<<endl;
					break; 
					case 5:
						cout<<"Fin del programa"<<endl;
						break;
						default:
							cout<<"Opcion desconocida!"<<endl;
							break;
							
		}
	}
	while (opcion!=5);
	return 0;
}
