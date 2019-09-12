/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QAction *actionNuev_Imagen;
    QAction *actionGruardad_Archivo;
    QAction *actionFiltroRojo;
    QAction *actionFiltro_Verde;
    QAction *actionFiltro_Azul;
    QAction *actionFiltroMosaico;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuFiltros;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(1172, 815);
        GUI->setStyleSheet(QStringLiteral("background-color: rgb(50, 50, 50);"));
        actionNuev_Imagen = new QAction(GUI);
        actionNuev_Imagen->setObjectName(QStringLiteral("actionNuev_Imagen"));
        actionGruardad_Archivo = new QAction(GUI);
        actionGruardad_Archivo->setObjectName(QStringLiteral("actionGruardad_Archivo"));
        actionFiltroRojo = new QAction(GUI);
        actionFiltroRojo->setObjectName(QStringLiteral("actionFiltroRojo"));
        actionFiltro_Verde = new QAction(GUI);
        actionFiltro_Verde->setObjectName(QStringLiteral("actionFiltro_Verde"));
        actionFiltro_Azul = new QAction(GUI);
        actionFiltro_Azul->setObjectName(QStringLiteral("actionFiltro_Azul"));
        actionFiltroMosaico = new QAction(GUI);
        actionFiltroMosaico->setObjectName(QStringLiteral("actionFiltroMosaico"));
        centralWidget = new QWidget(GUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 271, 231));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 87);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Logo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 20, 851, 751));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 87);"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(280, 20, 20, 691));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        GUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1172, 22));
        menuBar->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuFiltros = new QMenu(menuBar);
        menuFiltros->setObjectName(QStringLiteral("menuFiltros"));
        GUI->setMenuBar(menuBar);
        statusBar = new QStatusBar(GUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GUI->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuFiltros->menuAction());
        menuArchivo->addAction(actionNuev_Imagen);
        menuArchivo->addAction(actionGruardad_Archivo);
        menuFiltros->addAction(actionFiltroRojo);
        menuFiltros->addAction(actionFiltro_Verde);
        menuFiltros->addAction(actionFiltro_Azul);
        menuFiltros->addAction(actionFiltroMosaico);

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "GUI", Q_NULLPTR));
        actionNuev_Imagen->setText(QApplication::translate("GUI", "Nueva Imagen", Q_NULLPTR));
        actionGruardad_Archivo->setText(QApplication::translate("GUI", "Guardar Imagen", Q_NULLPTR));
        actionFiltroRojo->setText(QApplication::translate("GUI", "FiltroRojo", Q_NULLPTR));
        actionFiltro_Verde->setText(QApplication::translate("GUI", "Filtro Verde", Q_NULLPTR));
        actionFiltro_Azul->setText(QApplication::translate("GUI", "Filtro Azul", Q_NULLPTR));
        actionFiltroMosaico->setText(QApplication::translate("GUI", "Filtro Mosaico", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        menuArchivo->setTitle(QApplication::translate("GUI", "Archivo", Q_NULLPTR));
        menuFiltros->setTitle(QApplication::translate("GUI", "Filtros", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
