/********************************************************************************
** Form generated from reading UI file 'interfaz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZ_H
#define UI_INTERFAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfaz
{
public:
    QWidget *centralWidget;
    QComboBox *filtros;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Interfaz)
    {
        if (Interfaz->objectName().isEmpty())
            Interfaz->setObjectName(QStringLiteral("Interfaz"));
        Interfaz->resize(1077, 659);
        Interfaz->setStyleSheet(QStringLiteral("background-color: rgb(34, 38, 59);"));
        centralWidget = new QWidget(Interfaz);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        filtros = new QComboBox(centralWidget);
        filtros->setObjectName(QStringLiteral("filtros"));
        filtros->setGeometry(QRect(20, 90, 211, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 211, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 50, 211, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 160, 191, 411));
        label->setStyleSheet(QStringLiteral("background-color: rgb(34, 38, 69);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/LOGO.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 20, 771, 561));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(34, 38, 69);"));
        Interfaz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Interfaz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1077, 22));
        Interfaz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Interfaz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Interfaz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Interfaz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Interfaz->setStatusBar(statusBar);

        retranslateUi(Interfaz);

        QMetaObject::connectSlotsByName(Interfaz);
    } // setupUi

    void retranslateUi(QMainWindow *Interfaz)
    {
        Interfaz->setWindowTitle(QApplication::translate("Interfaz", "Interfaz", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Interfaz", "Cargar imagen", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Interfaz", "Guardar Imagen", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Interfaz: public Ui_Interfaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZ_H
