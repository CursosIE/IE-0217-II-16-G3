
/* 
 * File:   Calculadora.h
 * Author: esteban
 *
 * Created on September 17, 2016, 6:46 PM
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
using namespace std;

template <typename T>
class Calculadora{
public:
    
  ///Constructor vacío de Calculadora
  Calculadora(){

  }
  
  ///Destructor de Calculadora
  virtual ~Calculadora(){

  }
  
  ///Función suma de Calculadora
  T add(T a, const T b){
    return a+b;
  }
  
  ///Función resta de Calculadora
  T sub(T a, const T b){
    return a-b;
  }
  
  ///Función multiplicación de Calculadora
  T mul(T a, const T b){
    return a*b;
  }
  
  ///Función división de Calculadora
  T div(T a, const T b){
    return a/b;
  }
  
  ///Función imprimir de alculadora
  void print(const T a){
      //~(a);
  }
  
};

#endif /* CALCULADORA_H */

