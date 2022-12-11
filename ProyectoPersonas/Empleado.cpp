#include"Persona.h"
#include"Empleado.h"
#include<iostream>

using namespace std;

int Empleado::getId() { return id; }
float Empleado::getSueldo() { return sueldo; }

void Empleado::setId(int id) { this->id = id; }
void Empleado::setSueldo(float sueldo) { this->sueldo = sueldo; }

Empleado::Empleado(string nombre, string apellido, string tipo_sangre, int edad, string direccion, int id, float sueldo) : Persona(nombre, apellido, tipo_sangre, edad, direccion){
	setId(id);
	setSueldo(sueldo);
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout << "ID: " << id << endl;
	cout << "Sueldo: " << sueldo << endl;
}
