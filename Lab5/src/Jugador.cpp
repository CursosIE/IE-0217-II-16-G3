/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Jugador.h"


Jugador::Jugador(){

}

Jugador::Jugador(char id){
    this->id=id;
    this->acumulado=0;
    this->estado=0;
}

Jugador::~Jugador(){
    
}

void Jugador::perder(){
    this->estado=2;
}