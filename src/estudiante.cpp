#include <iostream>
#include "../include/estudiante.h"

using namespace std;

//contador de los ids
int Estudiante :: count = 1;

//constructor por defecto
Estudiante :: Estudiante() 
	: Persona(), id(count)
{ 
	count++; 
	notas[0] = 0;
	notas[1] = 0;
	cursos = nullptr;
}

//constructor con parametros
Estudiante :: Estudiante(const string& nombre)
	: Persona(nombre), id(count)
{ 
	count++; 
	notas[0] = 0;
	notas[1] = 0;
	cursos = nullptr;
}
	
//constructor copias	
Estudiante :: Estudiante (const Estudiante &e)
	: Persona(e), id(e.id) 
{
	count++;
	notas[0] = e.notas[0];
	notas[1] = e.notas[1];
	cursos = nullptr;
}

//mostrar info		
void Estudiante :: mostrarInfo() const {
	cout << "ID: "<< this->id <<" | Nombre: " << this->nombre << " | Promedio: " << calcularDesempeno();
}

//calcular promedio		
float Estudiante :: calcularDesempeno() const {
	return ( notas[0] + notas[1] )/2.0f;
}

//agregar notas		
void Estudiante :: agregarNota(){
	int op;
	float no;
	cout << "Desea agregar nota del parcial 1 o 2? "; cin >> op;
	cout << "Nota: "; cin >> no;
	
	if (op == 1){
		notas[0] = no;
	} else {
		notas[1] = no;
	}
		
};


