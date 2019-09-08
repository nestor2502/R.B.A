#ifndef GUI_H
#define GUI_H

#include <QMainWindow>

namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUI(QWidget *parent = 0);
    ~GUI();

private slots:
    void on_actionNuev_Imagen_triggered();

    void on_actionGruardad_Archivo_triggered();

    void on_actionFiltroRojo_triggered();

    void on_actionFiltro_Verde_triggered();

    void on_actionFiltro_Azul_triggered();

    void on_actionFiltroMosaico_triggered();

private:
    Ui::GUI *ui;
};

#endif // GUI_H
