
#ifndef LISTACONARREGLO_H
#define LISTACONARREGLO_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Lista.h"

template<typename T>
class ListaConArreglo{
public:
    
    int tam;
    int ultimo;
    T* data; //almacenar los elementos
    
ListaConArreglo() {
    data = NULL;
    tam = 0;
    ultimo = -1;
}

ListaConArreglo(const ListaConArreglo& orig) {
}

virtual ~ListaConArreglo() {
}

ListaConArreglo(int N) {
    this->data = new T[N];
    tam = N;
    ultimo = tam - 1;
}

void agregar(T e) {
    if (data == 0) {
        data = new T[1];
        tam = 1;
        ultimo = 0;
        data[0] = e;
    } else {
        if (ultimo == tam - 1) {
            T* temp = new T[tam * 2];
            for (int i = 0; i < tam; i++) {
                temp[i] = data[i];
            }
            ultimo++;
            tam++;
            temp[ultimo] = e;
            delete data; 
            data = temp;
        } else {
            ultimo++;
            tam++;
            data[ultimo] = e;
        }
    }
}

void eliminarK(int k) {
    for (int i = k; i < tam - 1; i++) {
        data[i] = data[i + 1];
    }
    tam--;
    ultimo--;
}

virtual void eliminar() {
    eliminarK(0);
}

virtual void eliminar_ult() {
    eliminarK(tam-1);
}

int buscar(T e) {
    for (int i = 0; i < tam; i++) {
        if (data[i] == e) {
            return i;
        }

    }
    return -1;
}

void eliminar_elemento(T e){
    int k = buscar(e);
    eliminarK(k);
}

char siguienteK(int k) {
    if (k + 1 < tam) {
        return data[k + 1];
    } else {
        return -1;
    }
}

char anteriorK(int k) {
    if (k - 1 >= 0) {
        return data[k - 1];
    } else {
        return -1;
    }

}

T recuperar(int k) {
    return data[k];
}

//void imprimir() {
//    for (int i = 0; i < tam; i++) {
//        std::cout << data[i] << "\t";
//    }
//    std::cout << std::endl;
//}

};

#endif /* LISTACONARREGLO_H */

   