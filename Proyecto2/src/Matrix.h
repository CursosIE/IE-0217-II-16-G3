/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: esteban
 *
 * Created on November 15, 2016, 2:55 PM
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string.h>
using namespace std;
#include "Node.h"
#include <cmath>        // std::abs

class Matrix {
public:

    Matrix(int tam);

    virtual ~Matrix();
    
    Node** matrix;
    
    int size;
    
    int get_G_value(Node actual,Node Padre);
    
    int get_H_value(Node actual, Node final);
    
    int get_F_value(Node actual);
    
    void print_types();
    void print_G_values();
    void print_H_values();
    void print_F_values();

};

#endif /* MATRIX_H */

