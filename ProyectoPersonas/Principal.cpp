#include <iostream>
#include"Persona.h"
#include"Estudiante.h"
#include"Profesor.h"
#include"Empleado.h"

using namespace std;

void estudiante(){
	string nombre, apellido, tipo_sangre, direccion;
	int edad, matricula;
	float promedio;
	
	cout << "Digite el nombre del Estudiante: ";
	cin >> nombre;
	fflush(stdin);
	cout << "Digite los apellidos del Estudiante: ";
	getline(cin, apellido);
	fflush(stdin);
	cout << "Digite el tipo de sangre del Estudiante: ";
	getline(cin, tipo_sangre);
	fflush(stdin);
	cout << "Digite la edad del Estudiante: ";
	cin >> edad;
	fflush(stdin);
	cout << "Digite la direccion del Estudiante: ";
	getline(cin, direccion);
	fflush(stdin);
	cout << "digite la matricula del Estudiante: ";
	cin >> matricula;
	fflush(stdin);
	cout << "Digite la calificacion promedio del Estudiante: ";
	cin >> promedio;
	
	Estudiante E(nombre, apellido, tipo_sangre, edad, direccion, matricula, promedio);
	
	system("cls");
	
	E.mostrarestudiante();
}

void profesor(){
	string nombre, apellido, tipo_sangre, direccion;
	int edad, id;
	float sueldo;
	
	cout << "Digite el nombre del Profesor: ";
	cin >> nombre;
	fflush(stdin);
	cout << "Digite los apellidos del Profesor: ";
	getline(cin, apellido);
	fflush(stdin);
	cout << "Digite el tipo de sangre del Profesor: ";
	getline(cin, tipo_sangre);
	fflush(stdin);
	cout << "Digite la edad del Profesor: ";
	cin >> edad;
	fflush(stdin);
	cout << "Digite la direccion del Profesor: ";
	getline(cin, direccion);
	fflush(stdin);
	cout << "digite el id del Profesor: ";
	cin >> id;
	fflush(stdin);
	cout << "Digite el sueldo del Profesor: ";
	cin >> sueldo;
	
	Profesor P(nombre, apellido, tipo_sangre, edad, direccion, id, sueldo);
	
	system("cls");
	
	P.mostrarProfesor();
}

void empleado(){
	string nombre, apellido, tipo_sangre, direccion;
	int edad, id;
	float sueldo;
	
	cout << "Digite el nombre del Empleado: ";
	cin >> nombre;
	fflush(stdin);
	cout << "Digite los apellidos del Empleado: ";
	getline(cin, apellido);
	fflush(stdin);
	cout << "Digite el tipo de sangre del Empleado: ";
	getline(cin, tipo_sangre);
	fflush(stdin);
	cout << "Digite la edad del Empleado: ";
	cin >> edad;
	fflush(stdin);
	cout << "Digite la direccion del Empleado: ";
	getline(cin, direccion);
	fflush(stdin);
	cout << "digite el id del Empleado: ";
	cin >> id;
	fflush(stdin);
	cout << "Digite el sueldo del Empleado: ";
	cin >> sueldo;
	
	Empleado E(nombre, apellido, tipo_sangre, edad, direccion, id, sueldo);
	
	system("cls");
	
	E.mostrarEmpleado();
}

int main(int argc, char** argv){
	int eleccion;
	
	do{
		system("cls");
		cout << "Digite la opcion a utilizar:\n \n1-Digitar un Estudiante \n2-Digitar un Profesor \n3-Digitar un Empleado \n4-Salir" << endl;
		cin >> eleccion;
		
		system("cls");
		
		switch(eleccion){
			case 1: 
				estudiante();
				system("pause");
			break;
			case 2: 
				profesor();
				system("pause");
			break;
			case 3: 
				empleado();
				system("pause");
			break;
			case 4: break;
			default: 
				cout << "Eleccion Incorrecta" << endl;
				system("pause");
		}
	}while(eleccion != 4);
	return 0;
}

