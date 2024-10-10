// Cuenta.cpp
#include "Cuenta.hpp"
#include <iostream>
#include <string>
using namespace std;

Cuenta::Cuenta(){};
Cuenta::Cuenta(double cMontoInicial)
{
  montoInicial = cMontoInicial;
};

string Cuenta::nivelCuenta() {
if (montoInicial  <= 1999 ) {
    return "Sin seguro";
  } else if (montoInicial  <= 9999 && montoInicial  >= 2000) {
    return "Con seguro de gastos medicos";
  } else if (montoInicial  <= 29999 && montoInicial  >= 10000) {
    return "Con seguro de vida";  
  } else {
    return "Con seguro de auto";
  };
};

double Cuenta::getMontoInicial(){return montoInicial; };
void Cuenta::setMontoInicial(double cMontoInicial){montoInicial = cMontoInicial;};
