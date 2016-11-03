#include "Lista.h"
#include "ListaConArreglo.h"
#include "ListaConPuntero.h"
#include "Portero.h"

#include <list>
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

Portero::Portero() {
  
}

Portero::Portero(char* fila_consola, int cantidad_clientes,int ej, int tr, int de) {
  this->cantidad_clientes=cantidad_clientes;
  this->fila= fila_consola;
  this->ejecutivos = 0;
  this->trabajadores = 0;
  this->desempleados = 0;
  this->sala_espera_E =  ListaConArreglo<char>(ej);
  this->sala_espera_T =  ListaConArreglo<char>(tr);
  this->sala_espera_D =  ListaConArreglo<char>(de);

}

Portero::~Portero() {
}



void Portero::categorizar() { 
    int i;
    //Divide los clientes en las categorias
    for (i=0; i<cantidad_clientes; i++){
        if(this->fila[i]=='E'){
            sala_espera_E.agregar('E');
            ejecutivos++;
        }
        if(this->fila[i]=='T'){
            sala_espera_T.agregar('T');
            trabajadores++;
        }
        if(this->fila[i]=='D'){
            sala_espera_D.agregar('D');
            desempleados++;
        }
    }
    //hace una lista final lista para hacer pops
    int temp=0;
    for(int D=0; D<cantidad_clientes; D++){
        while(temp<2){
        for(int E=0; E<2; E++){
            if(ejecutivos>0){
                this->sala_final.agregar('E');
                ejecutivos--;
            }
        }
        for(int T=0; T<1; T++){
        if(trabajadores>0){
            this->sala_final.agregar('T');
            trabajadores--;
        }
        }
        temp++;
        }
        temp=0;
        if(desempleados>0){
            this->sala_final.agregar('D');
            desempleados--;
        }
    }

    cout<<"***Fila de espera***"<<endl;
    this->sala_final.imprimir();
    
}



void Portero::eliminardeCola() { 
    this->sala_final.eliminar();
    cantidad_clientes--;
}

char Portero::tipo(int k){
    this->sala_final.recuperar(k);
}
