//Cuenta.hpp

#ifndef Cuenta_hpp
#define Cuenta_hpp
#include <string>
#include <iostream>
using namespace std;

class Cuenta{

private:
  double montoInicial;

public:
  Cuenta();
  Cuenta(double);
  string nivelCuenta();

  double getMontoInicial();
  void setMontoInicial(double);
};
#endif