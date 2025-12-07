#include "../include/persona.h"
#include <iostream>

Persona :: Persona(): nombre("") {}
		
Persona :: Persona(const string& nombre): nombre(nombre) {}
		
Persona :: Persona (const Persona& p): nombre(p.nombre){}
		 
float Persona :: calcularDesempeno() const {
	return 0.0f;
}
string Persona :: getName() const { return nombre; }
		
Persona :: ~Persona() {}
