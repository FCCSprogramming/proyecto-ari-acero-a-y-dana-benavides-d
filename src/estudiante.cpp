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
	cursos = nullptr;
}

//constructor con parametros
Estudiante :: Estudiante(const string& nombre)
	: Persona(nombre), id(count)
{ 
	count++; 
	cursos = nullptr;
}
	
//constructor copias	
Estudiante :: Estudiante (const Estudiante &e)
	: Persona(e), id(e.id) 
{
	count++;
	cursos = nullptr;
}

//mostrar info		
void Estudiante :: mostrarInfo() const {
	cout << "ID: "<< this->id <<" | Nombre: " << this->nombre << " | Promedio: " << calcularDesempeno();
}

//calcular promedio		
float Estudiante :: calcularDesempeno() const {
	//rellenar
	return 0.0f;
}

//agregar notas		
void Estudiante :: agregarNota(){
	//rellenar
		
};


