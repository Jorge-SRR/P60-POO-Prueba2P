#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>


class Circulo : public QPoint
{
    int posx;
    int posy;
    int size;
public:
    Circulo();
    Circulo(int xpos, int ypos, int size);
    int getTalla() const;
    void setTalla(int value);
    int getAncho() const;
    void setAncho(int value);
    int getAnchx() const;
    void setAnchx(int value);
};

#endif // CIRCULO_H
