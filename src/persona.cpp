#include "../include/persona.h"
#include <iostream>

//constructor por defecto
Persona :: Persona(): nombre("") {}

//constructor con parametros
Persona :: Persona(const string& nombre): nombre(nombre) {}

//constructor copia
Persona :: Persona (const Persona& p): nombre(p.nombre){}

//calcular promedio	 
float Persona :: calcularDesempeno() const {
	return 0.0f;
}

//obtener nombre
string Persona :: getName() const { return nombre; }
	
//destructor	
Persona :: ~Persona() {}
