# Proyecto
El puesto de comida rápida “Carmelita" necesita cobrar el total de consumo de los clientes lo más rápido posible para tener un orden y control de las ganancias. 

# Contexto
El usuario solamente podrá añadir la cantidad de una cantidad a la vez de tipos de tacos, de enchiladas con pollo y la cantidad de piezas de pollo que le pidan; en caso de no que el cliente no pidio algo colocar un 0. Todo es un ciclo para facilitar su uso, se añadirán uno por uno, primero una cantidad de taco, enchilada o pollo,y en seguida le mostrará el menú por si quiere añadir otra cosa o finalmente saber el precio total por orden del cliente. La delicuencia esta fea, así que el mesero solo podrá tomar la orden, y el contador es el encargado de saber el total por pedido y cobrar el total de pesos de la orden.

# Funcionalidad
El programa solo recibe la cantidad de ordenes de :

  tipos de tacos
  enchiladas con pollo 
  piezas de pollo  
  
Consta de un menú con las opciones iniciales y corre sobre consola.

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con:
"g++ comida.h mesero.h mainn.cpp"
 
correr en linux:"/a.out"
      
correr en windows:"a.exe"

#Correcciones
Se han añadido 2 clases, una en donde esta la comida, de ella se hereda la clase de los tacos, las enchiladas y el pollo; la otra clase es mesero, que involucra el menú a ordenar y el contador que da el total para ser cobrado, recordar que el menú se muestra después como un cilco para añadir algun otro pedido, para tener un control en la interacción con el usuario. 
