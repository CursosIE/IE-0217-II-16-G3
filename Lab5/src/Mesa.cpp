/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Mesa.h"
#include "Portero.h"

Mesa::Mesa(){
    
}

Mesa::Mesa(Jugador* J1, Jugador* J2, Jugador* J3, Mazo m1){
    this->cantidad_jugadores=3;
    this->jugador1=J1;
    this->jugador2=J2;
    this->jugador3=J3;
    this->baraja=m1;
    
}

Mesa::~Mesa(){
    
}

void Mesa::jugar(Portero sala_espera, Mesa* M1, Mesa* M2, Mesa* M3){
    while(sala_espera.cantidad_clientes>0){
        cout<<"**********Mesa 1 Estado INICIAL**********"<<endl;
        M1->imprimir_estado();
        cout<<"**********Mesa 2 Estado INICIAL**********"<<endl;
        M2->imprimir_estado();
        cout<<"**********Mesa 3 Estado INICIAL**********"<<endl;
        M3->imprimir_estado();

        //Se llenan las mesas con los jugadores de la cola //////
        int cupos_mesas=0;

        for (int mesa=0; mesa<3; mesa++){
            int i=0;

            switch (mesa) {
                //****************************Mesa1**************************************
                case 0:
                    ///Llenado de la mesa
                    if(M1->jugador1->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M1->jugador1->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }
                    if(M1->jugador2->estado==0){
                       if(sala_espera.cantidad_clientes>0){ 
                            cupos_mesas++;
                            M1->jugador2->estado=1;
                            sala_espera.eliminardeCola();
                       }
                    }
                    if(M1->jugador3->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M1->jugador3->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }

                    ///Repartición de las cartas
                    M1->baraja.barajar();
                    while(M1->jugador1->acumulado<22 && M1->jugador2->acumulado<22 && M1->jugador3->acumulado<22){
                        if(M1->jugador1->acumulado<19){
                    M1->jugador1->acumulado+=M1->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M1->jugador2->acumulado<19){
                    M1->jugador2->acumulado+=M1->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M1->jugador3->acumulado<19){
                    M1->jugador3->acumulado+=M1->baraja.baraja[i].valor;
                    i++;
                        }
                    }


                    ///Decisión de quién perdió

                    if(M1->jugador1->acumulado>21){
                        M1->jugador1->perder();
                    }

                    if(M1->jugador2->acumulado>21){
                        M1->jugador2->perder();
                    }

                    if(M1->jugador3->acumulado>21){
                        M1->jugador3->perder();
                    }                

                    sala_espera.cantidad_clientes= sala_espera.cantidad_clientes- cupos_mesas; 

                    break;
                    //*********************************Mesa2************************************
                case 1:
                    //Llenado de la mesa
                    if(M2->jugador1->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M2->jugador1->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }
                    if(M2->jugador2->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M2->jugador2->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }
                    if(M2->jugador3->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M2->jugador3->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }


                    ///Repartición de las cartas
                    M2->baraja.barajar();                    
                    while(M2->jugador1->acumulado<22 && M2->jugador2->acumulado<22 && M2->jugador3->acumulado<22){
                        if(M2->jugador1->acumulado<19){
                    M2->jugador1->acumulado+=M2->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M2->jugador2->acumulado<19){
                    M2->jugador2->acumulado+=M2->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M2->jugador3->acumulado<19){
                    M2->jugador3->acumulado+=M2->baraja.baraja[i].valor;
                    i++;
                        }
                    }
                    ///Decisión de quién perdió
                    if(M2->jugador1->acumulado>21){
                        M2->jugador1->perder();
                    }

                    if(M2->jugador2->acumulado>21){
                        M2->jugador2->perder();
                    }

                    if(M2->jugador3->acumulado>21){
                        M2->jugador3->perder();
                    }                

                    sala_espera.cantidad_clientes= sala_espera.cantidad_clientes- cupos_mesas;
                    break;
                //*******************Mesa3**************************************

                case 2:
                    if(M3->jugador1->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M3->jugador1->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }
                    if(M3->jugador2->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M3->jugador2->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }
                    if(M3->jugador3->estado==0){
                        if(sala_espera.cantidad_clientes>0){
                            cupos_mesas++;
                            M3->jugador3->estado=1;
                            sala_espera.eliminardeCola();
                        }
                    }

                    ///Repartición de las cartas
                    M3->baraja.barajar();
                    while(M3->jugador1->acumulado<22 && M3->jugador2->acumulado<22 && M3->jugador3->acumulado<22){
                        if(M3->jugador1->acumulado<19){
                    M3->jugador1->acumulado+=M3->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M3->jugador2->acumulado<19){
                    M3->jugador2->acumulado+=M3->baraja.baraja[i].valor;
                    i++;
                        }
                        if(M3->jugador3->acumulado<19){
                    M3->jugador3->acumulado+=M3->baraja.baraja[i].valor;
                    i++;
                        }
                    }
                    ///Decisión de quién perdió
                    if(M3->jugador1->acumulado>21){
                        M3->jugador1->perder();
                    }

                    if(M3->jugador2->acumulado>21){
                        M3->jugador2->perder();
                    }

                    if(M3->jugador3->acumulado>21){
                        M3->jugador3->perder();
                    }  

                    sala_espera.cantidad_clientes= sala_espera.cantidad_clientes- cupos_mesas;
                    break;

                default:
                    cout <<"default Mesa"<<endl;
                    break;
            }

        }
        cout<<"**********Mesa 1 Estado FINAL**********"<<endl;
        M1->imprimir_estado();
        cout<<"**********Mesa 2 Estado FINAL**********"<<endl;
        M2->imprimir_estado();
        cout<<"**********Mesa 3 Estado FINAL**********"<<endl;
        M3->imprimir_estado();
  
}
}

void Mesa::imprimir_estado(){
    
    cout<<"****Jugador 1****"<<endl;
    cout<<"Acumulado de cartas: "<<this->jugador1->acumulado<<endl;
    cout<<"El id del jugador es: "<<this->jugador1->id<<endl;
    if(this->jugador1->estado==0){
        cout<<"No ha ganado ni perdido"<<endl;
    }
    if(this->jugador1->estado==2){
        cout<<"Perdió"<<endl;
    }
    
    if(this->jugador1->estado==1){
        cout<<"Ganó"<<endl;
    }
    
    cout<<"****Jugador 2****"<<endl;
    cout<<"Acumulado de cartas: "<<this->jugador2->acumulado<<endl;
    cout<<"El id del jugador es: "<<this->jugador2->id<<endl;
    if(this->jugador2->estado==0){
        cout<<"No ha ganado ni perdido"<<endl;
    }
    if(this->jugador2->estado==2){
        cout<<"Perdió"<<endl;
    }
  
    if(this->jugador2->estado==1){
        cout<<"Ganó"<<endl;
    }
    
    cout<<"****Jugador 3****"<<endl;
    cout<<"Acumulado de cartas: "<<this->jugador3->acumulado<<endl;
    cout<<"El id del jugador es: "<<this->jugador3->id<<endl;    
    if(this->jugador3->estado==0){
        cout<<"No ha ganado ni perdido"<<endl;
    }
    if(this->jugador3->estado==2){
        cout<<"Perdió"<<endl;
    }
    if(this->jugador3->estado==1){
        cout<<"Ganó"<<endl;
    }

}
