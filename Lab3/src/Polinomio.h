
/* 
 * File:   Polinomio.h
 * Author: esteban
 *
 * Created on September 17, 2016, 7:06 PM
 */

#ifndef POLINOMIO_H
#define POLINOMIO_H

using namespace std;
#include <iostream>

class Polinomio{
public:
    
    ///Constructor vacío de Polinomio
//    Polinomio();
    
    ///Constructor  de Polinomio
    Polinomio(int gradoMayor, int* coeficientes);
    
    ///Destructor de Polinomio
    virtual ~Polinomio();
    
    ///Atributos de Polinomio
    int gradoMayor;
    int* coeficientes;
    
    ///Funciones de Polinomio
    Polinomio operator+(const Polinomio& other);
    Polinomio operator-(const Polinomio& other);
    Polinomio operator*(const Polinomio& other);
    Polinomio operator/(const Polinomio& other);
    void operator~();
};

#endif /* POLINOMIO_H */
