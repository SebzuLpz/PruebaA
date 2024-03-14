#include <iostream>
using namespace std;
int main (){
	struct {
		string nombre;
		int id;
		int edad;
		float nota;
		string asignatura;
		long telefono;
		string direccion;	
	}persona;	
	persona.nombre="Juan";
	persona.id=121316512;
	persona.edad=20;
	persona.nota=7.5;
	persona.asignatura="Programacion";
	persona.telefono=31154884211;
	persona.direccion="Cra 71b Bis #12-60";
	cout<<"DATOS PERSONALES";
	cout<<"\nNombre: "<<persona.nombre;
	cout<<"\nId: "<<persona.id;
	cout<<"\nEdad: "<<persona.edad;
	cout<<"\nNota: "<<persona.nota;
	cout<<"\nAsignatura: "<<persona.asignatura;
	cout<<"\nTelefono: "<<persona.telefono;
	cout<<"\nDireccion: "<<persona.direccion;
	return 0;
}
