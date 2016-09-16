// Esteban Vargas B16998 - Laura Rincon B55863
#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
using namespace std;

///Clase madre que le hereda a Circulo, Triangulo y Cuadrado
class Figura{
public:
  Figura();
  Figura(string nombre, string color);

  virtual ~Figura();

  string nombre;
  string color;

  virtual double area();
  virtual double perimetro();
};

#endif /* FIGURA_H */
