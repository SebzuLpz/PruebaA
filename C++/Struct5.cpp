#include <iostream>
using namespace std;
	struct datosCliente {
		string nombre;
		string apellido;
		long cedula;
		long telefono;
		string direccion;	
	};	
	struct datosCompra {
		string articulo;
		long valor;
		int iva;
	
	};
	int main ()
	{
		datosCliente cliente;
		cliente.nombre="Sebastian";
		cliente.apellido="Lopez";
		cliente.cedula=1034777966;
		cliente.telefono=3166202223;
		cliente.direccion="Calle 12a #71c-60";
		
		datosCompra compra;
		compra.articulo="Telefono Samsung";
		compra.valor=1500000;
		compra.iva=19;
		
		
		cout<<"DATOS CLIENTE";
		cout<<"\nNombre: "<<cliente.nombre;
		cout<<"\nApellido: "<<cliente.apellido;
		cout<<"\nCedula: "<<cliente.cedula;
		cout<<"\nTelefono: "<<cliente.telefono;
		cout<<"\nDireccion: "<<cliente.direccion;
		cout<<"\nDATOS COMPRA";
		cout<<"\nArticulo: "<<compra.articulo;
		cout<<"\nValor: "<<compra.valor;
		cout<<"\nIVA: "<<compra.iva<<"%";
		return 0;
}


	


