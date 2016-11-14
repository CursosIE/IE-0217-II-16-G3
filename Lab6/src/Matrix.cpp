#include "Matrix.h"

#include <string.h>
#include <iostream>
using namespace std;

Matrix::Matrix(int tam){
    matrix = new int*[tam];
    size = tam;

    
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        }
    
    for(int row=0;row<size;row++){
        for (int column=0;column<size;column++){
            matrix[row][column]= 0;

        }
    }
    
}

Matrix::Matrix(int** values, int tam) {

    matrix = values;
    size= tam;

}

Matrix::~Matrix() {
    delete matrix;
}

void Matrix::change_size(int new_size){

    int** temp= new int*[new_size];
      for (int i = 0; i < new_size; i++) {
        temp[i] = new int[new_size];
        }
    

    for(int row=0;row<new_size;row++){
        for (int column=0;column<new_size;column++){
            if(row<size && column<size){
                temp[row][column]=matrix[row][column];
            }
            else{
                temp[row][column]= 0;
            }
        }
    }

    matrix = temp;
    size = new_size;
}

void Matrix::remove_rowcolumn(int rc){
    int** temp= new int*[this->size-1];
    
    for (int i = 0; i < this->size-1; i++) {
      temp[i] = new int[this->size-1];
    }
    
    int hor;
    int ver;
    
     for(int row=0;row<(this->size-1);row++){
        for (int column=0;column<this->size-1;column++){
            hor=row;
            ver=column;
            
            if(row>=(rc-1)){
                hor++;
            }
            if(column>=(rc-1)){
                ver++;
            }
            temp[row][column]=matrix[hor][ver];           
        }
    }
    
    matrix=temp;
    size= size-1;
    
}

int* Matrix::find_edge(int e){

    for(int row=0;row<size;row++){
        for (int column=0;column<size;column++){
            if(matrix[row][column]== e){
                return &(matrix[row][column]);
            }
        }
    }
    return 0x0;
}

void Matrix::print(){
    cout<<"------------------------"<<endl;
     for(int i = 0; i < size; i++){
        for(int j=0; j< size ;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"------------------------"<<endl;
}