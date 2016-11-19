/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: esteban
 *
 * Created on November 15, 2016, 2:15 PM
 */

#include <cstdlib>

#include "Matrix.h"
#include "Astar.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /*Matrix M = Matrix(10);
    M.print();*/
    
    Astar A = Astar(10,1,1,5,5);
    A.Mapa->print_types();
    A.Mapa->print_H_values();
    A.Mapa->print_G_values();    
    return 0;
}

