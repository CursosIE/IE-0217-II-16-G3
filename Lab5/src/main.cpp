/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: esteban
 *
 * Created on October 29, 2016, 1:32 PM
 */

#include <cstdlib>
#include"Carta.h"
#include "Mazo.h"
#include "ListaConArreglo.h"
#include "ListaConPuntero.h"
#include "Portero.h"
#include "Jugador.h"
#include "Mesa.h"
int main(int argc, char** argv) {
    
    int i=0;
    int len=0;
    int contEjecutivo=0;
    int contTrabajador=0;
    int contDesempleado=0;
    
    ///Para contar el numero de clientes y cuantos ejecutivos, trabajadores y desempleados hay
    while(argv[1][i]!='\0'){
        if(argv[1][i]=='e'||argv[1][i]=='E'){
            contEjecutivo++;
        }
        if(argv[1][i]=='t'||argv[1][i]=='T'){
            contTrabajador++;
        }
        if(argv[1][i]=='d'||argv[1][i]=='D'){
            contDesempleado++;
        }
        len++;
        i++;
    }
    cout<< "Largo fila: " << len << endl;
    cout<< "Ejecutivos: " << contEjecutivo<<endl;
    cout<< "Trabajadores: " << contTrabajador<<endl;
    cout<< "Desempleados: " << contDesempleado<<endl;
    
    ///Creación mazos
    Mazo mazo1= Mazo();
    Mazo mazo2= Mazo();
    Mazo mazo3= Mazo();
    
    
    ///Creación portero
    Portero P = Portero(argv[1],len,contEjecutivo,contTrabajador,contDesempleado);
    P.categorizar();
    
    ///Creación de un arreglo de objetos tipo Jugador
    Jugador* jugadores[len];
    int a=0;
    for(int i=0; i<len;i++){
        jugadores[i]= new Jugador(P.sala_final.recuperar(i));
        a++;
    }
    int* esperando_turno=new int[1];
    esperando_turno[0]=a-9;
    int b=a-9;
    
    ///Creación mesas
    Mesa casino= Mesa();
    
    Mesa* mesa1 = new Mesa(jugadores[0],jugadores[1],jugadores[2],mazo1);
    Mesa* mesa2 = new Mesa(jugadores[3],jugadores[4],jugadores[5],mazo2);
    Mesa* mesa3 = new Mesa(jugadores[6],jugadores[7],jugadores[8],mazo3);
    
    casino.jugar(P,mesa1,mesa2,mesa3);      

    
    //PARA JUGAR VARIAS MANOS, SE VERIFICA CUALES JUGADORES PERDIERON Y SE REEMPLAZAN POR LOS QUE ESTAN ESPERANDO
    while(esperando_turno[0]>0){
        //Verificacion mesa 2

        if(mesa1->jugador1->estado==2){
            Mesa* mesa1=new Mesa(jugadores[b],jugadores[1],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa1->jugador2->estado==2){
            Mesa* mesa1=new Mesa(jugadores[0],jugadores[b],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa1->jugador3->estado==2){
            Mesa* mesa1=new Mesa(jugadores[0],jugadores[1],jugadores[b],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        //Verificacion mesa 2
        if(mesa2->jugador1->estado==2){
            Mesa* mesa2=new Mesa(jugadores[b],jugadores[1],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa2->jugador2->estado==2){
            Mesa* mesa2=new Mesa(jugadores[0],jugadores[b],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa2->jugador3->estado==2){
            Mesa* mesa2=new Mesa(jugadores[0],jugadores[1],jugadores[b],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }        
        
        //Verificacion mesa 3
        if(mesa3->jugador1->estado==2){
            Mesa* mesa3=new Mesa(jugadores[b],jugadores[1],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa3->jugador2->estado==2){
            Mesa* mesa3=new Mesa(jugadores[0],jugadores[b],jugadores[2],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        if(mesa3->jugador3->estado==2){
            Mesa* mesa3=new Mesa(jugadores[0],jugadores[1],jugadores[b],mazo1);
            esperando_turno[0]=esperando_turno[0]-1;
            b++;
        }
        casino.jugar(P,mesa1,mesa2,mesa3);
    }
    return 0;
}
