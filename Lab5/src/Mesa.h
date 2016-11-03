/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mesa.h
 * Author: esteban
 *
 * Created on October 31, 2016, 9:34 AM
 */

#ifndef MESA_H
#define MESA_H
#include "Mazo.h"
#include "Jugador.h"
#include "Portero.h" 

class Mesa{
    
public: 
    ///Constructor vacío de Mesa
    Mesa();
    
    ///Contructor de Mesa
    Mesa(Jugador* J1,Jugador* J2,Jugador* J3, Mazo M1);
        
    ///Destructor de Portero
    virtual ~Mesa();
    
    ///Atributos de Mesa
    int cantidad_jugadores;
    Jugador* jugador1;
    Jugador* jugador2;
    Jugador* jugador3;
    Mazo baraja;
    
    ///Función cuando un jugador pierde
    void jugar(Portero sala_espera,Mesa* M1, Mesa* M2, Mesa* M3);
    void imprimir_estado();
};


#endif /* MESA_H */
