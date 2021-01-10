#include "cuerpograf.h"

cuerpograf::cuerpograf(float x, float y, bool central):escala(1)
{
    float posx,posy,velx,vely,mass,r;
    posx = x;
    posy = y;
    r = 20;
    mass = 50;
    velx = 0;
    vely = 0;
    if (central){
     esf=new cuerpoCentral(x,y,mass,r);
    }
      else{

        esf = new planeta(x,y,velx,vely,r,mass);
    }
    setPos(esf->getPX(),esf->getPY());
}

cuerpograf::~cuerpograf()
{
    delete esf;
}

QRectF cuerpograf::boundingRect() const
{
    return QRectF(-1*escala*esf->getR(),-1*escala*esf->getR(),2*escala*esf->getR(),2*escala*esf->getR());
}

void cuerpograf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
}

void cuerpograf::setEscala(float s)
{
    escala = s;
}

void cuerpograf::actualizar(float r, float angulo, float masa)
{

    //esf->actualizar(r, angulo, masa);
    setPos(esf->getPX(),esf->getPY());
}

cuerpo *cuerpograf::getEsf()
{
    return esf;
}






