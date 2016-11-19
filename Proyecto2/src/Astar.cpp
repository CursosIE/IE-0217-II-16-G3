/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Astar.h"

Astar::Astar() {
    Mapa = new Matrix(20);
}

int Astar::Find_Node_Open_List(const Node a) {
    int b = 0;
    vector<Node>::iterator it;
    it = find(OpenList.begin(), OpenList.end(), a);
    if (it != OpenList.end()) {
        b = 1;
    } else {
        b = 0;
    }
    return b;
}

int Astar::Find_Node_Closed_List(const Node a) {
    int b = 0;
    vector<Node>::iterator it;
    it = find(ClosedList.begin(), ClosedList.end(), a);
    if (it != ClosedList.end()) {
        b = 1;
    } else {
        b = 0;
    }
    return b;
}

void Astar::Add_To_Closed_List(Node actual) {
    ClosedList.push_back(actual);
}

void Astar::Add_neighbourgs_open_list(Node actual) {
    //Agrega los nodos de la vecindad del inicial a la openList
    for (int i = actual.pos_x - 1; i <= actual.pos_x + 1; i++) {
        for (int j = actual.pos_y - 1; j <= actual.pos_y + 1; j++) {
            if (i == actual.pos_x && j == actual.pos_y) {
            } else {
                if (Find_Node_Closed_List(Mapa->matrix[i][j]) == 0) {
                    OpenList.push_back(Mapa->matrix[i][j]);

                }
            }
        }
    }

}

void Astar::Set_Parent_G_Value(Node actual) {
    //Hace que el padre de todos estos nodos de la vecindad sea el inicial
    for (int i = actual.pos_x - 1; i <= actual.pos_x + 1; i++) {
        for (int j = actual.pos_y - 1; j <= actual.pos_y + 1; j++) {
            if (i == actual.pos_x && j == actual.pos_y) {
            } else {
                if (Find_Node_Closed_List(Mapa->matrix[i][j]) == 0) {
                    Mapa->matrix[i][j].set_parent(&Mapa->matrix[actual.pos_x][actual.pos_y]); //Ese ampersand esta bien????
                    Mapa->matrix[i][j].G_value = Mapa->get_Movement_value(Mapa->matrix[actual.pos_x][actual.pos_y], Mapa->matrix[i][j]);
                }
            }
        }
    }

}

Astar::Astar(int tam, int start_x, int start_y, int goal_x, int goal_y) {
    Mapa = new Matrix(tam);
    Mapa->matrix[start_x][start_y].set_start();
    Mapa->matrix[goal_x][goal_y].set_goal();
    //Obtención de la heuristica (H Value) de los nodos mediante distancia de Manhattan
    for (int i = 0; i < Mapa->size; i++) {
        for (int j = 0; j < Mapa->size; j++) {
            Mapa->matrix[i][j].H_value = Mapa->get_H_value(Mapa->matrix[i][j], Mapa->matrix[goal_x][goal_y]);
        }
    }
    //Agrega el nodo inicial a la closed list

    Add_To_Closed_List(Mapa->matrix[start_x][start_y]);

    //Agrega los nodos de la vecindad del inicial a la openList
    Add_neighbourgs_open_list(Mapa->matrix[start_x][start_y]);
    
    Set_Parent_G_Value(Mapa->matrix[start_x][start_y]);
}

Astar::~Astar() {
}