/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Matrix.h"
#include <string.h>
#include <iostream>
using namespace std;

Matrix::Matrix(int tam){
    ///Creacion de la matriz
    matrix = new Node*[tam];
    size = tam;

    
    for (int i = 0; i < size; i++) {
        matrix[i] = new Node[size];
        }
    ///Inicializacion
    for(int row=0;row<size;row++){
        for (int column=0;column<size;column++){
            matrix[row][column]= Node(row,column);

        }
    }
    
}

Matrix::~Matrix() {
    delete matrix;
}

int Matrix::get_G_value(Node actual, Node padre){
    int g = padre.G_value+actual.G_value;
}

int Matrix::get_Movement_value(Node a, Node b){
    int m=0;
    if(a.pos_x==b.pos_x || a.pos_y==b.pos_y){
        m=10;
    }
    else{
        m=14;
    }
    return m;
}
    
int Matrix::get_H_value(Node actual, Node final){
    int h = abs((final.pos_y-actual.pos_y))+abs((final.pos_x-actual.pos_x));
    return h;
}
    
int Matrix::get_F_value(Node actual){
    int f = actual.G_value+actual.H_value;
    return f;
}

void Matrix::print_types(){
    cout<<"------------------------ MAPA INICIAL ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].type<< "\t";
        }
        cout << endl;
        cout << endl;
        
    }
    //cout<<"------------------------"<<endl;
}

void Matrix::print_G_values(){
    cout<<"------------------------ G_VALUES ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].G_value<< "\t";
        }
        cout << endl;
        cout << endl;
    }
    //cout<<"------------------------"<<endl;
}

void Matrix::print_H_values(){
    cout<<"------------------------ H_VALUES ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].H_value<< "\t";
        }
        cout << endl;
        cout << endl;        
    }
    //cout<<"------------------------"<<endl;
}

void Matrix::print_F_values(){
    cout<<"------------------------ F_VALUES ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].F_value<< "\t";
        }
        cout << endl;
        cout << endl;
    }
    //cout<<"------------------------"<<endl;
}