// Esteban Vargas B16998 - Laura Rincon B55863
#include "Triangulo.h"

///Constructor vacío de la clase Triangulo
Triangulo::Triangulo(){

}

///Constructor de la clase Triangulo que recibe los atributos propios de la clase:base y altura
Triangulo::Triangulo(double base, double altura){
  this->base = base;
  this->altura = altura;
  this->color = "verde";
  this->nombre ="Dexter";
}

///Destructor de la clase Triangulo
Triangulo::~Triangulo(){

}

///Función que devuelve el valor del área de un triángulo
double Triangulo::area(){
  return (base*altura/2);
}

///Función que devuelve el valor del perímetro de un triángulo
double Triangulo::perimetro(){
  return (3*base);
}

///Sobrecarga del operador ~
void Triangulo::operator~(){
  cout << "El nombre del triángulo es: " << nombre << endl;
  cout << "El color del triángulo es: " << color << endl;
  cout << "La base del triángulo es: " << base << endl;
  cout << "La altura del triángulo es: " << altura << endl;
}

///Sobrecarga del operador !
void Triangulo::operator!(){
  cout << "El área del triángulo es: " << area() << endl;
  cout << "El perímetro del triángulo es: " << perimetro() << endl;
}
