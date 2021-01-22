#include "cuerpograf.h"

cuerpograf::cuerpograf(float x, float y, float vx, float vy, float masa, float radio):escala(1)
{
    float posx,posy,velx,vely,mass,r;
    posx = x;
    posy = y;
    r = radio;
    mass = masa;
    velx = vx;
    vely = vy;

    esf=new cuerpo(x,y,vx,vy,mass,r);
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
    painter->setBrush(color);
    painter->drawEllipse(boundingRect());
}

void cuerpograf::setEscala(float s)
{
    escala = s;
}

void cuerpograf::actualizar(float masa, float xcentral, float ycentral, float t)
{

    esf->actualizar(masa,xcentral,ycentral,t);
    setPos(esf->getPX()*escala,esf->getPY()*escala);
}

cuerpo *cuerpograf::getEsf()
{
    return esf;
}

void cuerpograf::setColor(QColor color)
{
    this->color=color;
}






