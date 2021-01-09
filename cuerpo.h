#ifndef CUERPO_H
#define CUERPO_H


class cuerpo
{
private:
    float PX; //pos en x
    float PY; //pos en y
    float mass; // masa del cuerpo
    float R; //radio del cuerpo
    float VX; //vel en x
    float VY; //vel en y
    float xo;
    float yo;
    float angulo; //angulo en el que va el cuerpo
    float AX; //acel en x
    float AY; //acel en y
    float G; //canvendish
    float V; //vector de velocidad
    float dt; //delta tiempo
    float t=0;
public:
    cuerpo(float posX_,float posY_,float velX_,float velY_,float masa_,float radio_);
    ~cuerpo();
    void actualizar();

    float getPX() const;
    float getPY() const;
    float getMass() const;
    float getR() const;
    float getVX() const;
    float getVY() const;
    float getxo() const;
    float getyo() const;
    void set_vel(float vx, float vy, float px, float py);
};

#endif // CUERPO_H
