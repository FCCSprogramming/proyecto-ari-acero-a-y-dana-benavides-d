#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
	protected:
		string nombre;
	public:
		Persona();
		
		Persona(const string& nombre);
		
		Persona (const Persona& p);
		
		virtual void mostrarInfo() const = 0;
		virtual float calcularDesempeno() const;
		string getName() const;
		
		virtual ~Persona();
	
};

#endif
