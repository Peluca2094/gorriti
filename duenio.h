#pragma once
#include <cstring>
#include <string>

class gorriti{

protected:

    int _codigo;
    char _calles[50];
    char _numero[6];
    char _localidad[50];
    int _antiguedad;
    float _superficie_total;
    float _superficie_cubierta;
    int _habitaciones;




public:
gorriti(int,const char *calles,const char *numeros,const char *localidad,int,float,float,int);


std ::string mostrar_informacion();


};
