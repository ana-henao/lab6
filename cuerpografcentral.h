#ifndef CUERPOGRAF_H
#define CUERPOGRAF_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"
#include <stdlib.h>
#include <time.h>
#include"cuerpocentral.h"

class cuerpografcentral: public QGraphicsItem
{
public:
    cuerpografcentral(float x, float y);
    ~cuerpografcentral();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    void setEscala(float s);
    cuerpoCentral *getEsf();


private:

    cuerpoCentral * esf;
    float escala;

};

#endif // CUERPOGRAF_H
