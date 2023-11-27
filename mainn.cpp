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

//Bibliotecas
#include <iostream> //Para imprimir
#include <iomanip>
#include "comida.h" //Objetos del proyecto
#include "mesero.h"

int main() {
    //Objetos que se añadiran
    Tacos tacos;
    Enchiladas enchiladas;
    Pollo pollo;
    Contador contador;

    //Agrega las cantidades de cada platillo
    contador.tomarOrden(tacos, enchiladas, pollo); 

    //Calcula y da el resultado total de la orden
    double total = contador.calcularTotal(tacos, enchiladas, pollo);
    std::cout << "\nEl total es: $" << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
