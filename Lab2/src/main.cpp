// Esteban Vargas B16998 - Laura Rincon B55863
#include <cstdlib>
#include "Figura.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
using namespace std;

int main (int argc, char** argv){

  Triangulo* t= new Triangulo(6.0,5.0);
  ~(*t);
  !(*t);
  //double at = t->area(); ERA PARA COMPROBAR VALORES
  //double pt = t->perimetro(); ERA PARA COMPROBAR VALORES
  delete t;

  Circulo* c= new Circulo(6.0);
  ~(*c);
  !(*c);
  //double ac = c->area(); ERA PARA COMPROBAR VALORES
  //double pc = c->perimetro(); ERA PARA COMPROBAR VALORES
  delete c;

  Cuadrado* cu= new Cuadrado(7.0);
  ~(*cu);
  !(*cu);
  //double acu = cu->area(); ERA PARA COMPROBAR VALORES
  //double pcu = cu->perimetro(); ERA PARA COMPROBAR VALORES
  delete cu;

}
