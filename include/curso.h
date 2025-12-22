#ifndef CURSO_H
#define CURSO_H

#include "estudiante.h"
#include <iostream>
using namespace std;
class Curso {
    protected:
        string nombre;
        string id;

    private:
        static int c_estudiantes_matriculados;
        int c_creditos;
        Estudiante * estudiantes_matriculados;

    public:
        // constructor
        Curso();
        Curso(string nombre, string id, int c_creditos);
        Curso(const Curso &c);
        void show_inf_cur() const;
};

#endif