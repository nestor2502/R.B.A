/********************************************************************************
** Form generated from reading UI file 'mosaicoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSAICOFORM_H
#define UI_MOSAICOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MosaicoForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *MosaicoForm)
    {
        if (MosaicoForm->objectName().isEmpty())
            MosaicoForm->setObjectName(QStringLiteral("MosaicoForm"));
        MosaicoForm->resize(400, 300);
        MosaicoForm->setStyleSheet(QStringLiteral("background-color: rgb(50, 50, 50);"));
        buttonBox = new QDialogButtonBox(MosaicoForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(MosaicoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 141, 51));
        label->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_2 = new QLabel(MosaicoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 221, 41));
        label_2->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        lineEdit = new QLineEdit(MosaicoForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 170, 291, 31));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 87);"));
        lcdNumber = new QLCDNumber(MosaicoForm);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(180, 40, 171, 41));

        retranslateUi(MosaicoForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), MosaicoForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MosaicoForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(MosaicoForm);
    } // setupUi

    void retranslateUi(QDialog *MosaicoForm)
    {
        MosaicoForm->setWindowTitle(QApplication::translate("MosaicoForm", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MosaicoForm", "Tama\303\261o disponible:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MosaicoForm", "Ingrese el tama\303\261o que desea", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MosaicoForm: public Ui_MosaicoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSAICOFORM_H
