#include <stdio.h>
#include <stdlib.h>

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
  printf("%f\n", suma);
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
