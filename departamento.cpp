#include "gorriti.h"

#include <cstring>
#include <string>

gorriti::gorriti(int codigo,const char *calles,const char *numeros,const char *localidad,int antiguedad,float super_total,float super_cubierta,int habitaciones){

  _codigo=codigo;
   strcpy(_calles, calles);

   strcpy(_numero, numeros);

   strcpy(_localidad, localidad);

    _antiguedad=antiguedad;
    _superficie_total=super_total;
    _superficie_cubierta=super_cubierta;
    _habitaciones=habitaciones;
}

std:: string gorriti::mostrar_informacion(){

    return "Codigo: " + std::to_string(_codigo) + "\n" +
               "Calles: " + _calles + "\n" +
               "Numero: " + _numero + "\n" +
               "Localidad: " + _localidad + "\n" +
               "Antiguedad: " + std::to_string(_antiguedad) + "\n" +
               "Superficie Total: " + std::to_string(_superficie_total) + "\n" +
               "Superficie Cubierta: " + std::to_string(_superficie_cubierta) + "\n" +
               "Habitaciones: " + std::to_string(_habitaciones);



}
