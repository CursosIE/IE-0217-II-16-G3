// Esteban Vargas B16998 - Laura Rincon B55863
#include "Figura.h"

///Clase Triangulo que hereda de la clase Figura
class Triangulo:public Figura{
public:
  Triangulo();
  Triangulo(double base, double altura);

  virtual ~Triangulo();

  double base;
  double altura;

  double area();
  double perimetro();
  void operator~();
  void operator!();
};
