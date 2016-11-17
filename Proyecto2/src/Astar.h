/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Astar.h
 * Author: esteban
 *
 * Created on November 16, 2016, 4:21 PM
 */
#include "Matrix.h"
#include "ListaConArreglo.h"
#ifndef ASTAR_H
#define ASTAR_H

class Astar{
public:
    ListaConArreglo<Node>* OpenList;
    ListaConArreglo<Node>* ClosedList;
    ListaConArreglo<Node>* Path;
    Matrix* Mapa;
    
    Astar();
    
    Astar(int tam, int start_x, int start_y, int goal_x, int goal_y);
    
    virtual ~Astar();
    
};

#endif /* ASTAR_H */

