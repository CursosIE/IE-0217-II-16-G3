
/*
 * File:   main.cpp
 * Author: esteban
 *
 * Created on September 17, 2016, 6:45 PM
 */

#include <cstdlib>
#include "Calculadora.h"
#include "Fraccion.h"
#include "Polinomio.h"
#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    ///Calculadora
    cout << "---------CALCULADORA---------" << endl;
    Calculadora<int>* calc = new Calculadora<int>();
    ///Operaciones básicas Calculadora

    cout << "Operaciones básicas calculadora"<<endl;


    cout << "6+2= " << calc->add(6, 2) << endl;
    cout << "6-2= " << calc->sub(6, 2) << endl;
    cout << "6*2= " << calc->mul(6, 2) << endl;
    cout << "6/2= " << calc->div(6, 2) << endl;
    //calc->print(10);//solo es una demostración de que la función print de calculadora funciona

    delete calc;

    Fraccion F1 =  Fraccion(6,5);
    Fraccion F2 =  Fraccion(4,7);
    Fraccion F3 =  Fraccion(1,1);

    Calculadora<Fraccion>* f = new Calculadora<Fraccion>();

    cout << "---------FRACCION---------" << endl;
    cout << "F1" << endl;
    ~(F1);
    cout << "======" << endl;
    cout << "F2" << endl;
    ~(F2);
    cout << "======" << endl;
    cout << "F1 + F2" << endl;
    F3=f->add(F1,F2);
    ~(F3);
    cout << "======" << endl;
    cout << "F1 - F2" << endl;
    F3=f->sub(F1,F2);
    ~(F3);
    cout << "======" << endl;
    cout << "F1 * F2" << endl;
    F3=f->mul(F1,F2);
    ~(F3);
    cout << "======" << endl;
    cout << "F1 /F2" << endl;
    F3=f->div(F1,F2);
    ~(F3);

    delete f;

    cout << "---------POLINOMIO---------" << endl;
    int pol[4] = {0, -8, 6, 4 };
    int pol2[2] = {0, 2};
    Polinomio P1 = Polinomio(3, pol);
    Polinomio P2 = Polinomio(1,pol2);

    Calculadora<Polinomio>* p = new Calculadora<Polinomio>;
    cout << "P1" << endl;
    ~(P1);
    cout << "======" << endl;
    cout << "P2" << endl;
    ~(P2);
    cout << "======" << endl;
    cout << "P1 + P2" << endl;
    Polinomio P3 = p->add(P1,P2);
    ~(P3);
    cout << "======" << endl;
    cout << "P1 - P2" << endl;
    P3 = p->sub(P1,P2);
    ~(P3);
    cout << "======" << endl;
    cout << "P1 * P2" << endl;
    P3 = p->mul(P1,P2);
    ~(P3);
    cout << "======" << endl;
    cout << "P1 / P2" << endl;
    P3 = p->div(P1,P2);
    ~(P3);

    delete p;

    cout << "---------MATRIZ---------" << endl;
    //Construcción arreglo 2d para Matriz 1
    int** cont1 = new int*[3];
    for (int i = 0; i < 3; i++) {
        cont1[i] = new int[3];
    }
    //Construcción arreglo 2d para Matriz 2
    int** cont2 = new int*[3];
    for (int i = 0; i < 3; i++) {
        cont2[i] = new int[3];
    }

    //Asignación valores Matriz 1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cont1[i][j] = 8;
        }
    }

    //Asignación valores Matriz 2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cont2[i][j] = 4;
        }
    }

    //Construcción Matriz 1
    Matriz M1 = Matriz(3, 3, cont1);

    //Construcción Matriz 2
    Matriz M2 = Matriz(3, 3, cont2);

    //Impresión Matriz 1 y Matriz 2
    cout << "Matriz 1" << endl;
    ~(M1);
    cout << "======" << endl;
    cout << "Matriz 2" << endl;
    ~(M2);

    Calculadora<Matriz>* m= new Calculadora<Matriz>;

    cout << "======" << endl;
    cout << "M1 + M2" << endl;
    Matriz M3= m->add(M1,M2);
    ~(M3);

    cout << "======" << endl;
    cout << "M1 - M2" << endl;
    M3= m->sub(M1,M2);
    ~(M3);

    cout << "======" << endl;
    cout << "M1 * M2" << endl;
    M3= m->mul(M1,M2);
    ~(M3);

    cout << "======" << endl;
    cout << "M1 / M2" << endl;
    M3= m->div(M1,M2);
    ~(M3);

    delete m;

    return 0;
}
