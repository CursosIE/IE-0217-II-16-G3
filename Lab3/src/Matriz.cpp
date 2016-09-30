
#include "Matriz.h"
using namespace std;


///Constructor vacío de Matriz
Matriz::Matriz(){
    
}

///Constructor de Matriz
Matriz::Matriz(int filas, int columnas, int** contenido){
    this->filas = filas;
    this->columnas = columnas;
    this->contenido = contenido;
}

///Destructor de Matriz
Matriz::~Matriz(){
}

///Función suma de Matriz
Matriz Matriz::operator+(const Matriz& other){
    if(other.columnas==this->columnas && other.filas == this->filas){
        
        int** contNuevo = new int*[this->filas];
        for (int i = 0; i < 3; i++) {
        contNuevo[i] = new int[this->columnas];
    }
        
        for(int i = 0; i < other.columnas; i++){
            for(int j=0; j < other.filas ; j++){
                contNuevo[i][j]=this->contenido[i][j]+other.contenido[i][j];
            }
        }
        
        Matriz M = Matriz(other.filas, other.columnas ,contNuevo);
        
    return M;
}  
}

///Función resta de Matriz
Matriz Matriz::operator-(const Matriz& other){
    if(other.columnas==this->columnas && other.filas == this->filas){
        
        int** contNuevo = new int*[this->filas];
        for (int i = 0; i < 3; i++) {
        contNuevo[i] = new int[this->columnas];
    }
        
        for(int i = 0; i < other.columnas; i++){
            for(int j=0; j < other.filas ; j++){
                contNuevo[i][j]=this->contenido[i][j]-other.contenido[i][j];
            }
        }
        
        Matriz M = Matriz(other.filas, other.columnas ,contNuevo);
        
    return M;
}  
}


Matriz Matriz::operator*(const Matriz& other){
    if(this->columnas==other.filas){
        
        int** contNuevo = new int*[this->filas];
        for (int i = 0; i < 3; i++) {
        contNuevo[i] = new int[other.columnas];
    }
        
        for(int i = 0; i < this->filas; i++){
            for(int j=0; j < other.columnas ; j++){
                for(int k=0; k< this->columnas ; k++)
                contNuevo[i][j]+=this->contenido[i][k] *other.contenido[k][j];
            }
        }
        
        Matriz M = Matriz(this->filas, other.columnas ,contNuevo);
        
    return M;
    }  
}

///Función división de Matriz
Matriz Matriz::operator/(const Matriz& other){
    if(other.columnas==this->columnas && other.filas == this->filas){
        
        int** contNuevo = new int*[this->filas];
        for (int i = 0; i < 3; i++) {
        contNuevo[i] = new int[this->columnas];
    }
        
        for(int i = 0; i < other.columnas; i++){
            for(int j=0; j < other.filas ; j++){
                contNuevo[i][j]=this->contenido[i][j]/other.contenido[i][j];
            }
        }
        
        Matriz M = Matriz(other.filas, other.columnas ,contNuevo);
        
    return M;
}  
}


///Función imprimir de Matriz (sobrecarga del operador ~)
void Matriz::operator~(){
    for(int i = 0; i < columnas; i++){
            for(int j=0; j< filas ;j++){
                cout << contenido[i][j] << " ";
            }
            cout << endl;
        }
    
}

