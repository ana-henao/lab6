#ifndef CUERPOCENTRAL_H
#define CUERPOCENTRAL_H
#include "cuerpo.h"

class cuerpoCentral :public cuerpo
{
private:
    float PX;
    float PY;
    float masa;
    float r;

public:
    cuerpoCentral(float PX,float PY, float masa, float radio);;
    float getr(float x, float y) const;
    float getangulo(float x, float y)const;
    float getmasa()const;


};

#endif // CUERPOCENTRAL_H
