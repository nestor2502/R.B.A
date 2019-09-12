#include <GreenFilter.h>
/**
 * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
 * @param pathImage ruta de la imagen.
 */
GreenFilter::GreenFilter(string pathImage){
    path = pathImage;
}
/**
 * @brief aplica el filtro correspondiente.
 */
void GreenFilter::applyFilter()
{
    Mat img = imread (path);
    paintRegion(0,0,img.rows,img.cols,img);
    path = "RBAcache/green." + extension();
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
void GreenFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++)
    {
        for (int j = yb; j < ye; j++)
        {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int g = pixel[1];
            img.at<Vec3b>(i,j) = {0,(uchar)g,0};
        }
    }
}
