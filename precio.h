#pragma once

#include <string>
using namespace std;

class precio{
private:

   float _precio_venta;
   float  _precio_alquiler;

public:
precio (float,float);

void set_venta(float);
void set_alquiler(float);

float get_precio();
float get_alquiler();

std:: string mostrar_informacion();






};
