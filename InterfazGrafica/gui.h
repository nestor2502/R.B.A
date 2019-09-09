#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include "driver.h"
#include <string>
namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUI(QWidget *parent = 0);
    ~GUI();
    int getImageSize();

private slots:
    void on_actionNuev_Imagen_triggered();

    void on_actionGruardad_Archivo_triggered();

    void on_actionFiltroRojo_triggered();

    void on_actionFiltro_Verde_triggered();

    void on_actionFiltro_Azul_triggered();

    void on_actionFiltroMosaico_triggered();

    void setImageFiltred(string key);


private:
    Ui::GUI *ui;
    Driver *controlador = new Driver();
    string path;
    int imageWidth;
    int imageSizeSelection;
};

#endif // GUI_H
