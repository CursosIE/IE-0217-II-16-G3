/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: esteban
 *
 * Created on October 7, 2016, 4:18 PM
 */

#include "JuegoDeLaVida.h"
using namespace std;
int main(int argc, char *argv[]) {
    
    
    
    cout << "Juego de la vida" << endl << "-----------------------" << endl;
    ///Construcción arreglo 2d para el tablero
    int dimension=22;
    int** cont = new int*[dimension];
    for (int i = 0; i < dimension; i++) {
        cont[i] = new int[dimension];
    }
    
    ///Inicialización valores tablero valores Tablero
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cont[i][j] = 0;
        }
    }
    //*******************************************************//
    ///Construcción patrones
    ///Patrón bloques centrales oscilantes
//    cont[3][3]=1;
//    cont[3][4]=1;
//    cont[4][3]=1;
//    cont[4][4]=1;
//    
//    cont[5][5]=1;
//    cont[5][6]=1;
//    cont[6][5]=1;
//    cont[6][6]=1;
    
    ///Patrón linea oscilante vertical-horizontal
//    cont[5][4]=1;
//    cont[5][5]=1;
//    cont[5][6]=1;
    
    //Patrón "small exploder"
    cont[8][10]=1;
    cont[9][9]=1;
    cont[9][10]=1;
    cont[9][11]=1;
    cont[10][9]=1;
    cont[10][11]=1;
    cont[11][10]=1;
    
    //Patrón "10-cell row"
//    for(int i = 5 ; i < 15 ; i ++){
//    cont[10][i]=1;
//    }
    
    
    ///Construcción e impresión estado inicial tablero
    
    cout <<"******Patron inicial*****"<<endl;
    JuegoDeLaVida* J1=new JuegoDeLaVida(dimension,cont);
    J1->Imprimir(*J1);
    cout <<"************************"<<endl;

    /////////////////////////////////////////////
    
    J1->Iniciar(*J1,20);
     
    cout<<"-----------------------"<<endl;
    return 0;
}
