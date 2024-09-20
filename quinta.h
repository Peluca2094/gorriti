
#pragma once
#include "gorriti.h"

class quinta: public gorriti{

 private:
 bool _pileta;
 bool _quincho;

 public:

    quinta (int,const char *calles,const char *numeros,const char *localidad,int,float,float,int,bool,bool);

    void set_pileta(bool);
    void set_quincho(bool);

    bool get_pileta();
    bool gett_quincho();

std::string mostrar_informacion();

};
