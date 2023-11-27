/*
 * Clase Mesero que es para a–adir el pedido
 * y tiene 1 clase hija para dar el total:
 * Contador
 *
 */


#ifndef MESERO_H_
#define MESERO_H_

#include <iostream>
#include <iomanip>
#include "comida.h"

class Mesero {
public:
    void tomarOrden(Tacos& tacos, Enchiladas& enchiladas, Pollo& pollo) {
        int opcion;
        do {
            // Menu
            std::cout << "\nMenu:\n" << std::endl;
            std::cout << "1. Agrega Tacos" << std::endl;
            std::cout << "2. Agrega Enchiladas" << std::endl;
            std::cout << "3. Agrega Pollo" << std::endl;
            std::cout << "4. Total" << std::endl;
            std::cout << "\nSeleccione una opcion: ";
            std::cin >> opcion;

            switch (opcion) {
                case 1:
                    agregarTacos(tacos);
                    break;

                case 2:
                    agregarEnchiladas(enchiladas);
                    break;

                case 3:
                    agregarPollo(pollo);
                    break;

                case 4:
                    std::cout << "Orden tomada. ÁBuen provecho!\n";
                    break;

                default:
                    std::cout << "Opcion invalida. Intente de nuevo.\n";
            }

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

class Contador : public Mesero {
public:
    double calcularTotal(const Tacos& tacos, const Enchiladas& enchiladas, const Pollo& pollo) const {
        return tacos.getCantidadBistec() * 8 + tacos.getCantidadChorizo() * 8 + tacos.getCantidadTripita() * 9 +
               enchiladas.getCantidad() * 35 + pollo.getCantidadMedioPollo() * 80 +
               pollo.getCantidadPolloEntero() * 160 + pollo.getCantidadDosPiezas() * 35;
    }
};

#endif // MESERO_H_
