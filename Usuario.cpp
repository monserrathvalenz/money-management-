//Usuario.cpp
#include "Usuario.hpp"
#include <iostream>

using namespace std;

Usuario::Usuario(){};
Usuario::Usuario(string cMatricula, int cTiempo, char cSexo, double cMonto)
{
    matricula = cMatricula;
    tiempo = cTiempo;
    sexo = cSexo;
    cuentaUsuario.setMontoInicial(cMonto);
    
};

string Usuario::getMatricula() { return matricula; };
int Usuario::getTiempo() { return tiempo; };
char Usuario::getSexo() { return sexo; };
double Usuario::getMonto() { return cuentaUsuario.getMontoInicial();};
void Usuario::setMatricula(string cMatricula) { matricula = cMatricula; };
void Usuario::setTiempo(int cTiempo) { tiempo = cTiempo;} 
void Usuario::setSexo(char cSexo) { sexo = cSexo;} 

double Usuario::calcularMontoFinal() {
    double montoFinal = cuentaUsuario.getMontoInicial() * pow((1 + 0.1129), tiempo);
    return montoFinal;
}
bool Usuario::esFem(){
  return toupper(sexo) == 'F';
}
string Usuario::seguro(){
  return cuentaUsuario.nivelCuenta();
}
Usuario::~Usuario(){};
