#ifndef CUERPOCENTRAL_H
#define CUERPOCENTRAL_H
#include "cuerpo.h"

class cuerpoCentral :public cuerpo
{
private:

    float masa;


public:
    cuerpoCentral(float PX,float PY, float masa, float radio);;
    float getmasa()const;
    void actualizar(float masa);

};

#endif // CUERPOCENTRAL_H
