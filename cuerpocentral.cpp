#include<cmath>
#include "cuerpocentral.h"


cuerpoCentral::cuerpoCentral(float PX, float PY, float masa, float radio):cuerpo(PX,PY,masa,radio){

}


float cuerpoCentral::getr(float x, float y)const
{
    float r=sqrt(pow((this->PX-x),2)+pow((this->PY-y),2));
    return r;
}

float cuerpoCentral::getangulo(float x, float y)const
{
    float angulo=atan((PX-x)/(PY-y));
    return angulo;
}

float cuerpoCentral::getmasa()const
{
    return masa;
}

