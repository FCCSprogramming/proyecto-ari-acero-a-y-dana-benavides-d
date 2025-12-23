#ifndef SISTEMA_H
#define SISTEMA_H

#include "sistema.h"
#include "estudiante.h"
#include "curso.h"
#include <iostream>
using namespace std;
class Sistema
{
private:
    int c_estudiantes;
    int c_cursos;
    Estudiante *e;
    Curso *c;

public:
    Sistema();
    ~Sistema();
    //op 1
    void registrar_estudiante();

    //op 2
    void registrar_curso();

    //op 3
    void inscribir_e_cursos();

    //op 4
    void registrar_notas_parciales_por_estudiante();

    //op 5
    void calcular_promedio_y_generar_reporte();

    //op 6
    void exportar_estudiantes_aprobados();

    //op 7
    void guardar_base_de_datos();

    //op 8
    void cargar_base_de_datos();

    //op 9
    void acceder_registros();

    //op 10
    void listar_registrados();
};

#endif