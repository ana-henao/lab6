#include "cuerpo.h"
#include<math.h>



cuerpo::cuerpo(float PX, float PY, float masa, float radio)
{
    this->PX = PX; //pos en x
    this->PY = PY; //pos en y
    this->R = radio; //radio del cuerpo
    this->masa=masa;
}

cuerpo::~cuerpo()
{

}

float cuerpo::getr(float x, float y) const
{

}

float cuerpo::getangulo(float x, float y) const
{

}

float cuerpo::getmasa() const
{
    return masa;
}

float cuerpo::getPX() const
{
    return PX;
}

float cuerpo::getPY() const
{
    return PY;
}

float cuerpo::getMass() const
{
    return masa;
}

float cuerpo::getR() const
{
    return R;
}

float cuerpo::getxo() const
{
    return 0;
}

float cuerpo::getyo() const
{
    return 0;
}
