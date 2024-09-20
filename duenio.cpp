
#include "jefe.h"
#include <cstring>
#include <string>


jefe::jefe(const char *apellido,const char *nombre,const char *dni,const char *celu){


   strcpy(_apellidi, apellido);
     strcpy(_nombre, nombre);

   strcpy(_dni, dni);
      strcpy(_celular, celu);



}

std::string jefe::mostrar_informacion(){

         return "Apellido: " + std::string(_apellidi) + "\n" +
               "Nombre: " + std::string(_nombre) + "\n" +
               "DNI: " + std::string(_dni) + "\n" +
               "Celular: " + std::string(_celular);


}
