/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Mazo.h"

Mazo::Mazo(){
    this->AsDeEspada= Carta(11,"As de espada", "Espada");
    this->AsDeCorazon= Carta(11,"As de corazón", "Corazon");
    this->AsDeTrebol= Carta(11,"As de trebol", "Corazon");
    this->AsDeDiamante= Carta(11,"As de diamante", "Diamante");
    
    this->DosDeEspada= Carta(2,"Dos de espada", "Espada");
    this->DosDeCorazon= Carta(2,"Dos de corazón", "Corazon");
    this->DosDeTrebol= Carta(2,"Dos de trebol", "Corazon");
    this->DosDeDiamante= Carta(2,"Dos de diamante", "Diamante");

    this->TresDeEspada= Carta(3,"Tres de espada", "Espada");
    this->TresDeCorazon= Carta(3,"Tres de corazón", "Corazon");
    this->TresDeTrebol= Carta(3,"Tres de trebol", "Corazon");
    this->TresDeDiamante= Carta(3,"Tres de diamante", "Diamante");

    this->CuatroDeEspada= Carta(4,"Cuatro de espada", "Espada");
    this->CuatroDeCorazon= Carta(4,"Cuatro de corazón", "Corazon");
    this->CuatroDeTrebol= Carta(4,"Cuatro de trebol", "Corazon");
    this->CuatroDeDiamante= Carta(4,"Cuatro de diamante", "Diamante");

    this->CincoDeEspada= Carta(5,"Cinco de espada", "Espada");
    this->CincoDeCorazon= Carta(5,"Cinco de corazón", "Corazon");
    this->CincoDeTrebol= Carta(5,"Cinco de trebol", "Corazon");
    this->CincoDeDiamante= Carta(5,"Cinco de diamante", "Diamante");

    this->SeisDeEspada= Carta(6,"Seis de espada", "Espada");
    this->SeisDeCorazon= Carta(6,"Seis de corazón", "Corazon");
    this->SeisDeTrebol= Carta(6,"Seis de trebol", "Corazon");
    this->SeisDeDiamante= Carta(6,"Seis de diamante", "Diamante");

    this->SieteDeEspada= Carta(7,"Siete de espada", "Espada");
    this->SieteDeCorazon= Carta(7,"Siete de corazón", "Corazon");
    this->SieteDeTrebol= Carta(7,"Siete de trebol", "Corazon");
    this->SieteDeDiamante= Carta(7,"Siete de diamante", "Diamante");    

    this->OchoDeEspada= Carta(8,"Ocho de espada", "Espada");
    this->OchoDeCorazon= Carta(8,"Ocho de corazón", "Corazon");
    this->OchoDeTrebol= Carta(8,"Ocho de trebol", "Corazon");
    this->OchoDeDiamante= Carta(8,"Ocho de diamante", "Diamante");    

    this->NueveDeEspada= Carta(9,"Nueve de espada", "Espada");
    this->NueveDeCorazon= Carta(9,"Nueve de corazón", "Corazon");
    this->NueveDeTrebol= Carta(9,"Nueve de trebol", "Corazon");
    this->NueveDeDiamante= Carta(9,"Nueve de diamante", "Diamante");    

    this->DiezDeEspada= Carta(10,"Diez de espada", "Espada");
    this->DiezDeCorazon= Carta(10,"Diez de corazón", "Corazon");
    this->DiezDeTrebol= Carta(10,"Diez de trebol", "Corazon");
    this->DiezDeDiamante= Carta(10,"Diez de diamante", "Diamante");    

    this->JotaDeEspada= Carta(10,"Jota de espada", "Espada");
    this->JotaDeCorazon= Carta(10,"Jota de corazón", "Corazon");
    this->JotaDeTrebol= Carta(10,"Jota de trebol", "Corazon");
    this->JotaDeDiamante= Carta(10,"Jota de diamante", "Diamante");    

    this->QuinaDeEspada= Carta(10,"Quina de espada", "Espada");
    this->QuinaDeCorazon= Carta(10,"Quina de corazón", "Corazon");
    this->QuinaDeTrebol= Carta(10,"Quina de trebol", "Corazon");
    this->QuinaDeDiamante= Carta(10,"Quina de diamante", "Diamante");    

    this->KaDeEspada= Carta(10,"Ka de espada", "Espada");
    this->KaDeCorazon= Carta(10,"Ka de corazón", "Corazon");
    this->KaDeTrebol= Carta(10,"Ka de trebol", "Corazon");
    this->KaDeDiamante= Carta(10,"Ka de diamante", "Diamante");    
    
    //this->baraja = new ListaConArreglo();
    //this->baraja= {AsDeEspada};
    
    this->baraja[0]=AsDeEspada;
    this->baraja[1]=AsDeCorazon;
    this->baraja[2]=AsDeTrebol;
    this->baraja[3]=AsDeDiamante;
    
    this->baraja[4]=DosDeEspada;
    this->baraja[5]=DosDeCorazon;
    this->baraja[6]=DosDeTrebol;
    this->baraja[7]=DosDeDiamante;
    
    this->baraja[8]=TresDeEspada;
    this->baraja[9]=TresDeCorazon;
    this->baraja[10]=TresDeTrebol;
    this->baraja[11]=TresDeDiamante;
    
    this->baraja[12]=CuatroDeEspada;
    this->baraja[13]=CuatroDeCorazon;
    this->baraja[14]=CuatroDeTrebol;
    this->baraja[15]=CuatroDeDiamante;
    
    this->baraja[16]=CincoDeEspada;
    this->baraja[17]=CincoDeCorazon;
    this->baraja[18]=CincoDeTrebol;
    this->baraja[19]=CincoDeDiamante;
    
    this->baraja[20]=SeisDeEspada;
    this->baraja[21]=SeisDeCorazon;
    this->baraja[22]=SeisDeTrebol;
    this->baraja[23]=SeisDeDiamante;
    
    this->baraja[24]=SieteDeEspada;
    this->baraja[25]=SieteDeCorazon;
    this->baraja[26]=SieteDeTrebol;
    this->baraja[27]=SieteDeDiamante;
    
    this->baraja[28]=OchoDeEspada;
    this->baraja[29]=OchoDeCorazon;
    this->baraja[30]=OchoDeTrebol;
    this->baraja[31]=OchoDeDiamante;
    
    this->baraja[32]=NueveDeEspada;
    this->baraja[33]=NueveDeCorazon;
    this->baraja[34]=NueveDeTrebol;
    this->baraja[35]=NueveDeDiamante;
    
    this->baraja[36]=DiezDeEspada;
    this->baraja[37]=DiezDeCorazon;
    this->baraja[38]=DiezDeTrebol;
    this->baraja[39]=DiezDeDiamante;
    
    this->baraja[40]=JotaDeEspada;
    this->baraja[41]=JotaDeCorazon;
    this->baraja[42]=JotaDeTrebol;
    this->baraja[43]=JotaDeDiamante;
    
    this->baraja[44]=QuinaDeEspada;
    this->baraja[45]=QuinaDeCorazon;
    this->baraja[46]=QuinaDeTrebol;
    this->baraja[47]=QuinaDeDiamante;
    
    this->baraja[48]=KaDeEspada;
    this->baraja[49]=KaDeCorazon;
    this->baraja[50]=KaDeTrebol;
    this->baraja[51]=KaDeDiamante;
}

Mazo::~Mazo(){


}
void Mazo::barajar(){
    random_shuffle(&baraja[0],&baraja[52]);
}

void Mazo::print(){
    for(int i=0;i<52;i++){
        baraja[i].imprimir();
        cout<<endl;
    }

}
