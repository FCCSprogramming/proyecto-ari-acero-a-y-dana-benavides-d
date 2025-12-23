#include <iostream>
#include "../include/sistema.h"

Sistema :: Sistema()
: e(nullptr), c(nullptr), c_estudiantes(0), c_cursos(0) {};

//op 1
void Sistema :: registrar_estudiante() {
    c_estudiantes++;

    Estudiante** nuevo = new Estudiante*[c_estudiantes];
    for (int i = 0; i < c_estudiantes - 1; i++){
        *(nuevo + i) = *(e + i);
    }

    string nom, car;
    cout << "--- REGISTRAR ESTUDIANTE ---" << endl;

    cout << "ID: " << c_estudiantes << endl;

    cin.ignore();
    cout << "Nombre: "; 
    getline(cin, nom);

    cout << "Carrera: "; 
    getline(cin, car);

    *(nuevo + c_estudiantes - 1) = new Estudiante(nom, car);

    delete[] e;
    e = nuevo;
    
}


//destructor
Sistema::~Sistema(){
    for (int i = 0; i < c_estudiantes; i++) {
        delete e[i];
    }
    delete[] e;

    for (int i = 0; i < c_cursos; i++) {
        delete c[i];
    }
    delete[] c;

}