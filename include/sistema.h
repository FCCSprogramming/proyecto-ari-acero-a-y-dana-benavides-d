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
    static int c_estudiantes;
    static int c_cursos;
    Estudiante *e;
    Curso *c;

public:
    Sistema(int c_estudiantes, int c_cursos);
    ~Sistema();
    void inscribir_e_cursos();
    void registrar_notas_parciales_por_estudiante();
    void registrar_notas_parciales_por_curso();
    void calcular_promedio_y_generar_reporte();
    void exportar_estudiantes_aprobados();
    void guardar_base_de_datos();
    void cargar_base_de_datos();
    void acceder_registros();
    void listar_registrados();
};

#endif