#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //srand(time(NULL));
    ui->setupUi(this);


    timer=new QTimer(this);
   //cada imagen cambia cada 300ms
    //cada x tiempo actuliza, conecta la señal del tiempo con la actualizacion
    scene = new QGraphicsScene(this);
    scene->setSceneRect(-500,-200,1000,400);

    ui->graphicsView->setScene(scene);
    ui->centralwidget->adjustSize();
    timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));

}

MainWindow::~MainWindow()
{
    delete timer;
    delete scene;
    delete ui;
}

void MainWindow::setplanetas()
{
    scene=new QGraphicsScene();
    scene->setSceneRect(-500,-200,1000,400);

    ui->graphicsView->setScene(scene);
    for (int i=0; i< cuerpos.size() ; i++) {
        cuerpos[i]->setEscala(0.05);
        scene->addItem(cuerpos[i]);

    }
}

QColor* MainWindow::colorRandom()
{
    int r=qrand() % 255;
    int g=qrand() % 255;
    int b=qrand() % 255;

    return new QColor(r,g,b,255);

}

void MainWindow::actualizar()
{

    for (int i = 1;i< cuerpos.size() ;i++ ) {

        //cout <<x << " " << y << endl;
        cuerpos[i]->getEsf()->getr(cuerpos[0]->getEsf()->getPX(),cuerpos[0]->getEsf()->getPY());
        float masa=cuerpos[0]->getEsf()->getmasa();
        cuerpos[i]->actualizar(masa,cuerpos[0]->getEsf()->getPX(),cuerpos[0]->getEsf()->getPY(),dt_);
       //cout <<cuerpos[i]->getEsf()->getPX() << " " << cuerpos[i]->getEsf()->getPY() << endl;
    }
    if(c>0){
    ui->posx->setText(QString::number(cuerpos[c]->getEsf()->getPX()));
    ui->posy->setText(QString::number(cuerpos[c]->getEsf()->getPY()));
    ui->velx->setText(QString::number(cuerpos[c]->getEsf()->getVX()));
    ui->vely->setText(QString::number(cuerpos[c]->getEsf()->getVY()));
    ui->acelx->setText(QString::number(cuerpos[c]->getEsf()->getAX()));
    ui->acely->setText(QString::number(cuerpos[c]->getEsf()->getAY()));
    }
}


void MainWindow::on_pushButton_clicked()
{
    timer->start(dt_);

    cuerpos.append(new cuerpograf(0,0,0,0,70000,300));
    cuerpograf * cuerpo=new cuerpograf(4000,5000,-1.6,1.2,25,100);
    cuerpo->setColor(Qt::green);
    cuerpos.append(cuerpo);
    ui->lista->addItem("Planeta " + QString::number(cuerpos.size()-1));


    setplanetas();
}



void MainWindow::on_agregarplaneta_clicked()
{

    dt_=0.1;
    float x=ui->posxin->value();
    cout << x<< endl;
    float y=ui->posyin->value();
    float vx=ui->velxin->value();
    float vy=ui->velyin->value();
    float m=ui->masain->value();
    float r=ui->radioin->value();
    cuerpograf * cuerpo=new cuerpograf(x,y,vx,vy,m,r);
    QColor* color=colorRandom();
    cuerpo->setColor(*color);
    cuerpos.append(cuerpo);
    ui->lista->addItem("Planeta " + QString::number(cuerpos.size()-1));

    setplanetas();
}

void MainWindow::on_lista_currentIndexChanged(int index)
{
    c=index;


}
