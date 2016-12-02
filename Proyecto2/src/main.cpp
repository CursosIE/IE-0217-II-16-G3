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
    
    Astar A = Astar(6,0,5,4,5);//tamano 6, 0 y 5 coordenadas nodo inicial, 4 y 5 coordenadas nodo final

    A.Mapa->print_types();
    return 0;
}
