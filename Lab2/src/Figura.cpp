// Esteban Vargas B16998 - Laura Rincon B55863
#include "Figura.h"

///Constructor vacío de Figura
Figura::Figura(){

}
///Constructor que recibe los atributos nombre y color
Figura::Figura(string nombre, string color){
  this->nombre = nombre;
  this->color = color;
}

///Destructor de la clase figura
Figura::~Figura(){

}

///Función que devuelve el valor cero como área de una figura (es reimplementada por cada clase derivada)
double Figura::area(){
  return 0.0;
}
///Función que devuelve el valor cero como perímetro de una figura (es reimplementada por cada clase derivada)
double Figura::perimetro(){
  return 0.0;
}
