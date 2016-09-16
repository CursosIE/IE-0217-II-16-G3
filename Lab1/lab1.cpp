#include <iostream>
#include "string"
using namespace std;

string variables [64] = {"UUU","UUC","UUA","UUG","CUU","CUC","CUA","CUG","AUU",
"AUC","AUA","AUG","GUU","GUC","GUA","GUG","UCU","UCC","UCA","UCG","CCU","CCC",
"CCA","CCG","ACU","ACC","ACA","ACG","GCU","GCC","GCA","GCG","UAU","UAC","UAA",
"UAG","CAU","CAC","CAA","CAG","AAU","AAC","AAA","AAG","GAU","GAC","GAA","GAG",
"UGU","UGC","UGA","UGG","CGU","CGC","CGA","CGG","AGU","AGC","AGA","AGG","GGU",
"GGC","GGA","GGG"};
char equival [64] = {'F','G','L','L','L','L','L','L','I','I','I','M','V','V','V',
'V','S','S','S','S','P','P','P','P','T','T','T','T','A','A','A','A','Y','Y','|',
'|','H','H','Q','Q','N','N','K','K','D','D','E','E','C','C','|','W','R','R','R',
'R','S','S','R','R','G','G','G','G'};

/**
* @brief Cuenta el numeros de caracteres recibidos por consola.
*
*
*/
int contarchars(char* arg)
{
	int cont=0;
	char h;
	do{
		h=arg[cont];
		cont++;
	}
	while(h!='\0');

	int contador=cont-1;
	return contador;
}

/**
* @brief Traduce el ARN en una cadena de aminoacidos.
*
*
*/
char* traducirARNaAA(char* arn)
{
	int m= contarchars(arn);
	int i=0;
	int j=0;
	int x=0;
	char* codones = new char [m/3];

	for(i=0;i<m;i+=3){
		char* cadena = new char[3];
		cadena[0] = arn[i];
		cadena[1]= arn[i+1];
		cadena[2]= arn[i+2];

		for (j=0;j<64; j++) {
			if (cadena==variables[j]){
				codones[x]= equival[j];
				x++;
			}
		}
		delete [] cadena;
	}
	return codones;
}

/**
* @brief Imprime un arreglo de char.
*
*
*/
void imprimirArregloDeChar(char* imp, int n)
{
	int i=0;
	for(i=0;i<n;i++){
		cout<<imp[i];
	}
	cout<<endl;

}


int main (int argc, char** argv)
{
	imprimirArregloDeChar(traducirARNaAA(argv[1]),contarchars(argv[1]));

	return 0;
}
