// Inversion.hpp

#ifndef Inversion_hpp
#define Inversion_hpp

#include <cmath>
#include <string>
#include <vector>
#include "Usuario.hpp"

using namespace std;

class Inversion{
private:
vector<Usuario>grupo;
//Usuario alumno; 

public:
Inversion();
void setUsuario (string cMatricula, int cTiempo, char cSexo, double cMonto);
int contarMujeres();
int contarHombres();
void imprimirDatos(); 
void leerFichero (string fichero);
~Inversion();
};
#endif