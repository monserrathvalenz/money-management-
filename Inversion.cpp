// Inversiones.cpp

#include "Inversion.hpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Inversion::Inversion(){};

void Inversion::setUsuario(string cMatricula, int cTiempo, char cSexo, double cMonto )
{
  Usuario alumno(cMatricula, cTiempo, cSexo, cMonto);
    grupo.push_back(alumno);
};


void Inversion::imprimirDatos()
{
    for (auto &alumno : grupo)
    {
        double montoFinal = alumno.calcularMontoFinal();
        cout << "Matricula: " << alumno.getMatricula() << " - Monto Inicial: " << alumno.getMonto() << " pesos" << "  \nMonto Final: " << montoFinal << " pesos - "<< alumno.seguro() <<"\n" <<endl;
    }
}


void Inversion::leerFichero(string fichero)
{ 
    ifstream arch;
    arch.open(fichero);
    if (!arch.is_open())
    {
        cout << "Error al abrir ejemplo.dat\n";
        exit(EXIT_FAILURE);
    }

    string matricula;
    int tiempo;
    char sexo;
    double monto;

    while (arch >> matricula >> tiempo >> sexo >> monto)
    {
        setUsuario(matricula, tiempo, sexo, monto);
    }

    arch.close();
};

//Contador de mujeres 
int Inversion::contarMujeres()
{
  int contadorF = 0;
  for (int i = 0; i < grupo.size(); i++) {
    if (grupo[i].esFem() == true)
    {
      contadorF += 1;
    }
  }
  return contadorF;
};

//Contador de hombres
int Inversion::contarHombres()
{
  int contadorM = 0;


  for (int i = 0; i < grupo.size(); i++) {
    if (grupo[i].esFem() == false)
    {
      contadorM += 1;

    }
  }
  return (contadorM);
}

Inversion::~Inversion(){};
  
//Inversion::~Inversion(){ cout<<"Se destruye "<<endl;};


