#include "gui.h"
#include "ui_gui.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QPixmap>
#include "filemanager.cpp"
#include <mosaicoform.h>
GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    ui->setupUi(this);
    setMaximumSize(QSize(1210,625));
    setMinimumSize(QSize(1200, 625));
    QWidget::setWindowTitle ( "R B A" );
    setWindowFlags(Qt::WindowCloseButtonHint);
}

GUI::~GUI()
{
    delete ui;
}

void GUI::on_actionNuev_Imagen_triggered()
{
    QString image =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    FileManager manager;
    std::string _path = image.toUtf8().constData();
    manager.openFilee(_path);
    bool correctness= manager.verifyFile();
   if(correctness==1){
       path = _path;
        QPixmap pix(image);
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));}

   else{
       QMessageBox::information(this, "...", "Archivo no aceptado");
   }
}

void GUI::on_actionGruardad_Archivo_triggered()
{
    QString save =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    //QMessageBox::information(this, "...", save);
}

void GUI::on_actionFiltroRojo_triggered()
{

    if(path !="")
    controlador->applyRedFilter(path);
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}

void GUI::on_actionFiltro_Verde_triggered()
{

     if(path !="")
    controlador->applyGreenFilter(path);
     else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}

void GUI::on_actionFiltro_Azul_triggered()
{

    if(path !="")
    controlador->applyBlueFilter(path);
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}

void GUI::on_actionFiltroMosaico_triggered()
{
    if(path !=""){

    MosaicoForm *mosaico = new MosaicoForm(this);
    mosaico->setModal(true);
    mosaico->show();}
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
