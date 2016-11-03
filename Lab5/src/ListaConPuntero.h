/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaConPuntero.h
 * Author: laura
 *
 * Created on October 28, 2016, 9:28 AM
 */

#ifndef LISTACONPUNTERO_H
#define LISTACONPUNTERO_H
#include "Lista.h"
#include "Celda.h"

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

template <typename T>
class ListaConPuntero : public Lista<T>{
public:
    
    Celda<T>* ultima;
    Celda<T>* primera;
    Celda<T>* anterior;
    int tam;
    

ListaConPuntero(const ListaConPuntero& orig) {
}

~ListaConPuntero() {
    Celda<T>* ultima=NULL;
    Celda<T>* primera=NULL;
    tam = 0;
}


ListaConPuntero(int N) {
    Celda<T>* ultima=NULL;
    Celda<T>* primera=NULL;
    
    tam = N;

}

void agregar(T e) { //Se agrega al final
    Celda<T>* temp;
    if(this->primera==NULL){ //si es el primer elemento ingresado:
        Celda<T>* Casilla0 = new Celda<T>(e);
        this->primera =  Casilla0; //el unico elemento de la lista es la cabeza
        this->ultima= Casilla0; // y es la cola tambien
    }
    else{  // si hay mas elementos, se agrega al final
        
        Celda<T>* CasillaNueva= new Celda<T>(e);	
			
        Celda<T>* temp= ultima;		
		
        while (temp->siguiete!=NULL) {
            temp= temp->siguiete;
        }
        
        temp->siguiete= CasillaNueva;
    }
    tam++;
         
}

virtual void eliminar() { //se elimina el ultimo elemento
    if(tam>0){
        Celda<T>* temp_penultima;		
        Celda<T>* temp= primera;		

        while (temp->siguiete!=NULL) {
            temp_penultima= temp;
                temp= temp->siguiete;
        }
        ///////////////////////////////////////////////////
        temp_penultima->siguiete= NULL;
        delete temp;
        tam--;
    }
}   

T ultimo_elemento(){
    return this->ultima->valor;
}


void imprimir() { //recorre segun los punteros de la siguiente casilla, hasta llegar a un NULL.
   Celda<T>* Casilla= this->primera;
   int cont= 0;
   while(Casilla!=NULL && cont<=tam-1){
       cont++;
       cout << Casilla->valor << "\t";
       
       if(Casilla->siguiete!=NULL){
            Casilla = Casilla->siguiete;
       }
   }
   std::cout << std::endl;
}
    
   

};

#endif /* LISTACONPUNTERO_H */
