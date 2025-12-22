#include <iostream>
#include "../include/curso.h"

// constructor
Curso :: Curso(){
    this->nombre = "";
    this->id = "00";
    this->c_creditos = 0;
}
Curso :: Curso(string nombre, string id, int c_creditos)
    {
        this->nombre = nombre;
        this->id = id;
        this->c_creditos = c_creditos;
    }
void Curso :: show_inf_cur() const {
	cout << "ID: "<< this->id <<" | Nombre del curso: " << this->nombre;
}
