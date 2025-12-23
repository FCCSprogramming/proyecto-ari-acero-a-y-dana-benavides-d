#include <iostream>
#include "../include/sistema.h"

Sistema :: Sistema()
: e(nullptr), c(nullptr), c_estudiantes(0), c_cursos(0) {};


void Sistema :: registrar_estudiante() {
    c_estudiantes++;

    Estudiante *nuevo = new Estudiante[c_estudiantes];
    for (int i = 0; i < c_estudiantes - 1; i++){
        *(nuevo + i) = *(e + i);
    }

    string nom, car;
    cout << "--- REGISTRAR ESTUDIANTE ---" << endl;

    cout << "ID: " << c_estudiantes << endl;

    cout << "Nombre: "; 
    cin.ignore();
    getline(cin, nom);

    cout << "Carrera: "; 
    cin.ignore();
    getline(cin, car);

    *(nuevo + c_estudiantes - 1) = Estudiante(nom, car);

    delete[] e;
    e = nuevo;
    
}

