#include <iostream>
#include "../include/estudiante.h"

using namespace std;

//constructor por defecto
Estudiante :: Estudiante() 
	: Persona()
{ 
	cursos = nullptr;
}

//constructor con parametros
Estudiante :: Estudiante(const string& nombre, const string& carrera)
	: Persona(nombre), carrera(carrera)
{ 
	cursos = nullptr;
}
	
//constructor copias	
Estudiante :: Estudiante (const Estudiante &e)
	: Persona(e), carrera(e.carrera), id(e.id), cursos_matriculados(e.cursos_matriculados) 
	{
		if (e.cursos != nullptr){
			cursos = new Curso[cursos_matriculados];
			for (int i = 0; i < cursos_matriculados; i++){
				*(cursos + i) = *(e.cursos + i);
			}

		} else {
			cursos = nullptr;
		}
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

Estudiante::~Estudiante() {
    delete[] cursos;
}

