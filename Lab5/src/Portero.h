/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Portero.h
 * Author: esteban
 *
 * Created on November 1, 2016, 11:41 AM
 */

#ifndef PORTERO_H
#define PORTERO_H

#include "Lista.h"
#include "ListaConArreglo.h"
#include "ListaConPuntero.h"


class Portero{
    
public: 
    ///Contructor vacío de Porterno
    Portero();
    
    ///Contructor de Portero
    Portero(char* fila_consola, int cantidad_clientes,int ej, int tr, int de);
        
    ///Destructor de Portero
    virtual ~Portero();
    
    ///Atributos del Potero
    char* fila;
    ListaConArreglo<char> sala_espera_E;
    ListaConArreglo<char> sala_espera_T;
    ListaConArreglo<char> sala_espera_D;
    ListaConArreglo<char> sala_final;
    
    int cantidad_clientes;
    int ejecutivos;
    int trabajadores;
    int desempleados;
    
    ///Función de agregar a sala de espera
    void categorizar();
 
    ///Función de sacar de Cola/Sala/Casino
    void eliminardeCola();
    
    char tipo(int k);
};

#endif /* PORTERO_H */

