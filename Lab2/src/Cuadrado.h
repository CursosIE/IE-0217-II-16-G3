// Esteban Vargas B16998 - Laura Rincon B55863
#include "Figura.h"

///Clase Cuadrado que hereda de la clase Figura
class Cuadrado:public Figura{
public:
  Cuadrado();
  Cuadrado(double lado);

  virtual ~Cuadrado();

  double lado;

  double area();
  double perimetro();
  void operator~();
  void operator!();
};
