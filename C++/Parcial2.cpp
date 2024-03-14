#include <iostream>
#include <string>
using namespace std;
	struct Alumno1{
		string nombre;
		string apellido;
		long cedula;
		long celular;
		string direccion;
		float nota;

		
	};	
	int opcion;	
	float notat;
	long cedulat;
	int main ()
	{
		Alumno1*datos = new Alumno1;
		
		do{
		

		cout<<"Seleccione una opcion:"<<endl;
		cout<<"1) Anadir datos de alumno."<<endl;
		cout<<"2) Mostrar los nombres de todos los alumnos almacenados."<<endl;
		cout<<"3) Mostrar alumnos por nota."<<endl;
		cout<<"4) Mostrar alumnos por cedula."<<endl;
		cout<<"5) Ver todos los datos de un alumno por apellido."<<endl;
		cout<<"6) Salir del programa."<<endl;
		cin>>opcion;
		switch (opcion){
		case 1:
		
		cout<<"Digite datos del alumno 1: "<<endl;
		cout<<"Nombre: ";
		cin>>datos->nombre;
		cout<<"Apellido: ";
		cin>>datos->apellido;
		cout<<"Cedula: ";
		cin>>datos->cedula;
		cout<<"Celular: ";
		cin>>datos->celular;
		cout<<"Direccion: ";
		cin>>datos->direccion;
		cout<<"Nota: ";
		cin>>datos->nota;
		
		
		break;
		case 2:
			cout<<"Nombres de los alumnos: "<<endl;
			cout<<datos->nombre<<endl;
			break;
			case 3: 
			cout<<"Nota: ";
			cin>>notat;
			if (notat=datos->nota)
			cout<<datos->nombre<<" "<<datos->apellido<<" "<<"\nNota: "<<datos->nota<<endl;
			break;
			case 4:
			cout<<"Cedula: ";
			cin>>cedulat;
			if (cedulat=datos->cedula)
			cout<<"Nombre: "<<datos->nombre<<" "<<"\nApellido: "<<datos->apellido<<" "<<"\nCedula: "<<datos->cedula<<endl;
			break;
			case 5: 
			cout<<"Apellidos de los alumnos: "<<endl;
			cout<<datos->apellido<<endl;
			break;
			case 6: 
			cout<<"Saliendo del programa..."<<endl;
			break;
			default:
				cout<<"Opcion no valida"<<endl;
				break;
	}
}
while(opcion!=6);
return 0;

}





	


