/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mazo.h
 * Author: esteban
 *
 * Created on October 29, 2016, 2:14 PM
 */

#ifndef MAZO_H
#define MAZO_H
#include "Carta.h"
#include <string>
#include "ListaConArreglo.h"
#include "ListaConPuntero.h"
#include <algorithm>


class Mazo{
public:
    ///Constructor de Mazo
	Mazo();
    ///Destructor de Mazo
	virtual ~Mazo();
    ///Atributos
        Carta AsDeEspada;
        Carta AsDeCorazon;
        Carta AsDeTrebol;
        Carta AsDeDiamante;

        Carta DosDeEspada;
        Carta DosDeCorazon;
        Carta DosDeTrebol;
        Carta DosDeDiamante;

        Carta TresDeEspada;
        Carta TresDeCorazon;
        Carta TresDeTrebol;
        Carta TresDeDiamante;

        Carta CuatroDeEspada;
        Carta CuatroDeCorazon;
        Carta CuatroDeTrebol;
        Carta CuatroDeDiamante;

        Carta CincoDeEspada;
        Carta CincoDeCorazon;
        Carta CincoDeTrebol;
        Carta CincoDeDiamante;

        Carta SeisDeEspada;
        Carta SeisDeCorazon;
        Carta SeisDeTrebol;
        Carta SeisDeDiamante;

        Carta SieteDeEspada;
        Carta SieteDeCorazon;
        Carta SieteDeTrebol;
        Carta SieteDeDiamante;

        Carta OchoDeEspada;
        Carta OchoDeCorazon;
        Carta OchoDeTrebol;
        Carta OchoDeDiamante;

        Carta NueveDeEspada;
        Carta NueveDeCorazon;
        Carta NueveDeTrebol;
        Carta NueveDeDiamante;

        Carta DiezDeEspada;
        Carta DiezDeCorazon;
        Carta DiezDeTrebol;
        Carta DiezDeDiamante;

        Carta JotaDeEspada;
        Carta JotaDeCorazon;
        Carta JotaDeTrebol;
        Carta JotaDeDiamante;

        Carta QuinaDeEspada;
        Carta QuinaDeCorazon;
        Carta QuinaDeTrebol;
        Carta QuinaDeDiamante;

        Carta KaDeEspada;
        Carta KaDeCorazon;
        Carta KaDeTrebol;
        Carta KaDeDiamante;
        
        Carta* baraja = new Carta[52];
        
        
    ///Funciones
        void barajar();
        void print();
};

#endif /* MAZO_H */
