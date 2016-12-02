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
    pos_x=0;
    pos_y=0;
}

Node::Node(const Node &N){
    F_value = N.F_value;
    G_value = N.G_value;
    H_value = N.H_value;
    parent = N.parent;
    type = N.type;
    pos_x=N.pos_x;
    pos_y=N.pos_y;
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

int Node::operator==(const Node &N) const{
    if(this->pos_x==N.pos_x && this->pos_y==N.pos_y){
        return 1;
    }
    else{
        return 0;
    }
    
}

Node& Node::operator=(const Node &N) {
    this->F_value=N.F_value;
    this->G_value=N.G_value;
    this->H_value=N.H_value;
    this->type=N.type;
    this->pos_x=N.pos_x;
    this->pos_y=N.pos_y;    
    this->parent=N.parent;
    return *this;
    }

int Node::operator!=(const Node &N) const{
    if(this->pos_x!=N.pos_x || this->pos_y!=N.pos_y){
        return 1;
    }
    else{
        return 0;
    }
    
}

int Node::operator<(const Node &N) const{
    if(this->F_value < N.F_value){
        return 1;
    }
    else{
        return 0;
    }
    
}

int Node::operator>(const Node &N) const{
    if(this->F_value > N.F_value){
        return 1;
    }
    else{
        return 0;
    }
    
}

Node::~Node(){
    //delete this->parent;

}

void Node::set_parent(Node p){
    this->parent=&p;
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