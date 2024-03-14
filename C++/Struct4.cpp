#include <iostream>
using namespace std;
int main (){
	struct {
		string titulo;
		string artista;
		int numeroCanciones;
		string genero;
		string fechaEstreno;	
	}musica;	
	musica.titulo="Reminiscencias.";
	musica.artista="Julio Jaramillo.";
	musica.numeroCanciones=2200;
	musica.genero="Tango, Musica latina, Pop.";
	musica.fechaEstreno="1968.";
	cout<<"MUSICA";
	cout<<"\nTitulo: "<<musica.titulo;
	cout<<"\nArtista: "<<musica.artista;
	cout<<"\nNumero de canciones: "<<musica.numeroCanciones;
	cout<<"\nGenero: "<<musica.genero;
	cout<<"\nAño de lanzamiento: "<<musica.fechaEstreno;
	return 0;
}
