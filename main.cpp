//main.cpp
#include <iostream>
#include <string>
#include "Inversion.hpp"
using namespace std;


int main()
{
    Inversion datos;                    //creamos objeto inversion cuyo contenido es datos
    datos.leerFichero("input.txt");     //se asignan los valores del txt a los atributos de la clase inversion
    
    datos.imprimirDatos();
    cout << "El numero de mujeres es:"  << datos.contarMujeres()<< endl;
    cout << "El numero de hombres es:"  << datos.contarHombres()<< endl;
  
    return 0;
}
 