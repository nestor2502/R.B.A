#include <RedFilter.h>
#include <iostream>
using namespace std;
/**
 * @brief Constructor que recibe la ruta de la imagen a la cual se le aplicara el filtro.
 * @param pathImage ruta de la imagen.
 */
RedFilter::RedFilter(string pathImage){
    path = pathImage;
}

void RedFilter::applyFilter()
{
    Mat img = imread(path);
    paintRegion(0,0,img.rows,img.cols,img);
    path = "../cache/red." + extension();
    cout << "rojo" + path << endl;
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
void RedFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++) {
        for (int j = yb; j < ye; j++) {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int r = pixel[2];
            img.at<Vec3b>(i,j) = {0,0,(uchar)r};
        }
    }
}
