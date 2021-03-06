#ifndef CUERPOGRAF_H
#define CUERPOGRAF_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"
#include <stdlib.h>
#include <time.h>


class cuerpograf: public QGraphicsItem
{
public:
    cuerpograf(float x, float y, float vx, float vy, float masa, float radio);
    ~cuerpograf();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
    void setEscala(float s);
    void actualizar(float masa, float xcentral, float ycentral, float t);
    cuerpo *getEsf();
    void setColor(QColor color);

private:
    cuerpo * esf;
    float escala;
    QColor color=Qt::black;


};

#endif // CUERPOGRAF_H
