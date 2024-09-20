#include "precio.h"
#include <cstring>

#include <string>


precio::precio(float precio_venta,float precio_alquiler){


 _precio_venta=precio_venta;
 _precio_alquiler=precio_alquiler;


}

 void precio::set_venta(float precio_venta){

 if(_precio_venta>0){

    _precio_venta=precio_venta;

 }

  else {_precio_venta=0;}

}

 void precio::set_alquiler(float precio_alquiler){


 if(_precio_alquiler>0){

    _precio_alquiler=precio_alquiler;


 }
  else {_precio_alquiler=0;}

}



float precio::get_precio(){

return _precio_venta;
}
float precio::get_alquiler(){

return _precio_alquiler;

}

std:: string precio::mostrar_informacion(){

          return "precio de venta: " + std::to_string(_precio_venta)+
               " precio de alquiler: " + std::to_string(_precio_alquiler);


 }
