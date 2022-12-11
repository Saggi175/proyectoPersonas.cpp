#ifndef PERSONA_H_
#define PERSONA_H_
#include<iostream>

using namespace std;

class Persona{
	private:
		string nombre;
		string apellido;
		string tipo_sangre;
		int edad;
		string direccion;	
	public:
		string getNombre();
		string getApellido();
		string getTipo_sangre();
		int getEdad();
		string getDireccion();
		
		Persona(string, string, string, int, string);
		
		void setNombre(string);
		void setApellido(string);
		void setTipo_sangre(string);
		void setEdad(int);
		void setDireccion(string);
		void mostrarPersona();
};

#endif
