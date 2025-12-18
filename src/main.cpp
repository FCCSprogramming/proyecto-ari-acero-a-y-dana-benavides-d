#include <iostream>
#include <cstring>
#include "../include/persona.h"
#include "../include/estudiante.h"
using namespace std;

int main(){
	cout << "=== Sistema de Gestion Academica ===" << endl;
	cout << "1. Registrar estudiante" << endl;
	cout << "2. Registrar curso" << endl;
	cout << "3. Inscribir estudiante a curso" << endl;
	cout << "4. Registrar notas parciales" << endl;
	cout << "5. Generar reporte" << endl;
	cout << "6. Exportar aprobados" << endl;
	cout << "7. Guardar datos" << endl;
	cout << "8. Cargar datos" << endl;
	cout << "9. Buscar un registro" << endl;
	cout << "10. Listar datos registrados" << endl;
	
	Estudiante e("Dana");
	e.mostrarInfo();
	return 0;
}
