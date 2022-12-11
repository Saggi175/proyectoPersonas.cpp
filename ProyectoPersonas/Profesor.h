#ifndef PROFESOR_H_
#define PROFESOR_H_
#include<iostream>
#include"Persona.h"

class Profesor : public Persona{
	private:
		int id;
		float sueldo;
	public:
		int getId();
		float getSueldo();
		
		Profesor(string, string, string, int, string, int, float);
		
		void setId(int);
		void setSueldo(float);
		void mostrarProfesor();
};

#endif
