#ifndef CUERPOGRAF_H
#define CUERPOGRAF_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"
#include <stdlib.h>
#include <time.h>
#include "cuerpocentral.h"
#include "planeta.h"

class cuerpograf: public QGraphicsItem
{
public:
    cuerpograf(float x, float y, bool central);
    ~cuerpograf();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    void setEscala(float s);
    void actualizar(float r, float angulo, float masa);
    cuerpo *getEsf();

private:
    cuerpo * esf;
    float escala;

};

#endif // CUERPOGRAF_H
