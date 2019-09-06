#include "interfaz.h"
#include "ui_interfaz.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

Interfaz::Interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
    ui->filtros->addItem("Filtro Rojo");
    ui->filtros->addItem("Filtro Verde");
    ui->filtros->addItem("Filtro Azul");
    ui->filtros->addItem("Filtro Mosaico");
    ui->pushButton_2->setEnabled(false);

}


Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_pushButton_clicked()
{
    QString imagen =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    ui->pushButton_2->setEnabled(true);
}

void Interfaz::on_pushButton_2_clicked()
{
    QString save =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    //QMessageBox::information(this, "...", save);
}

void Interfaz::on_filtros_activated(const QString &arg1)
{
    if(arg1=="Filtro Rojo"){
        QMessageBox::information(this, "...", "Filtro Rojo ");
    }
    if(arg1=="Filtro Verde"){
        QMessageBox::information(this, "...", "Filtro Verde ");
    }
    if(arg1=="Filtro Azul"){
        QMessageBox::information(this, "...", "Filtro Azul ");
    }
    if(arg1=="Filtro Mosaico"){
        QMessageBox::information(this, "...", "Filtro Mosaico ");
    }
}
