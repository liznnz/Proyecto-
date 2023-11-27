/*
 * Proyecto Carmelita
 * Lizeth Niniz Corona
 * A01711740
 * 20/11/2023
 */

/*
 * Clase Comida contiene las bases para los platillos
 * y tiene 3 clases hijas que son los tipos de comida:
 * Tacos, Enchiladas y Pollo
 *
 */

#ifndef COMIDA_H_
#define COMIDA_H_

#include <iomanip>

//Declaracion de clase comida
class Comida {

    private:
        //Declaro variables de instancia
        int cantidad;

    public:
        
/**
* Constructor por default
*
* @param
* @return Objeto Empleado
*/
Comida() : cantidad(0) {}

        
/**
 * getter cantidad
 *
 * @param
 * @return int: cantidad 
*/
int getCantidad() const {
    return cantidad;
}

/**
 * setter cantidad
 *
 * @param
 * @return int: cantidad 
*/
void setCantidad(int cantidadComida) {
    cantidad = cantidadComida;
        }
};

//Declaro objeto Taco que hereda de Comida
class Tacos : public Comida {
private:
    int cantidadBistec;
    int cantidadChorizo;
    int cantidadTripita;

public:
    // Constructor
    Tacos() : cantidadBistec(0), cantidadChorizo(0), cantidadTripita(0) {}

    // Getters
    int getCantidadBistec() const {
        return cantidadBistec;
    }

    int getCantidadChorizo() const {
        return cantidadChorizo;
    }

    int getCantidadTripita() const {
        return cantidadTripita;
    }

    // Setters
    void setCantidadBistec(int cantidad) {
        cantidadBistec = cantidad;
    }

    void setCantidadChorizo(int cantidad) {
        cantidadChorizo = cantidad;
    }

    void setCantidadTripita(int cantidad) {
        cantidadTripita = cantidad;
    }
};

//Declaro objeto Enchiladas que hereda de Comida
class Enchiladas : public Comida {
    // Enchiladas hereda directamente de Comida, ya que no tiene atributos adicionales.
};

//Declaro objeto Pollo que hereda de Comida
class Pollo : public Comida {
private:
    int cantidadMedioPollo;
    int cantidadPolloEntero;
    int cantidadDosPiezas;

public:
    // Constructor
    Pollo() : cantidadMedioPollo(0), cantidadPolloEntero(0), cantidadDosPiezas(0) {}

    // Getters
    int getCantidadMedioPollo() const {
        return cantidadMedioPollo;
    }

    int getCantidadPolloEntero() const {
        return cantidadPolloEntero;
    }

    int getCantidadDosPiezas() const {
        return cantidadDosPiezas;
    }

    // Setters
    void setCantidadMedioPollo(int cantidad) {
        cantidadMedioPollo = cantidad;
    }

    void setCantidadPolloEntero(int cantidad) {
        cantidadPolloEntero = cantidad;
    }

    void setCantidadDosPiezas(int cantidad) {
        cantidadDosPiezas = cantidad;
    }
};

#endif // COMIDA_H_
