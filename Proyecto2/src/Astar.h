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
#include <vector>
#include <algorithm>
#ifndef ASTAR_H
#define ASTAR_H

class Astar{
public:
    vector<Node> OpenList;
    vector<Node> ClosedList;
    Matrix* Mapa;
    
    Astar();
    
    Astar(int tam, int start_x, int start_y, int goal_x, int goal_y);
    
    void Add_neighbourgs_open_list(Node actual);
    void Set_Parent_G_Value(Node actual);
    void Add_To_Closed_List(Node actual);
    
    int Find_Node_Open_List(const Node a);
    
    int Find_Node_Closed_List(const Node b);
    
    
    virtual ~Astar();
    
};

#endif /* ASTAR_H */

