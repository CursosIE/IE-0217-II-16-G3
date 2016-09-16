// Esteban Vargas B16998 - Laura Rincon B55863
#include "Circulo.h"

///Constructor vacío de la clase Circulo
Circulo::Circulo(){

}

///Constructor de la clase Circulo que recibe los atributos propios de la clase:radio
Circulo::Circulo(double radio){
  this->radio = radio;
  this->color = "rojo";
  this->nombre ="Beto";
}

///Destructor de la clase Circulo
Circulo::~Circulo(){

}

///Función que devuelve el valor del área de un círculo
double Circulo::area(){
  return (3.141592*radio*radio);
}

///Función que devuelve el valor del perímetro de un círculo
double Circulo::perimetro(){
  return (2*3.141592*radio);
}

///Sobrecarga del operador ~
void Circulo::operator~(){
  cout << "El nombre del círculo es: " << nombre << endl;
  cout << "El color del círculo es: " << color << endl;
  cout << "El radio del círculo es: " << radio << endl;
}

///Sobrecarga del operador !
void Circulo::operator!(){
  cout << "El área del círculo es: " << area() << endl;
  cout << "El perímetro del círculo es: " << perimetro() << endl;
}
