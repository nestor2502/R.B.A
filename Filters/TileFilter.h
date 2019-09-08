#include <Filter.h>
#ifndef TileFilter_H
#define TileFilter_H
class TileFilter : Filter {
public:
    /**
     * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
     * @param pathImage ruta de la imagen.
     */
    TileFilter(string pathImage);
    /**
     * @brief aplica el filtro correspondiente.
     */
    void applyFilter(void);
    /**
     * @brief regresa el número de pixeles en ancho que tiene una imagen.
     * @return ancho de pixeles de la imagen a modificar.
     */
    int getPixelWidth();
    /**
     * @brief establece el numero de pixeles que seran un mosaico.
     * @param width número de pixeles que seran un mosaico.
     */
    void setTileWidth(int width);

protected:
    int tileWidth = 1;
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
