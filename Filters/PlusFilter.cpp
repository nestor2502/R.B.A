#include <PlusFilter.h>
/**
 * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
 * @param pathImage ruta de la imagen.
 */
PlusFilter::PlusFilter(string pathImage)
{
    path = pathImage;
}

/**
 * @brief Establece cuanto cambia la intensidad de cada color al aplicar el filtro.
 * @param x cambio en la intensidad de los rojos.
 * @param y cambio en la intensidad de los verdes.
 * @param z cambio en la intensidad de los azules.
 */
void PlusFilter::setIntensty(int x, int y, int z)
{
    deltaRed=x;
    deltaGreen=y;
    deltaBlue=z;
}

/**
 * @brief Asegura que el valor de alguna componente del vector del pixel se encuentre en el rango [0,255].
 * @param colorIntensity valor a verificar en el rango.
 */
int PlusFilter::validateIntensity(int currentIntensity,int intensityChange)
{
    if ((currentIntensity+intensityChange)>255)
    {
        return 255;
    }
    else if((currentIntensity+intensityChange)<0)
    {
        return 0;
    }
    else
    {
        return currentIntensity+intensityChange;
    }
}

/**
 * @brief aplica el filtro correspondiente.
 */
void PlusFilter::applyFilter()
{
    Mat img = imread(path);
    paintRegion(0,0,img.cols,img.rows,img);
    path = "RBAcache/plus." + extension();
    imwrite(path,img);
}

/**
 * @brief colorea una region de pixeles del rectangulo de pixeles delimitado por los pixeles (xb,yb),(xe,ye).
 * @param xb coordenada en x del pixel inicial.
 * @param yb coordenada en y del pixel inicial.
 * @param xe coordenada en x del pixel final.
 * @param ye coordenada en y del pixel final.
 * @param img imagen a colorear.
 */
void PlusFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++) 
    {
        for (int j = yb; j < ye; j++) 
        {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int b = validateIntensity(pixel[0],deltaBlue);
            int g = validateIntensity(pixel[1],deltaGreen);
            int r = validateIntensity(pixel[2],deltaRed);
            img.at<Vec3b>(i,j) = {(uchar)b,(uchar)g,(uchar)r};
        }
    }
}
