#include"Persona.h"
#include"Estudiante.h"
#include<iostream>

using namespace std;

int Estudiante::getMatricula() { return matricula; }
float Estudiante::getPromedio() { return promedio; }

void Estudiante::setMatricula(int matricula) { this->matricula = matricula; }
void Estudiante::setPromedio(float promedio) { this->promedio = promedio; }

Estudiante::Estudiante(string nombre, string apellido, string tipo_sangre, int edad, string direccion, int matricula, float promedio) : Persona(nombre, apellido, tipo_sangre, edad, direccion){
	setMatricula(matricula);
	setPromedio(promedio);
}

void Estudiante::mostrarestudiante(){
	mostrarPersona();
	cout<<"Matricula: "<<matricula<<endl;
	cout<<"Promedio: "<<promedio<<endl;
}
