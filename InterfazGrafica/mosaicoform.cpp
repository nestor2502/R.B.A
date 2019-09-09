#include "mosaicoform.h"
#include "ui_mosaicoform.h"

MosaicoForm::MosaicoForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MosaicoForm)
{
    ui->setupUi(this);
}

MosaicoForm::~MosaicoForm()
{
    delete ui;
}

void MosaicoForm::setImageSize(int size){
    ui->lcdNumber->display(size);

}

void MosaicoForm::on_pushButton_clicked()
{
    this->close();

}

void MosaicoForm::on_pushButton_2_clicked()
{
    this->close();
}
