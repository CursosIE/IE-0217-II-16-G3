/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Astar.h"

Astar::Astar(){
    Mapa = new Matrix(20);
}

Astar::Astar(int tam, int start_x, int start_y, int goal_x, int goal_y){
    Mapa = new Matrix(tam);
    Mapa->matrix[start_x][start_y].set_start();
    Mapa->matrix[goal_x][goal_y].set_goal();
    //Obtención de la heuristica (H Value) de los nodos mediante distancia de Manhattan
    for(int i = 0; i < Mapa->size ; i++){
        for(int j=0; j< Mapa->size ;j++){
            Mapa->matrix[i][j].H_value=Mapa->get_H_value(Mapa->matrix[i][j],Mapa->matrix[goal_x][goal_y]);
        }
    }
}

Astar::~Astar() {
}