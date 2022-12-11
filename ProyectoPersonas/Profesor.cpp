#include"Persona.h"
#include"Profesor.h"
#include<iostream>

using namespace std;

int Profesor::getId() { return id; }
float Profesor::getSueldo() { return sueldo; }

void Profesor::setId(int id) { this->id = id; }
void Profesor::setSueldo(float sueldo) { this->sueldo = sueldo; }

Profesor::Profesor(string nombre, string apellido, string tipo_sangre, int edad, string direccion, int id, float sueldo) : Persona(nombre, apellido, tipo_sangre, edad, direccion){
	setId(id);
	setSueldo(sueldo);
}

void Profesor::mostrarProfesor(){
	mostrarPersona();
	cout << "ID: " << id << endl;
	cout << "Sueldo: " << sueldo << endl;
}
