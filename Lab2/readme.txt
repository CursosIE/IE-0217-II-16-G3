El presente laboratorio fue elaborado por Esteban Vargas(carnet B16998) y Laura Rincón
(carnet B55863),estudiantes de la carrera de Ingeniería Eléctrica de la 
Universidad de Costa Rica.

En esta tarea se elaboró una clase "madre" llamada Figura, de la cual se derivaron
3 clases: la clase Triangulo, Circulo y Cuadrado.

La clase Figura cuenta con dos atributos: nombre y color. Además implementa dos
funciones, una de cálculo de área y otra de cálculo de perímetro. Estas se
reimplementan en las clases derivadas por lo que en la clase Figura se declararon
como funciones virtuales y retornan un valor de 0.

La clase derivada Triangulo hereda los atributos de Figura y a su vez cuenta con
atributos propios: base y altura. Además de eso reimplementa las funciones
de cálculo de área y de perímetro acorde a las funciones respectivas.

La clase derivada Cuadrado hereda los atributos de Figura y a su vez cuenta con
atributos propios: lado. Además de eso reimplementa las funciones
de cálculo de área y de perímetro acorde a las funciones respectivas para esta
figura específica.

La clase derivada Circulo hereda los atributos de Figura y a su vez cuenta con
atributos propios: radio. Además de eso reimplementa las funciones
de cálculo de área y de perímetro acorde a las funciones respectivas para esta
figura específica.

Finalmenta cada clase derivada cuenta con la sobrecarga del operador "~" y "!".
La primera imprime en consola los datos del objeto (sus atributos) y la segunda
imprime el valor del área y perímetro de la figura respectiva.
