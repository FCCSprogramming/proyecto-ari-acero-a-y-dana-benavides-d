#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
	protected:
		string nombre;
	public:
		//constructor por defecto
		Persona();
		
		//constructor con parametros
		Persona(const string& nombre);
		
		//constructor copia
		Persona (const Persona& p);
		
		//mostrar info
		virtual void mostrarInfo() const = 0;
		
		//calcular promedio	
		virtual float calcularDesempeno() const;
		
		//obtener nombre
		string getName() const;
		
		//destructor	
		virtual ~Persona();
	
};

#endif
