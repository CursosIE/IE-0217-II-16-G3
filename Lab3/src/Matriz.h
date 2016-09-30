
/* 
 * File:   Matriz.h
 * Author: esteban
 *
 * Created on September 17, 2016, 6:58 PM
 */

#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

class Matriz{
public:
    
    ///Constructor vacío de Matriz
    Matriz();
    
    ///Constructor de Matriz
    Matriz(int filas, int columnas, int** contenido);
    
    ///Destructor de Matriz
    virtual ~Matriz();
    
    ///Atributos de Matriz
    int filas;
    int columnas;
    int** contenido;
    
    ///Funciones de Matriz
    Matriz operator+(const Matriz&);
    Matriz operator-(const Matriz&);
    Matriz operator*(const Matriz&);
    Matriz operator/(const Matriz&);
    void operator~();

};

#endif /* MATRIZ_H */

