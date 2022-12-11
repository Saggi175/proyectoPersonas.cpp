#include"Persona.h"
#include<iostream>

using namespace std;

string Persona::getNombre() { return nombre; }
string Persona::getApellido() { return apellido; }
string Persona::getTipo_sangre() { return tipo_sangre; }
int Persona::getEdad() { return edad; }
string Persona::getDireccion() { return direccion; }

void Persona::setNombre(string nombre) { this->nombre = nombre; }
void Persona::setApellido(string apellido) { this->apellido = apellido; }
void Persona::setTipo_sangre(string tipo_sangre) { this->tipo_sangre = tipo_sangre; }
void Persona::setEdad(int edad) { this->edad = edad; }
void Persona::setDireccion(string direccion) { this->direccion = direccion; }

Persona::Persona(string nombre, string apellido, string tipo_sangre, int edad, string direccion){
	setNombre(nombre);
	setApellido(apellido);
	setTipo_sangre(tipo_sangre);
	setEdad(edad);
	setDireccion(direccion);
}

void Persona::mostrarPersona(){
	cout << "Nombre: " << nombre << endl;
	cout << "Apellidos: " << apellido << endl;
	cout << "Tipo de sangre: " << tipo_sangre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Direccion: " << direccion << endl;
}
