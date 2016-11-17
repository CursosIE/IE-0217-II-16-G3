/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Node.h"

Node::Node(){
    F_value = 0;
    G_value = 0;
    H_value = 0;
    parent = 0x0;
    type = 0;
}

Node::Node(int x, int y){
    F_value = 0;
    G_value = 0;
    H_value = 0;
    parent = 0x0;
    type = 0;
    pos_x=x;
    pos_y=y;
}

Node::Node(int f, int g, int h, int type, Node* father){
    F_value = f;
    G_value = g;
    H_value = h;
    parent = father;
    type = type;
}

Node::~Node(){

}

void Node::set_parent(Node* p){
    this->parent=p;
}

void Node::set_start(){
   this->type=1; 
}

void Node::set_goal(){
    this->type=2;
}

void Node::set_obstacle(){
    this->type=3;
    this->G_value=1000000;
}