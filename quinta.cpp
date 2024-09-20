
#include "quinta.h"
#include <cstring>
#include <string>


quinta::quinta (int codigo,const char *calles,const char *numeros,const char *localidad,int antiguedad,float super_total,float super_cubierta,int habitaciones,bool pileta,bool quincho)
:gorriti(codigo,calles,numeros,localidad,antiguedad,super_total,super_cubierta,habitaciones){

        set_pileta(pileta);
        set_quincho(quincho);


}








  void quinta::set_pileta(bool pileta){

    if(pileta==true){

    _pileta=pileta;

    }
       else if(pileta==false){

        _pileta=pileta;

       }
}

void quinta::set_quincho(bool quincho){

  if (quincho==true){

    _quincho=quincho;


  }
   else if(_quincho==false){

    _quincho=quincho;

   }

}

 bool quinta::get_pileta(){

   return _pileta;
 }

  bool quinta::gett_quincho(){

    return _quincho;

  }


std::string quinta::mostrar_informacion(){

   return "Codigo: " + std::to_string(_codigo) + "\n" +
               "Calles: " + _calles + "\n" +
               "Numero: " + _numero + "\n" +
               "Localidad: " + _localidad + "\n" +
               "Antiguedad: " + std::to_string(_antiguedad) + "\n" +
               "Superficie Total: " + std::to_string(_superficie_total) + "\n" +
               "Superficie Cubierta: " + std::to_string(_superficie_cubierta) + "\n" +
               "Habitaciones: " + std::to_string(_habitaciones)+ "\n" +

             "Pileta: " + (_pileta ? "true" : "false") + "\n" +
               "Quincho: " + (_quincho ? "true" : "false");


}
