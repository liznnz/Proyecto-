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
                    //Caso 4 que imprime el total de la orden y salir del ciclo
                    case 4:
                        std::cout << "Orden tomada. ÁBuen provecho!\n";
                        break;
                    //Mensaje para opciones no validas
                    default:
                        std::cout << "Opcion invalida. Intente de nuevo.\n";
                }
            //Ciclo para que el sistema siga corriendo
            } while (opcion != 4);
    }

    private:

        //Procedimiento para agregar tacos a la orden
        void agregarTacos(Tacos& tacos) {
            // Variables para almacenar las cantidades de cada tipo de taco
            int cantidadBistec, cantidadChorizo, cantidadTripita;

            // Solicitar al usuario la cantidad de Tacos de Bistec
            std::cout << "Ingrese la cantidad de Tacos de Bistec: ";
            std::cin >> cantidadBistec;

            // Actualizar la cantidad de Tacos de Bistec en el objeto Tacos
            tacos.setCantidadBistec(tacos.getCantidadBistec() + cantidadBistec);

            // Solicitar al usuario la cantidad de Tacos de Chorizo
            std::cout << "Ingrese la cantidad de Tacos de Chorizo: ";
            std::cin >> cantidadChorizo;

            // Actualizar la cantidad de Tacos de Chorizo en el objeto Tacos
            tacos.setCantidadChorizo(tacos.getCantidadChorizo() + cantidadChorizo);

            // Solicitar al usuario la cantidad de Tacos de Tripita
            std::cout << "Ingrese la cantidad de Tacos de Tripita: ";
            std::cin >> cantidadTripita;

            // Actualizar la cantidad de Tacos de Tripita en el objeto Tacos
            tacos.setCantidadTripita(tacos.getCantidadTripita() + cantidadTripita);
        }


        //Procedimiento para agregar enchiladas a la orden
        void agregarEnchiladas(Enchiladas& enchiladas) {
            // Declaración de variable para almacenar la cantidad de enchiladas
            int cantidadEnchiladas;

            // Solicita al usuario ingresar la cantidad de enchiladas
            std::cout << "Ingrese la cantidad de Enchiladas: ";

            // Lee la cantidad ingresada por el usuario y la asigna a la variable cantidadEnchiladas
            std::cin >> cantidadEnchiladas;

            // Actualiza la cantidad de enchiladas en el objeto enchiladas sumando la cantidad ingresada
            enchiladas.setCantidad(enchiladas.getCantidad() + cantidadEnchiladas);
        }

        //Procedimiento para agregar pollo a la orden
        void agregarPollo(Pollo& pollo) {
            // Variables para almacenar la cantidad de diferentes opciones de pollo
            int cantidadMedioPollo, cantidadPolloEntero, cantidadDosPiezas;

            // Solicitar al usuario ingresar la cantidad de Medio Pollo
            std::cout << "Ingrese la cantidad de Medio Pollo: ";
            std::cin >> cantidadMedioPollo;

            // Actualizar la cantidad de Medio Pollo en el objeto pollo sumándole la nueva cantidad ingresada
            pollo.setCantidadMedioPollo(pollo.getCantidadMedioPollo() + cantidadMedioPollo);

            // Solicitar al usuario ingresar la cantidad de Pollo Entero
            std::cout << "Ingrese la cantidad de Pollo Entero: ";
            std::cin >> cantidadPolloEntero;

            // Actualizar la cantidad de Pollo Entero en el objeto pollo sumándole la nueva cantidad ingresada
            pollo.setCantidadPolloEntero(pollo.getCantidadPolloEntero() + cantidadPolloEntero);

            // Solicitar al usuario ingresar la cantidad de Dos Piezas de Pollo
            std::cout << "Ingrese la cantidad de Dos Piezas de Pollo: ";
            std::cin >> cantidadDosPiezas;

            // Actualizar la cantidad de Dos Piezas de Pollo en el objeto pollo sumándole la nueva cantidad ingresada
            pollo.setCantidadDosPiezas(pollo.getCantidadDosPiezas() + cantidadDosPiezas);
        }
}

//Declaro objeto Contador que hereda de Mesero
class Contador : public Mesero {
    public:
    //Funcion para calcular el total de la orden 
    double calcularTotal(const Tacos& tacos, const Enchiladas& enchiladas, const Pollo& pollo) const {
        //Calcula el total sumando los costos de cada tipo de comida multiplicado por la cantidad pedida
        return tacos.getCantidadBistec() * 8 + tacos.getCantidadChorizo() * 8 + tacos.getCantidadTripita() * 9 +
               enchiladas.getCantidad() * 35 + pollo.getCantidadMedioPollo() * 80 +
               pollo.getCantidadPolloEntero() * 160 + pollo.getCantidadDosPiezas() * 35;
    }
};

#endif // MESERO_H_
