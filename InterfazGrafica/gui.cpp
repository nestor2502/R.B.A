#include "gui.h"
#include "ui_gui.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QPixmap>
#include "filemanager.cpp"
#include <QInputDialog>
#include <sstream>
GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    ui->setupUi(this);
    //tamaños establecidos para las ventanas
    setMaximumSize(QSize(1172,815));
    setMinimumSize(QSize(1172, 815));
    QWidget::setWindowTitle ( "R B A" );
    Qt::WindowFlags flags = Qt::Window |  Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint; this->setWindowFlags(flags);
    ui->actionGruardad_Archivo->setEnabled(false);
    QDir().mkpath("RBAcache");
}

GUI::~GUI()
{
    delete ui;
}
/**
 * @brief GUI::on_actionNuev_Imagen_triggered
 * accion para seleccionar una imagen
 */
void GUI::on_actionNuev_Imagen_triggered()
{
    ui->label_2->clear();
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
       QMessageBox::information(this, "...", "Archivo no seleccionado o archivo no aceptado");
   }
}
/**
 * @brief GUI::on_actionGruardad_Archivo_triggered
 * Metodo para guardar un archivo
 */
void GUI::on_actionGruardad_Archivo_triggered()
{
    QString name = QInputDialog::getText(this, "Guardar ","Ingresa un nombre para el archivo");
    QString path_temp = QFileDialog::getExistingDirectory(this, tr("selecciona la carpeta"), ".", QFileDialog::ReadOnly);
    //QMessageBox::information(this, "...", path_temp);
    std::string _path = path_temp.toUtf8().constData();
    std::string name2 = name.toUtf8().constData();
    saveImageFiltred(_path, name2);
}
/**
 * @brief GUI::on_actionFiltroRojo_triggered
 * se manda a accion para aplicar filtro rojo
 */
void GUI::on_actionFiltroRojo_triggered()
{
    if(path !=""){
        controlador->applyRedFilter(path);
        setImageFiltred("red");
        tipoFiltro = "red";}
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::on_actionFiltro_Verde_triggered
 * se manda a accion para aplicar filtro verde
 */
void GUI::on_actionFiltro_Verde_triggered()
{
    if(path !=""){
        controlador->applyGreenFilter(path);
        setImageFiltred("green");
        tipoFiltro = "green";}
     else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}
/**
 * @brief GUI::on_actionFiltro_Azul_triggered
 * se manda a accion para aplicar filtro azul
 */
void GUI::on_actionFiltro_Azul_triggered()
{
    if(path !=""){
        controlador->applyBlueFilter(path);
        setImageFiltred("blue");
        tipoFiltro = "blue";}
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
    std::string s;
    std::stringstream out;
    out << imageWidth;
    s = out.str();
    char buffer[100];
    strcpy(buffer,s.c_str());
    std::cout << buffer;
    string texto = "Tamaño disponible: ";
    int size = QInputDialog::getInt(this, "Tamaño disponible: ", buffer);
    if(size<=0){
        QMessageBox::information(this, "...", "El tamaño debe ser mayor a 0");
    }
    else if(size>imageWidth){
        QMessageBox::information(this, "...", "El tamaño debe ser menor o igual al especificado");
    }
    else if(size>0 && size<=imageWidth){
    controlador->applyTileFilter(path, size);
    setImageFiltred("tile");
    tipoFiltro ="tile";}
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
        QString r = "RBAcache/red.jpg";
        showImage(r);}
    if(key == "green"){
        QString r = "RBAcache/green.jpg";
        showImage(r);}
    if(key == "blue"){
        QString r = "RBAcache/blue.jpg";
        showImage(r);}
    if(key == "tile"){
        QString r = "RBAcache/tile.jpg";
        showImage(r);}
    if(key == "plus"){
        QString r = "RBAcache/plus.jpg";
        showImage(r);}

    }
/**
 * @brief GUI::saveImageFiltred
 * @param _path
 * @param name
 * metodo que guarda la imagen en la ruta seleccionada
 */
void GUI::saveImageFiltred(string _path, string name){

    string ruta = _path+"/"+name+".jpg";
    controlador->saveImage(ruta, tipoFiltro);
}



/**
 * @brief GUI::on_actionFiltro_Plus_triggered
 * metodo que aplica el filtro pls
 */
void GUI::on_actionFiltro_Plus_triggered()
{
    if(path !=""){
        int a = QInputDialog::getInt(this, "Filtro plus ", "Ingrese el el cambio en el color rojo");
        int b = QInputDialog::getInt(this, "Filtro plus ", "Ingrese el el cambio en el color verde");
        int c = QInputDialog::getInt(this, "Filtro plus ", "Ingrese el el cambio en el color azul");

        controlador->applyPlusFilter(path, a, b,c);
        setImageFiltred("plus");//se aplica el filtro
        tipoFiltro = "plus";}
    else{QMessageBox::information(this, "...", "No hay una imagen cargada");}
}

void GUI::showImage(QString _path){
    QPixmap pix(_path);
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
    ui->actionGruardad_Archivo->setEnabled(true);

}
