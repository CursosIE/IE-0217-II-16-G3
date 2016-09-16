// Esteban Vargas B16998 - Laura Rincon B55863
#include "Figura.h"

///Clase Circulo que hereda de la clase Figura
class Circulo:public Figura{
public:
  Circulo();
  Circulo(double radio);

  virtual ~Circulo();

  double radio;

  double area();
  double perimetro();
  void operator~();
  void operator!();
};
