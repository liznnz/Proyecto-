/*
 * Proyecto Carmelita
 * Lizeth Niniz Corona
 * A01711740
 * 27/11/2023
 */

/*
 * Clase Mesero que es para agregar el pedido
 * y tiene 1 clase hija para dar el total:
 * Contador
 *
 */


#ifndef MESERO_H_
#define MESERO_H_
#include <iostream>
#include <iomanip>

#include "comida.h"


//Declaracion de clase mesero 
class Mesero {

    public:
    //Procedimiento de menu para tomar orden 
    void tomarOrden(Tacos& tacos, Enchiladas& enchiladas, Pollo& pollo) {
        int opcion;
        do {
            //Imprime las opciones que va a tener el sistema
            std::cout << "\nMenu:\n" << std::endl;
            std::cout << "1. Agrega Tacos" << std::endl;
            std::cout << "2. Agrega Enchiladas" << std::endl;
            std::cout << "3. Agrega Pollo" << std::endl;
            std::cout << "4. Total" << std::endl;
            std::cout << "\nSeleccione una opcion: ";
            std::cin >> opcion;  //Leer indice que selecciona la opcion del menu

            //Switch donde dependiendo la eleccion efectua un diferente procedimiento
            switch (opcion) {

                //Caso 1 que imprime las cantidades a agregar de tacos
                case 1:
                    agregarTacos(tacos);
                    break;
                //Caso 2 que imprime las cantidades a agregar de enchiladas
                case 2:
                    agregarEnchiladas(enchiladas);
                    break;
                //Caso 3 que imprime las cantidades a agregar de pollo
                case 3:
                    agregarPollo(pollo);
                    break;
                //Caso 4 que imprime el total de la orden
                case 4:
                    std::cout << "Orden tomada. ÁBuen provecho!\n";
                    break;
                //Instruccion para no aceptar numeros que no hay en el menu 
                default:
                    std::cout << "Opcion invalida. Intente de nuevo.\n";
            }
        //Ciclo para que el sistema siga corriendo
        } while (opcion != 4);
    }

    private:
    void agregarTacos(Tacos& tacos) {
        int cantidadBistec, cantidadChorizo, cantidadTripita;
        std::cout << "Ingrese la cantidad de Tacos de Bistec: ";
        std::cin >> cantidadBistec;
        tacos.setCantidadBistec(tacos.getCantidadBistec() + cantidadBistec);

        std::cout << "Ingrese la cantidad de Tacos de Chorizo: ";
        std::cin >> cantidadChorizo;
        tacos.setCantidadChorizo(tacos.getCantidadChorizo() + cantidadChorizo);

        std::cout << "Ingrese la cantidad de Tacos de Tripita: ";
        std::cin >> cantidadTripita;
        tacos.setCantidadTripita(tacos.getCantidadTripita() + cantidadTripita);
    }

    void agregarEnchiladas(Enchiladas& enchiladas) {
        int cantidadEnchiladas;
        std::cout << "Ingrese la cantidad de Enchiladas: ";
        std::cin >> cantidadEnchiladas;
        enchiladas.setCantidad(enchiladas.getCantidad() + cantidadEnchiladas);
    }

    void agregarPollo(Pollo& pollo) {
        int cantidadMedioPollo, cantidadPolloEntero, cantidadDosPiezas;
        std::cout << "Ingrese la cantidad de Medio Pollo: ";
        std::cin >> cantidadMedioPollo;
        pollo.setCantidadMedioPollo(pollo.getCantidadMedioPollo() + cantidadMedioPollo);

        std::cout << "Ingrese la cantidad de Pollo Entero: ";
        std::cin >> cantidadPolloEntero;
        pollo.setCantidadPolloEntero(pollo.getCantidadPolloEntero() + cantidadPolloEntero);

        std::cout << "Ingrese la cantidad de Dos Piezas de Pollo: ";
        std::cin >> cantidadDosPiezas;
        pollo.setCantidadDosPiezas(pollo.getCantidadDosPiezas() + cantidadDosPiezas);
    }
};

//Declaro objeto Contador que hereda de Mesero
class Contador : public Mesero {
    public:
    double calcularTotal(const Tacos& tacos, const Enchiladas& enchiladas, const Pollo& pollo) const {
        return tacos.getCantidadBistec() * 8 + tacos.getCantidadChorizo() * 8 + tacos.getCantidadTripita() * 9 +
               enchiladas.getCantidad() * 35 + pollo.getCantidadMedioPollo() * 80 +
               pollo.getCantidadPolloEntero() * 160 + pollo.getCantidadDosPiezas() * 35;
    }
};

#endif // MESERO_H_
