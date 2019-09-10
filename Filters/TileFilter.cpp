#include <TileFilter.h>
/**
 * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
 * @param pathImage ruta de la imagen.
 */
TileFilter::TileFilter(string pathImage)
{
    path = pathImage;
}
/**
 * @brief regresa el número de pixeles en ancho que tiene una imagen.
 * @return ancho de pixeles de la imagen a modificar.
 */
int TileFilter::getPixelWidth()
{
    Mat img = imread(path);
    return img.cols;
}
/**
 * @brief establece el numero de pixeles que seran un mosaico.
 * @param width número de pixeles que seran un mosaico.
 */
void TileFilter::setTileWidth(int width)
{
    tileWidth = width;
}
/**
 * @brief aplica el filtro correspondiente.
 */
void TileFilter::applyFilter()
{
    Mat img = imread(path);
    paintRegion(0,0,img.cols,img.rows,img);
    path = "../cache/tile." + extension();
    imwrite(path,img);
}
/**
 * @brief calcula el valor promedio en una region delimitada por los pixeles en las coordenas (xb,yb),(xe,ye).
 * @param yb coordenada en y del pixel inicial.
 * @param xe coordenada en x del pixel final.
 * @param ye coordenada en y del pixel final.
 * @param img a promediar n pixeles
 * @return arreglo con tres elementos que tienen los valores promedio rgb de los n pixeles, pero en orden bgr.
 */
int* TileFilter::calculateAverageValueInRegion(int xb, int yb, int xe, int ye, Mat img)
{
    int count = 0;
    static int bgr[3];
    bgr[0] = 0;
    bgr[1] = 0;
    bgr[2] = 0;
    for (int i = yb; i < ye; i++)
    {
        for (int j = xb; j < xe; j++, count ++)
        {
            Vec3b pixel = img.at<Vec3b>(i,j);
            bgr[0] += pixel[0];
            bgr[1] += pixel[1];
            bgr[2] += pixel[2];
        }
    }
    return bgr;
}
/**
 * @brief colorea una region de pixeles del rectangulo de pixeles delimitado por los pixeles (xb,yb),(xe,ye).
 * @param xb coordenada en x del pixel inicial.
 * @param yb coordenada en y del pixel inicial.
 * @param xe coordenada en x del pixel final.
 * @param ye coordenada en y del pixel final.
 * @param img imagen a colorear.
 */
void TileFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    int min;
    for (int i = yb; i < ye; i++)
    {
        for (int j = xb; j < xe; j = j+tileWidth)
        {
            if (xe < j+tileWidth)
                min = xe;
            else
                min = j+tileWidth;
            int *bgr = calculateAverageValueInRegion(j,i,min,i+1,img);
            for (int k = j; k < min; k++)
            {
                img.at<Vec3b>(i,k) = {(uchar)bgr[0], (uchar)bgr[1], (uchar)bgr[2]};
            }
        }
    }
}
