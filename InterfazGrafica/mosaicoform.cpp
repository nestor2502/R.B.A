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
