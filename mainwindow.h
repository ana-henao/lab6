#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "cuerpo.h"
#include "cuerpograf.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setplanetas();
    QColor *colorRandom();

public slots:
    void actualizar();

private slots:
    void on_pushButton_clicked();
    void on_agregarplaneta_clicked();

    void on_lista_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QGraphicsScene *scene;
    float dt;
    //void keyPressEvent(QKeyEvent *event);
    QVector<cuerpograf *> cuerpos;
   // cuerpografcentral * cuerpoc;
    float dt_=0.1;
    int c=-1;

};
#endif // MAINWINDOW_H
