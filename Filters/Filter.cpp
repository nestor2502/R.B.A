#include <Filter.h>
/**
 * @brief regresa la ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
 * @return ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
 */
string Filter::getPathImage()
{
    return Filter::path;
}
/**
 * @brief verifica si una imagen se puede modificar.
 * @param Imagepath ruta de la imagen a modificar.
 * @return TRUE si es una imagen que se puede modificar, False en otro caso.
 */
bool Filter::verifyImage(string Imagepath)
{
    Mat img = imread(Imagepath);
    return img.empty();
}
/**
 * @brief guarda la imagen procesada en la ruta especificada, si aun no se le aplica un filtro, se guardara
 *        la imagen original en la ruta especificada.
 * @param path ruta donde se desea guardar la imagen.
 */
void Filter::saveImage(string destinationPath)
{
    Mat img = imread(path);
    imwrite(destinationPath,img);
}
/**
 * @brief regresa la extension de la imagen.
 * @return la extension de la imagen.
 */
string Filter::extension()
{
    string auxiliar = "";
    for (int i = path.size()-1; i >= 0; i--)
    {
        if (path[i] == '.')
            break;
        auxiliar += path[i];
    }
    string extension = "";
    for (int i = auxiliar.length()-1; i >= 0; i--)
    {
        extension += auxiliar.at(i);
    }
    return extension;
}
/**
 * @brief colorea una region de pixeles del rectangulo de pixeles delimitado por los pixeles (xb,yb),(xe,ye).
 * @param xb coordenada en x del pixel inicial.
 * @param yb coordenada en y del pixel inicial.
 * @param xe coordenada en x del pixel final.
 * @param ye coordenada en y del pixel final.
 * @param img imagen a colorear.
 */
void Filter::paintRegion(int xb, int yb, int xe, int ye, Mat img) {}
/**
 * @brief aplica el filtro correspondiente.
 */
void Filter::applyFilter(){}
/**
 * @brief Destructor de la clase Filter.
 */
Filter::~Filter()
{
    delete this;
}

