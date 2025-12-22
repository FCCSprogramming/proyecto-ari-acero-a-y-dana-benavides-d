#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"
#include "curso.h"
class Estudiante : public Persona {
	private:
		//contador de los ids
		static int count;
		
		int id;

		//cursos matriculados
		Curso * cursos;
		
	public:
		//constructor por defecto
		Estudiante();
		
		//constructor con parametros
		Estudiante(const string& nombre);
		
		//constructor copia
		Estudiante (const Estudiante &e);
		
		//mostrar info
		void mostrarInfo() const override;
		
		//calcular promedio	
		float calcularDesempeno() const override;
		
		//agregar notas	
		void agregarNota();
		
};

#endif
