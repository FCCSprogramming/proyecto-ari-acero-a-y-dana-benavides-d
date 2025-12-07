#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"
class Estudiante : public Persona {
	private:
		static int count;
		int id;
		float notas[2];
		
	public:
		Estudiante();
		
		Estudiante(const string& nombre);
		
		Estudiante (const Estudiante &e);
		
		void mostrarInfo() const override;
		
		float calcularDesempeno() const override;
		
		void agregarNota();
		
};

#endif
