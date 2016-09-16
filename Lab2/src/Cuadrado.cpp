// Esteban Vargas B16998 - Laura Rincon B55863
#include "Cuadrado.h"

///Constructor vacío de la clase Cuadrado
Cuadrado::Cuadrado(){

}

///Constructor de la clase Cuadrado que recibe los atributos propios de la clase:lado
Cuadrado::Cuadrado(double lado){
  this->lado = lado;
  this->color = "azul";
  this->nombre ="Sergio";
}

///Destructor de la clase Cuadrado
Cuadrado::~Cuadrado(){

}

///Función que devuelve el valor del área de un cuadrado
double Cuadrado::area(){
  return (lado*lado);
}

///Función que devuelve el valor del perímetro de un cuadrado
double Cuadrado::perimetro(){
  return (4*lado);
}

///Sobrecarga del operador ~
void Cuadrado::operator~(){
  cout << "El nombre del cuadrado es: " << nombre << endl;
  cout << "El color del cuadrado es: " << color << endl;
  cout << "El lado del cuadrado es: " << lado << endl;
}

///Sobrecarga del operador !
void Cuadrado::operator!(){
  cout << "El área del cuadrado es: " << area() << endl;
  cout << "El perímetro del cuadrado es: " << perimetro() << endl;
}
