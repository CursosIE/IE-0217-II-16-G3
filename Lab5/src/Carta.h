/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.h
 * Author: esteban
 *
 * Created on October 29, 2016, 1:35 PM
 */

#ifndef CARTA_H
#define CARTA_H

#include <iostream>
using namespace std;
#include <string>

class Carta{
public:
    ///Constructores y destructores de Carta
	Carta();
	Carta(int valor, string nombre, string palo);
	virtual ~Carta();
    ///Atributos de Carta
	int valor;
	string nombre;
	string palo;
    ///Funciones de Carta
	void imprimir();

	
};


#endif /* CARTA_H */
