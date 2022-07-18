#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    miImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    miImagen->fill(Qt::white);
    mPainter = new QPainter(miImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);

    QPainter painter();

    int x = 0;
    int y = 0;

    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    pincel.setJoinStyle(Qt::MiterJoin);

    dibujar();
}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // Dibujar la imagen
    painter.drawImage(100, 50, *miImagen);
}


void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    QPen pincel;
    pincel.setColor(Qt::black);
    pincel.setWidth(3);
    // Dibujar una linea
    mPainter->setPen(pincel);
    mPainter->drawEllipse(20, 20, 100 , 100);
    update();
}

