/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jugador.h
 * Author: esteban
 *
 * Created on October 31, 2016, 9:49 AM
 */

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador{
    public: 
    ///Constructor vacío de Jugador
    Jugador();
    
    ///Constructor de Jugador
    Jugador(char id);
        
    ///Destructor de Portero
    virtual ~Jugador();
    
    ///Atributos del Potero
    int acumulado;
    char id;
    int estado;
    
    ///Función cuando un jugador pierde
    void perder();
};

#endif /* JUGADOR_H */
