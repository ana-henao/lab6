#ifndef CUERPO_H
#define CUERPO_H


class cuerpo
{
private:

    float PX;
    float PY;
    float masa;
    float R;

public:
    cuerpo(float PX,float PY, float masa, float radio);
    ~cuerpo();
    float getr(float x, float y) const;
    float getangulo(float x, float y)const;
    float getmasa()const;

    float getPX() const;
    float getPY() const;
    float getMass() const;
    float getR() const;
    float getxo() const;
    float getyo() const;
};

#endif // CUERPO_H
