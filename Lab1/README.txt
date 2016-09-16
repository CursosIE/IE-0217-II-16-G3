El presente programa fue elaborado por:
Laura Rincón B55863
Esteban Vargas B16998

El programa tiene como fin generar los aminoácidos a partir de los codones de un
código genético (ARN) cualquiera. El programa recibe por línea de comandos una
serie de bases nitrogenadas (A,G,C,U) e imprime los aminoácidos que se traducen
de estas bases según bibliografía proporcionada por el profesor.

Consideraciones para el uso del programa:
--- La cadena a ingresar debe iniciar y finalizar con un codón de parada (UAA,UAG,UGA).
--- La cadena se ingresa por terminal, por ejemplo: ./out.o UAA.
--- El número de bases nitrogenadas de la cadena debe ser un múltiplo de 3.
--- Se retornará la traducción a los aminoácidos correspondientes entre los dos
    codones de parada mencionados, lo que se encuentre afuera de estos límites
    NO será tomado en cuenta por el programa para la traducción.

*****Una tabla con la información de los codones de ARN se
puede encontrar en el siguiente
enlace: https://en.wikipedia.org/wiki/Genetic_code#RNA_codon_table
