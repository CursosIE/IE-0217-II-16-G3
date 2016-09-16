#!/usr/bin/python

import sys
"""biblioteca para habilitar funciones de la consola"""

def Suma():
    """funcion suma que recibe elementos desde la consola y los suma"""
    counter = 0
    """variable counter para guardar la suma de los elementos"""
    array_nums= sys.argv
    """arreglo que contiene lo que recibe la consola"""
    for elements in range(1,len(sys.argv)):
        """ciclos va desde el segundo elemento para eliminar ./suma.py hasta n cantidad de numeros ingresados"""
        counter = counter + float(array_nums[elements])
        """el ciclo recorre el arreglo, suma los elementos y los guarda en counter"""
    print counter
    """imprime el resultado"""
Suma()
"""para ejecutar la funcion automaticamente"""
