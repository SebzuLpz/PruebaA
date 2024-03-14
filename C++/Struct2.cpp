#include <iostream>
using namespace std;
	struct fechaNacimiento {
		int dia;
		int mes;
		int anyo;	
	};	
	struct datosPersona{
		string nombre;
		string apellido;
		int fechaNacimiento;
		float nota;
	};
	struct Hobbies {
		string hobbie1;
		string hobbie2;
	};
	int main ()
	{
		datosPersona persona;
		persona.nombre="Sebastian";
		persona.apellido="Lopez";
		persona.fechaNacimiento=25;
		persona.nota=4.8;
		
		fechaNacimiento fecha;
		fecha.dia=25;
		fecha.mes=01;
		fecha.anyo=2005;
		
		Hobbies hob;
		hob.hobbie1="Jugar futbol";
		hob.hobbie2="Jugar videojuegos";
		
		cout<<"DATOS PERSONALES";
		cout<<"\nNombre: "<<persona.nombre;
		cout<<"\nApellido: "<<persona.apellido;
		cout<<"\nFECHA DE NACIMIENTO";
		cout<<"\nMes: "<<fecha.mes;
		cout<<"\nAño: "<<fecha.anyo;
		cout<<"\nHOBBIES";
		cout<<"\nHobbies que tiene: ";
		cout<<"\n"<<hob.hobbie1;
		cout<<"\n"<<hob.hobbie2;
		return 0;
}


	


