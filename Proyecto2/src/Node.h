/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: esteban
 *
 * Created on November 15, 2016, 2:30 PM
 */

#ifndef NODE_H
#define NODE_H

class Node {
public:

    int F_value;
    int G_value;
    int H_value;
    int type; ///0 para nodo normal,1 para start, 2 para goal, 3 para obstaculo y 4 para path
    Node* parent;
    int pos_x;
    int pos_y;

    Node();
    
    Node(int x, int y);

    Node(int f, int g, int h, int type, Node* father);
    

    virtual ~Node();

    void set_parent(Node* p);
    
    void set_start();
    
    void set_goal();
    
    void set_obstacle();
    
    int operator==(const Node &N);
    
private:

};

#endif /* NODE_H */

