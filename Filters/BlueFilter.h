#include <Filter.h>
#ifndef BlueFilter_H
#define BlueFilter_H
class BlueFilter : Filter {
public:
    /**
     * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
     * @param pathImage ruta de la imagen.
     */
    BlueFilter(string pathImage);
    /**
     * @brief aplica el filtro correspondiente.
     */
    void applyFilter(void);
protected:
    /**
     * @brief colorea una region de pixeles del rectangulo de pixeles delimitado por los pixeles (xb,yb),(xe,ye).
     * @param xb coordenada en x del pixel inicial.
     * @param yb coordenada en y del pixel inicial.
     * @param xe coordenada en x del pixel final.
     * @param ye coordenada en y del pixel final.
     * @param img imagen a colorear.
     */
    void paintRegion(int xb, int yb, int xe, int ye, Mat img);
};
#endif
