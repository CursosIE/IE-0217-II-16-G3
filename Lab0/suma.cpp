#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* @brief Suma de numeros recibidos por consola
*
*
*/
int suma(int argc, char** argv){
  double suma =0;
  int i=0;
  for (i=0; i<argc; i++){
    suma+=atof(argv[i]);
  }
  cout <<suma<< endl;
  return 0;
}
/**
* @brief Función main que llama a la función suma
*
*
*/
int main(int argc, char** argv){
  suma(argc,argv);
  return 0;
}
