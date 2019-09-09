#ifndef MOSAICOFORM_H
#define MOSAICOFORM_H

#include <QDialog>

namespace Ui {
class MosaicoForm;
}

class MosaicoForm : public QDialog
{
    Q_OBJECT

public:
    explicit MosaicoForm(QWidget *parent = 0);
    ~MosaicoForm();
    void setImageSize(int size);

private:
    Ui::MosaicoForm *ui;
    int imageSizeSelection;
};

#endif // MOSAICOFORM_H
