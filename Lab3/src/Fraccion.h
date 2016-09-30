
/* 
 * File:   Fraccion.h
 * Author: esteban
 *
 * Created on September 17, 2016, 7:09 PM
 */

#ifndef FRACCION_H
#define FRACCION_H

using namespace std;
#include <iostream>

class Fraccion{
public:
  
    ///Constructor vacío de Fraccion
    Fraccion();
    
    ///Constructor de Fraccion
  Fraccion(int numerador, int denominador);
  
  ///Destructor de Fraccion
  virtual ~Fraccion();
  
  ///Atributos de Fraccion
  int numerador;
  int denominador;
  
  ///Funciones de Fraccion
  Fraccion operator+(const Fraccion&);
  Fraccion operator-(const Fraccion&);
  Fraccion operator*(const Fraccion&);
  Fraccion operator/(const Fraccion&);
  void operator~();

};

#endif /* FRACCION_H */

