#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include<iostream>
#include"Persona.h"

class Empleado : public Persona{
	private:
		int id;
		float sueldo;
	public:
		int getId();
		float getSueldo();
		
		Empleado(string, string, string, int, string, int, float);
		
		void setId(int);
		void setSueldo(float);
		void mostrarEmpleado();
};

#endif
