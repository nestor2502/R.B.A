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
    setMaximumSize(QSize(1172,815));
    setMinimumSize(QSize(1172, 815));
    QWidget::setWindowTitle ( "R B A" );
    //setWindowFlags(Qt::WindowCloseButtonHint);
    Qt::WindowFlags flags = Qt::Window |  Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint; this->setWindowFlags(flags);
}

GUI::~GUI()
{
    delete ui;
}
/**
 * @brief GUI::on_actionNuev_Imagen_triggered
 * accion para alicar filtro rojo
 */
void GUI::on_actionNuev_Imagen_triggered()
{
    QString image =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    FileManager manager;
    std::string _path = image.toUtf8().constData();//converir QString a string
    manager.openFilee(_path);//se carga la ruta
    bool correctness= manager.verifyFile();//se verifica el archivo
   if(correctness==1){ //si pasa las pruebas se agrega la imagen
       path = _path;
        QPixmap pix(image);
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));}

   else{
       QMessageBox::information(this, "...", "Archivo no aceptado");
   }
}
/**
 * @brief GUI::on_actionGruardad_Archivo_triggered
 * Metodo para guardar un archivo
 */
void GUI::on_actionGruardad_Archivo_triggered()
{
    if(path !="")
    QMessageBox::information(this, "...", "save");
    else
    QString save =  QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
}
/**
 * @brief GUI::on_actionFiltroRojo_triggered
 * se manda a accion para aplicar filtro rojo
 */
void GUI::on_actionFiltroRojo_triggered()
{
    if(path !=""){
    setImageFiltred("red");}
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::on_actionFiltro_Verde_triggered
 * se manda a accion para aplicar filtro verde
 */
void GUI::on_actionFiltro_Verde_triggered()
{
     if(path !="")
     setImageFiltred("green");
     else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::on_actionFiltro_Azul_triggered
 * se manda a accion para aplicar filtro azul
 */
void GUI::on_actionFiltro_Azul_triggered()
{
    if(path !="")
    setImageFiltred("blue");
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::on_actionFiltroMosaico_triggered
 * se manda a accion para aplicar filtro mosaico
 */
void GUI::on_actionFiltroMosaico_triggered()
{
    if(path !=""){
    imageWidth = controlador->getImageSize(path);//se asigna el tamaño disponible
    MosaicoForm *mosaico = new MosaicoForm(this);
    mosaico->setImageSize(imageWidth);//);imageWidth);//se ingresa el ancho  disponible
    mosaico->setModal(true);
    mosaico->show();
    }
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::setImageFiltred
 * @param key
 * Metodo que aplica filtro y coloca la imagen en la pantalla principal
 */
void GUI::setImageFiltred(string key){
    if(key == "red"){
        controlador->applyRedFilter(path);
        QPixmap pix("../cache/red.jpg");
        int w = ui->label_2->width();
        int h = ui->label_2->height();
        ui->label_2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));}
    if(key == "green"){
        controlador->applyGreenFilter(path);
        QPixmap pix("../cache/green.jpg");
        int w = ui->label_2->width();
        int h = ui->label_2->height();
        ui->label_2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));}
    if(key == "blue"){
        controlador->applyBlueFilter(path);
        QPixmap pix("../cache/blue.jpg");
        int w = ui->label_2->width();
        int h = ui->label_2->height();
        ui->label_2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));}

    }



