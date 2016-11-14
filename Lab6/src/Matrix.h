#ifndef MATRIX_H
#define MATRIX_H

#include "ListaConArreglo.h"

#include <iostream>
#include <string.h>
using namespace std;

class Matrix {
public:

    Matrix(int tam);

    Matrix(int** values, int tam);

    virtual ~Matrix();
    
        
    int** matrix;
    int size;

    
    void change_size(int new_size);
    
    void remove_rowcolumn(int row);
    
    int* find_edge(int e);
    
    void print();

};

#endif /* MATRIX_H */

