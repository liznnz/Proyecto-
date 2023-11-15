/*
 * Proyecto Carmelita
 * Lizeth Niniz Corona
 * A01711740
 * 15/11/2023
 */

/**
 * Descripcion este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que calcula el
 * total de consumo por cliente por orden, pidiendo la cantidad de 
 * tipo de taco, piezas de pollo y enchiladas. En caso de no Pedir
 * de un tipo, se coloca 0.
*/


#include <iostream>
#include <iomanip>
#include "comida.h" //objetos
#include "mesero.h"

int main() {
    Tacos tacos;
    Enchiladas enchiladas;
    Pollo pollo;
    Contador contador;

    contador.tomarOrden(tacos, enchiladas, pollo);

    double total = contador.calcularTotal(tacos, enchiladas, pollo);
    std::cout << "\nEl total es: $" << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
