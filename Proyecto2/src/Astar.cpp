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

Node Astar::Get_Node_Open_List() {
    vector<Node>::iterator it;
    sort(OpenList.begin(), OpenList.end());
    it = OpenList.begin();
    return *it;
}

void Astar::Remove_Node_Open_List() {
    vector<Node>::iterator it; 
    it = OpenList.begin();
    OpenList.erase(it);
}


void Astar::Find_path(Node &current){
    
    if (current.type==0){
        current.type = 4;        
    }
    if(current.parent){
        Find_path(*current.parent);
    }
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

void Astar::Add_To_Open_List(Node actual) {
    OpenList.push_back(actual);
}


void Astar::Set_Parent_G_Value(Node actual) {
    //Hace que el padre de todos estos nodos de la vecindad sea el inicial
    for (int i = actual.pos_x - 1; i <= actual.pos_x + 1; i++) {
        for (int j = actual.pos_y - 1; j <= actual.pos_y + 1; j++) {
            if (i >= 0 && i < Mapa->size && j >= 0 && j < Mapa->size) {
                if (i == actual.pos_x && j == actual.pos_y) {
                } else {
                    if (Find_Node_Closed_List(Mapa->matrix[i][j]) == 0 && Find_Node_Open_List(Mapa->matrix[i][j])==0) {//Punto de inflexión
                        Mapa->matrix[i][j].parent= &(Mapa->matrix[actual.pos_x][actual.pos_y]); 
                        Mapa->matrix[i][j].G_value = Mapa->get_Movement_value(Mapa->matrix[actual.pos_x][actual.pos_y], Mapa->matrix[i][j]);
                    }
                }
            }
        }
    }
}

Astar::Astar(int tam, int start_x, int start_y, int goal_x, int goal_y) {
    Mapa = new Matrix(tam);
    Mapa->matrix[start_x][start_y].set_start();
    Mapa->matrix[goal_x][goal_y].set_goal();
    Mapa->set_G_value(Mapa->matrix[start_x][start_y]);    
    Mapa->matrix[3][2].set_obstacle();
    Mapa->matrix[3][3].set_obstacle();    
    Mapa->matrix[3][4].set_obstacle();
    Mapa->matrix[3][5].set_obstacle();

    
    

    //Obtención de la heuristica (H Value) de los nodos mediante distancia de Manhattan
    for (int i = 0; i < Mapa->size; i++) {
        for (int j = 0; j < Mapa->size; j++) {
            Mapa->matrix[i][j].H_value = Mapa->get_H_value(Mapa->matrix[i][j], Mapa->matrix[goal_x][goal_y]);
        }
    }


    //Agrega el nodo inicial a la closed list

    Add_To_Open_List(Mapa->matrix[start_x][start_y]);
    int confirm = 0;

    while(confirm!=1 ){
        confirm = Find_Node_Closed_List(Mapa->matrix[goal_x][goal_y]);
        current = Get_Node_Open_List();
        Add_To_Closed_List(current);
        Set_Parent_G_Value(current);

        if (!OpenList.empty()) {
            Remove_Node_Open_List();
        }
        for (int i = current.pos_x - 1; i <= current.pos_x + 1; i++) {
            for (int j = current.pos_y - 1; j <= current.pos_y + 1; j++) {
                if (i >= 0 && i < Mapa->size && j >= 0 && j < Mapa->size) {
                Node temp = Mapa->matrix[i][j];
                
                if(temp!=Mapa->matrix[start_x][start_y]){
                    if(temp.parent){
                    }
                    if (!(i == current.pos_x && j == current.pos_y)) {

                        if (temp.type == 3 || Find_Node_Closed_List(temp) == 1) {
                        }
                        else{
                            if (Mapa->get_Movement_value(current, temp) < Mapa->get_Movement_value(*(temp.parent), temp) || Find_Node_Open_List(temp) == 1) {

                                temp.parent = &current;
                                Mapa->matrix[i][j].G_value = Mapa->get_G_value(temp.G_value, temp.parent->G_value);
                                temp.F_value = temp.G_value + temp.H_value;
                            }
                            if (Find_Node_Open_List(temp) == 0 && temp.type!=1) {
                                Add_To_Open_List(temp);
                            }
                        }
                    }
                }
            }
                
        }
    }
}
    

    

    Find_path(current);   
}

Astar::~Astar() {
}
