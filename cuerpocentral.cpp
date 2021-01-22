#include<cmath>
#include "cuerpocentral.h"


cuerpoCentral::cuerpoCentral(float PX, float PY, float masa, float radio):cuerpo(PX,PY,masa,radio){

}


float cuerpoCentral::getmasa()const
{
    return masa;
}

void cuerpoCentral::actualizar(float masa)
{
    this->masa=masa;
}

