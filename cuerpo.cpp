#include "cuerpo.h"
#include<math.h>


cuerpo::cuerpo(float posX_, float posY_, float velX_, float velY_, float masa_, float radio_)
{
    PX = posX_; //pos en x
    PY = posY_; //pos en y
    mass = masa_; // masa del cuerpo
    R = radio_; //radio del cuerpo
    VX = velX_; //vel en x
    VY = velY_; //vel en y
    xo=posX_;
    yo=posY_;
    AX = 0; //acel en x
    AY = 0; //acel en y
    G = 6.67384*pow(10,-11); //cavendish
    V = 0; //vector de velocidad
    dt = 0.1; //delta tiempo
}

cuerpo::~cuerpo()
{

}

void cuerpo::actualizar()
{
    t+=dt;
    PX=PX+VX*t+G*mass/
}


float cuerpo::getPY() const
{
    return PY;
}

float cuerpo::getMass() const
{
    return mass;
}

float cuerpo::getR() const
{
    return R;
}

float cuerpo::getVX() const
{
    return VX;
}

float cuerpo::getVY() const
{
    return VY;
}

float cuerpo::getxo() const
{
    return xo;
}

float cuerpo::getyo() const
{
    return yo;
}

float cuerpo::getPX() const
{
    return PX;
}

void cuerpo::set_vel(float vx, float vy, float px, float py)
{
    VX = vx;
    VY = vy;
    PX = px;
    PY = py;
}
