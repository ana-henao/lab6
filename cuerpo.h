#ifndef CUERPO_H
#define CUERPO_H
#include <cmath>


class cuerpo
{
private:

    float PX;
    float PY;
    float xo;
    float yo;
    float masa;
    float R;
    float VX=0; //vel en x
    float VY=0; //vel en y
    float AX; //acel en x
    float AY; //acel en y
    float G=6.67384*pow(10,-11); //canvendish
    float V; //magnitud vector de velocidad
    float dt=0.1; //delta tiempo
    float t=0;
    float r;

public:
    cuerpo(float PX,float PY, float vx, float vy, float masa, float radio);
    ~cuerpo();
    void getr(float x, float y);
    float getmasa()const;
    float getPX() const;
    float getPY() const;
    float getR() const;
    float getxo() const;
    float getyo() const;
    void actualizar(float mass, float xcentral, float ycentral,float t);
    float getVX() const;
    float getVY() const;
    float getAX();
    float getAY();
    //void set_vel(float vx, float vy, float px, float py);

};

#endif // CUERPO_H
