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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QFrame *line;
    QFrame *line_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Interfaz)
    {
        if (Interfaz->objectName().isEmpty())
            Interfaz->setObjectName(QStringLiteral("Interfaz"));
        Interfaz->resize(1093, 664);
        Interfaz->setStyleSheet(QStringLiteral("background-color: rgb(50, 50, 50);"));
        centralWidget = new QWidget(Interfaz);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        filtros = new QComboBox(centralWidget);
        filtros->setObjectName(QStringLiteral("filtros"));
        filtros->setGeometry(QRect(20, 108, 231, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 28, 231, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 68, 231, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 210, 231, 201));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 87);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/LOGO.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 30, 771, 561));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 87);"));
        label_2->setScaledContents(false);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(260, 0, 20, 621));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 160, 251, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Interfaz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Interfaz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1093, 22));
        Interfaz->setMenuBar(menuBar);
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
