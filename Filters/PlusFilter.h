#include <Filter.h>
#ifndef PlusFilter_H
#define PlusFilter_H
class PlusFilter : public Filter {

private:
    int deltaRed;
    int deltaGreen;
    int deltaBlue;

public:
    /**
     * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
     * @param pathImage ruta de la imagen.
     */
    PlusFilter(string pathImage);


    /**
     * @brief aplica el filtro correspondiente.
     */
    void applyFilter(void);

    /**
     * @brief Establece cuanto cambia la intensidad de cada color al aplicar el filtro.
     * @param x cambio en la intensidad de los rojos.
     * @param y cambio en la intensidad de los verdes.
     * @param z cambio en la intensidad de los azules.
     */
    void setIntensty(int x, int y, int z);

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

    /**
     * @brief Asegura que el valor de alguna componente del vector del pixel se encuentre en el rango [0,255].
     * @param curentIntensity Intensidad actual del color.
     * @param intensityChange Cambio en la intemsidad del color.
     */
    int validateIntensity(int currentIntensity, int intensityChange);
};
#endif
