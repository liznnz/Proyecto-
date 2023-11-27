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

//Declaro objeto Tacos que hereda de Comida
class Tacos : public Comida {

    private:
        //Declaro variables de instancia
        int cantidadBistec;
        int cantidadChorizo;
        int cantidadTripita;

    public:
/**
* Constructor por default
*
* @param
* @return Objeto Tacos
*/
Tacos() : cantidadBistec(0), cantidadChorizo(0), cantidadTripita(0) {}

/**
 * getter cantidad de bistec, chorizo y tripita
 *
 * @param
 * @return int: cantidad de bistec, chorizo y tripita
*/
int getCantidad() const {
    return cantidad;
}  

int getCantidadBistec() const {
    return cantidadBistec;
}

int getCantidadChorizo() const {
    return cantidadChorizo;
}

int getCantidadTripita() const {
    return cantidadTripita;
}

/**
 * setter cantidad de bistec, chorizo y tripita
 *
 * @param
 * @return int: cantidad de bistec, chorizo y tripita
*/
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
        //Declaro variables de instancia
        int cantidadMedioPollo;
        int cantidadPolloEntero;
        int cantidadDosPiezas;

    public:
/**
* Constructor por default
*
* @param
* @return Objeto Pollo
*/
Pollo() : cantidadMedioPollo(0), cantidadPolloEntero(0), cantidadDosPiezas(0) {}

/**
 * getter cantidad de bistec, chorizo y tripita
 *
 * @param
 * @return int: cantidad de bistec, chorizo y tripita
*/
int getCantidadMedioPollo() const {
    return cantidadMedioPollo;
}

int getCantidadPolloEntero() const {
    return cantidadPolloEntero;
}

int getCantidadDosPiezas() const {
    return cantidadDosPiezas;
}

/**
 * setter cantidad de bistec, chorizo y tripita
 *
 * @param
 * @return int: cantidad de bistec, chorizo y tripita
*/
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
