
#include "Polinomio.h"


///Constructor de Polinomio
Polinomio::Polinomio(int gradoMayor, int* coeficientes){
    this->gradoMayor = gradoMayor;
    this->coeficientes = coeficientes;

}

///Destructor de Polinomio
Polinomio::~Polinomio(){
    
}

///Función de suma de Polinomio (sobrecarga del operador +)
Polinomio Polinomio::operator +(const Polinomio& other){
    int mayor;
    int menor;
    if (this->gradoMayor >= other.gradoMayor){
        mayor=this->gradoMayor;
        menor= other.gradoMayor;
        int* contenido = new int[mayor+1];
        
        for (int espacios=mayor;espacios>=0; espacios--){
            contenido[espacios]=0;
        }
        
        for (int i=0; i<=menor; i++){
            contenido[i]=this->coeficientes[i] + other.coeficientes[i];
        }
        if (mayor!=menor){
            for (int i=mayor; i>menor; i--){
            contenido[i]= this->coeficientes[i];
            }
        }
        Polinomio P = Polinomio(mayor,contenido);
        return P; 
    }
    else{
        mayor=other.gradoMayor;
        menor= this->gradoMayor;
        int* contenido = new int[mayor+1];
        
        for (int espacios=mayor;espacios>=0; espacios--){
            contenido[espacios]=0;
        }
        
        for (int espacios=mayor;espacios>=0; espacios--){
            contenido[espacios]=0;
        }

        for (int i=0; i<=menor; i++){
            contenido[i]=this->coeficientes[i] +other.coeficientes[i];
        }
        
        if (mayor!=menor){
            for (int i=mayor; i>menor; i--){
            contenido[i]= other.coeficientes[i];
            }
        }
    
    Polinomio P = Polinomio(mayor,contenido);
    return P; 
    }
}

///Función resta de Polinomios (sobrecarga de operador -)
Polinomio Polinomio::operator -(const Polinomio& other){
    
    int mayor;
    int menor;
    
    if (this->gradoMayor >= other.gradoMayor){
        mayor=this->gradoMayor;
        menor= other.gradoMayor;
        int* contenido =  new int[mayor+1];
        
        for (int espacios=0;espacios<=mayor; espacios++){
            contenido[espacios]=0;
        }
        
        Polinomio P = Polinomio(mayor,contenido);
        

        for (int i=0; i<=menor; i++){
            P.coeficientes[i]=this->coeficientes[i]-other.coeficientes[i];
        }
        
        if (mayor!=menor){
            for (int i=mayor; i>menor; i--){
            P.coeficientes[i]= this->coeficientes[i];
            }
        }
        
        return P;
    }
    else{
        mayor=other.gradoMayor;
        menor= this->gradoMayor;
        int* contenido = new int[mayor+1];
        
        for (int espacios=mayor;espacios>=0; espacios--){
            contenido[espacios]=0;
        }
        
        Polinomio P = Polinomio(mayor,contenido);
        
        for (int espacios=mayor;espacios>=0; espacios--){
            P.coeficientes[espacios]=0;
        }

        for (int i=0; i<=menor; i++){
            P.coeficientes[i]=this->coeficientes[i]-other.coeficientes[i];
        }
        if (mayor!=menor){
            for (int i=mayor; i>menor; i--){
            P.coeficientes[i]= -1*other.coeficientes[i];
            }
        }
        return P;
    }
    
}

///Funcion multiplicar Polinomios (sobrecarga de operadorb *)
Polinomio Polinomio::operator *(const Polinomio& other){
    
    int gradomulti= this->gradoMayor + other.gradoMayor;
    int* contenido = new  int[gradomulti+1];
    
    for (int espacios=0;espacios<=gradomulti; espacios++){
            contenido[espacios]=0;
        }
    
    Polinomio P= Polinomio (gradomulti,contenido);
    
    int i=P.gradoMayor;
    int l=0;
    for(int j=this->gradoMayor; j>=0; j--){
        i=P.gradoMayor-l;
        for (int k= other.gradoMayor; k>=0; k--){
            
            P.coeficientes[i] += this->coeficientes[j]*other.coeficientes[k];
            i--;
        }
        l++;
    }
    return P;
}

///Funcion dividir Polinomios (sobrecarga de operador *)
Polinomio Polinomio::operator /(const Polinomio& other){
    int gradodiv= this->gradoMayor - other.gradoMayor;
    int* contenidoresult= new int[gradodiv+1];
    
    for (int espacios=0;espacios<=gradodiv; espacios++){
            contenidoresult[espacios]=0;
        }
    
    Polinomio Result= Polinomio(gradodiv,contenidoresult);
    
    int* temp = new int[this->gradoMayor+1];
    for (int esp=0;esp<=this->gradoMayor; esp++){
           temp[esp]=0;
        }

    Polinomio Temp = Polinomio(this->gradoMayor, temp);     
            
    int i=this->gradoMayor;
    int k=gradodiv;
    int l=0;
    do{
        Result.coeficientes[k]= this->coeficientes[i]/other.coeficientes[other.gradoMayor];

        for (int j=(this->gradoMayor-l); j>=0; j--){
            for (int y=other.gradoMayor; y>=0; y-- ){
                Temp.coeficientes[j]= Result.coeficientes[y]*other.coeficientes[y];
            }
        }

        for (int h=this->gradoMayor; h>=0; h--){
            this->coeficientes[h]= this->coeficientes[h] - Temp.coeficientes[h];
        }
        
        for (int esp=0;esp<=this->gradoMayor; esp++){
           Temp.coeficientes[esp]=0;
        }
        
        i--;
        k--;
        l++;
    }
    while (i>=other.gradoMayor || k>=0 || l<=this->gradoMayor);
    return Result;
}



///Función imprimir de Polinomio (sobrecarga del operador ~)
void Polinomio::operator~(){
    
    for(int i = gradoMayor;i>=0;i--){
            cout << coeficientes[i]  << "x^" << i;
        if(i>0){
        cout << "+";
        }
    }
    cout << endl;
}