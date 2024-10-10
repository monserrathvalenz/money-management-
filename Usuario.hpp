//Usuario.hpp

#ifndef Usuario_hpp
#define Usuario_hpp

#include <string>
#include "Cuenta.hpp"
#include <cmath>
using namespace std;

class Usuario {
private:
    string matricula;
    int tiempo;
    char sexo;
    Cuenta cuentaUsuario;

public:
    Usuario();
    Usuario(string cMatricula ,int cTiempo ,char cSexo, double cMonto);

    void setMatricula(string); 
    string getMatricula(); 

    void setTiempo(int); 
    int getTiempo();

    void setSexo(char); 
    char getSexo();

    double calcularMontoFinal(); 

    bool esFem();

    double getMonto( );
    string seguro();

    ~Usuario();
};

#endif