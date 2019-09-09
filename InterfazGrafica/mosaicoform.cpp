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
    //ui->label_3->setText();
    ui->lcdNumber->display(size);


}
