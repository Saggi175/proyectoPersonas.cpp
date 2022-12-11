#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include<iostream>
#include"Persona.h"

class Estudiante : public Persona{
	private:
		int matricula;
		float promedio;
	public:
		int getMatricula();
		float getPromedio();
		
		Estudiante(string, string, string, int, string, int, float);
		
		void setMatricula(int);
		void setPromedio(float);
		void mostrarestudiante();
};

#endif
