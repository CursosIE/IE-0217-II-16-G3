#ifndef CELDA_H
#define CELDA_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Lista.h"

template <typename T>
class Celda { 
public:
    T valor;
    Celda<T>* siguiete;
    Celda<T>* anterior;
    
Celda() {
    Celda<T>* siguiente = NULL;
    Celda<T>* anterior = NULL;
}

Celda(T valor) {
    this->valor= valor;
    Celda<T>* siguiente = NULL;
    Celda<T>* anterior = NULL;
}

Celda(const Celda& orig) {
}

~Celda() {
}

}; 
#endif /* CELDA_H */
