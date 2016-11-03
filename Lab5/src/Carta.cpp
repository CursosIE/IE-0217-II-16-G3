/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Carta.h"

Carta::Carta() {
}

Carta::Carta(int valor, string nombre, string palo){
	this->valor = valor;
	this->nombre = nombre;
	this->palo = palo;

}

Carta::~Carta(){
}

void Carta::imprimir(){
	cout<< "Nombre de la carta es: " << this->nombre <<endl;
	cout<< "Valor de la carta es: " << this->valor <<endl;
	cout<< "El palo de la carta es: " << this->palo <<endl;
//Los palos pueden ser: espada,corazon,diamante y trebol
}