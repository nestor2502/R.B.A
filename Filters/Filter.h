#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/utility.hpp>
#include "opencv2/imgcodecs.hpp"
#include <opencv2/core.hpp>
#include <string>
using namespace std;
using namespace  cv;
#ifndef Filter_H
#define Filter_H
/**
 * @class Filter
 * @brief Clase padre que contiene que contiene lo basico que debe tener un filtro
 */
class Filter{
protected:
    /** Ruta de la imagen a la que se le aplico el filtro */
    string path;
    /** contador del número de imagenes creadas */
    static int count;
    /**
     * @brief colorea una region de pixeles del rectangulo de pixeles delimitado por los pixeles (xb,yb),(xe,ye).
     * @param xb coordenada en x del pixel inicial.
     * @param yb coordenada en y del pixel inicial.
     * @param xe coordenada en x del pixel final.
     * @param ye coordenada en y del pixel final.
     * @param img imagen a colorear.
     */
    virtual void paintRegion(int xb, int yb, int xe, int ye, Mat img);
public:
    virtual ~Filter();
    /**
     * @brief aplica el filtro correspondiente.
     */
    virtual void applyFilter(void);
    /**
     * @brief regresa la ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
     * @return ruta donde se guardo la imagen a la que se le aplico el filtro correspondiente.
     */
    string getPathImage(void);
};
#endif
