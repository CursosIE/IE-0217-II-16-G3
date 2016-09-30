
#include "Fraccion.h"

///Constructor vacío de Fraccion
Fraccion::Fraccion(){

}

///Constructor de Fraccion
Fraccion::Fraccion(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;

}

///Destructor de Fraccion
Fraccion::~Fraccion(){

}

///Suma de Fraccion
Fraccion Fraccion::operator +(const Fraccion& other){
    if(this->denominador == other.denominador){
        int num;
        int den;
        num= this->numerador+other.numerador;
        den= this->denominador+other.denominador;
        Fraccion F= Fraccion(num,den);
        return F;
    }
    else if(this->denominador%other.denominador==0 || other.denominador%this->denominador==0 ){
        if(this->denominador > other.denominador){
            int den = this->denominador;
            int num = ((this->denominador /other.denominador)*other.numerador)+(this->numerador);
            Fraccion F = Fraccion(num,den);
            return F;
        }
        else if(this->denominador < other.denominador){
            int den = other.denominador;
            int num = ((other.denominador /this->denominador)*this->numerador)+(other.numerador);
            Fraccion F = Fraccion(num,den);
            return F;
        }  
    }
    
    else {
        int den = this->denominador*other.denominador;
        int num = (((den)/this->denominador)*this->numerador)+((((den)/other.denominador)*other.numerador));
        Fraccion F = Fraccion(num,den);
        return F;
    }
}

///Resta de Fraccion
Fraccion Fraccion::operator -(const Fraccion& other){
    if(this->denominador == other.denominador){
        int num;
        int den;
        num= this->numerador+other.numerador;
        den= this->denominador+other.denominador;
        Fraccion F= Fraccion(num,den);
        return F;
    }
    else if(this->denominador%other.denominador==0 || other.denominador%this->denominador==0 ){
        if(this->denominador > other.denominador){
            int den = this->denominador;
            int num = ((this->denominador /other.denominador)*other.numerador)-(this->numerador);
            Fraccion F = Fraccion(num,den);
            return F;
        }
        else if(this->denominador < other.denominador){
            int den = other.denominador;
            int num = ((other.denominador /this->denominador)*this->numerador)-(other.numerador);
            Fraccion F = Fraccion(num,den);
            return F;
        }  
    }
    
    else {
        int den = this->denominador*other.denominador;
        int num = (((den)/this->denominador)*this->numerador)-((((den)/other.denominador)*other.numerador));
        Fraccion F = Fraccion(num,den);
        return F;
    }
}

///Multiplicación de Fraccion
Fraccion Fraccion::operator *(const Fraccion& other){
    int num;
    int den;
    num=this->numerador*other.numerador;
    den=this->denominador*other.denominador;
    Fraccion F = Fraccion(num,den);
    return F;
}

///División de Fraccion
Fraccion Fraccion::operator /(const Fraccion& other){
    int num;
    int den;
    num=this->numerador*other.denominador;
    den=this->denominador*other.numerador;
    Fraccion F = Fraccion(num,den);
    return F;
}

///Función imprimir de Fraccion (sobrecarga del operador ~)
void Fraccion::operator~(){
    cout << numerador << "/" << denominador << endl;
}