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

//Matrix::Matrix(const Matrix &M){
//}

Matrix::~Matrix() {
    delete matrix;
}

void Matrix::set_G_value(Node &start){
    int dx;
    int dy;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(matrix[i][j].type!=3){
                dx = abs(start.pos_x-i);
                dy = abs(start.pos_y-j);
                if (i==start.pos_y || j== start.pos_x){
                    if(dx>dy){
                        matrix[i][j].G_value= 14*dx+10*(dx-dy);
                    }
                    else{
                        matrix[i][j].G_value= 14*dy+10*(dy-dx);
                    }
                }
                else{
                    matrix[i][j].G_value= 10*(dx+dy);
                }
            }
        }
    }
}


int Matrix::get_G_value(int actual_G , int padre_G){
    
    int g = actual_G + padre_G;

    return g;
}


int Matrix::get_Movement_value(Node &a, Node &padre){
    int m=0;
    if(a.pos_x==padre.pos_x || a.pos_y==padre.pos_y){
        m=10;
    }
    else{
        m=14;
    }
    return m;
}
    
int Matrix::get_H_value(Node &actual, Node &final){
    int h = abs((final.pos_y-actual.pos_y))+abs((final.pos_x-actual.pos_x));
    return h;
}
    
int Matrix::get_F_value(Node &actual){
    int f = actual.G_value+actual.H_value;
    return f;
}

void Matrix::print_types(){
    ofstream myfile ("out.txt", ios::app);//**NUEVO**
    myfile<< "$"<<endl;//**NUEVO**       
    cout<<"------------------------ MAPA ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].type<< "\t";
           myfile << matrix[i][j].type;//**NUEVO**                      
        }
        cout << endl;
        cout << endl;
        myfile<< endl;//**NUEVO**                
        
    }
        myfile<<"@"<<endl;
    //cout<<"------------------------"<<endl;
    myfile.close();//**NUEVO**        
    
}

void Matrix::print_G_values(){
    cout<<"------------------------ G_VALUES ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
           cout << matrix[i][j].type<< "\t";
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

void Matrix::print_parents(){
    cout<<"------------------------ PADRES ------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
            if(!matrix[i][j].parent){
                cout << "--" << "\t";
            }
            else{
                cout << matrix[i][j].parent->pos_x<< " " <<matrix[i][j].parent->pos_y<< "\t";
            }
        }
        cout << endl;
        cout << endl;
    }
    //cout<<"------------------------"<<endl;
}