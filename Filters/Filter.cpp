#include <Filter.h>
/**
 * @brief regresa la ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
 * @return ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
 */
string Filter::getPathImage() {return Filter::path;}
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
Filter::~Filter(){}

