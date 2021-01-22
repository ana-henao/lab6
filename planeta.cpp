#include "planeta.h"


void planeta::actualizar(float r, float angulo, float mass)
{
    t+=dt;
    AX=G*mass*cos(angulo)/(r*r);
    AY=G*mass*sin(angulo)/(r*r);
    PX=PX+(VX*t)+(AX*pow(t,2)/2);
    PY=PY+(VY*t)+(AY*pow(t,2)/2);
    VX=VX+(AX*t);
    VY=VY+(AY*t);


}

float planeta::getVX() const
{
    return VX;
}

float planeta::getVY() const
{
    return VY;
}

float planeta::getPX()
{
    return PX;
}

float planeta::getPY()
{
    return PY;
}

planeta::planeta(float posX_, float posY_, float radio_, float masa):cuerpo(posX_,posY_,masa,radio_)
{

}
