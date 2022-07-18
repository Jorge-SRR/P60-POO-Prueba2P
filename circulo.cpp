#include "circulo.h"

int Circulo::getTalla() const
{
    return size;
}

void Circulo::setTalla(int value)
{
    size = value;
}

int Circulo::getAncho() const
{
    return posy;
}

void Circulo::setAncho(int value)
{
    posy = value;
}

int Circulo::getAnchx() const
{
    return posx;
}

void Circulo::setAnchx(int value)
{
    posx = value;
}

Circulo::Circulo()
{
    posy=50;
    posx=20;
    size=100;
}

Circulo::Circulo(int xpos, int ypos, int size)
{
    this->posx=xpos;
    this->posy=ypos;
    this->size=size;
}

