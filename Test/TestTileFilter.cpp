#include <TestTileFilter.h>
#include <stdlib.h>
#include <time.h>
/**
 * @brief verifica que el filtro se aplico correctamente.
 */
void TestTileFilter::testApplyFilter()
{
    int tileWidth;
    string path;
    for (int i = 1; i < 8; i++) {
        srand(time(NULL));
        path = "../Test/TestFiles/img" + to_string(i) + ".jpg";
        filter = new TileFilter(path);
        tileWidth = rand()%filter->getPixelWidth()+1;
        filter -> setTileWidth(tileWidth);
        filter -> applyFilter();
        Mat img = imread("../Test/RBAcache/tile.jpg");
        int min;
        for (int j = 0; j < img.rows; j++)
        {
            for (int k = 0; k < img.cols; k = k+tileWidth)
            {
                if (img.cols < k+tileWidth)
                    min = img.cols;
                else
                    min = k+tileWidth;
                CPPUNIT_ASSERT(averageValueInRegion(k,j,min,j+1,img));
            }
        }
    }
}
/**
 * @brief verifica que los colores en ese rango conicidan dentro de cierto rango
 * @param xb coordenada en x del pixel inicial.
 * @param yb coordenada en y del pixel inicial.
 * @param xe coordenada en x del pixel final.
 * @param ye coordenada en y del pixel final.
 * @param img imagen donde se verifica los colores.
 * @return true si colores en ese rango coniciden dentro de cierto rango
 *         false en otro caso
 */
bool TestTileFilter::averageValueInRegion(int xb, int yb, int xe, int ye, Mat img)
{
    int r,g,b;
    for (int i = yb; i < ye; i++)
    {
        for (int j = xb; j < xe; j++)
        {
            Vec3b pixel = img.at<Vec3b>(i,j);
            if (i == yb && j == xb) {
                b = pixel[0];
                g = pixel[1];
                r = pixel[2];
            /*como en la modificacion de imagenes de pierde informacion
             *admitiremos que la diferencia sea a lo más de 50.
             *aclaramos que incluso con esta tolerancia puede fallar con diferentest imagenes
             *ya que la perdidda de informacion depende de la imagen
             *pero notese que aunque al volver a cargar la imagen se pierde información
             *se puede ver que el filtro hace lo que debería hacer */
            } else if(!inTheMarginOfError(b,pixel[0],50) &&
                      !inTheMarginOfError(g,pixel[1],50) &&
                      !inTheMarginOfError(r,pixel[2],50)) {
                return false;
            }
        }
    }
    return true;
}
/**
 * @brief verifica que variable esta en el rango[(compare-erorMargin),(compare-errorMargin)]
 * @param variable
 * @param compare
 * @param errorMargin
 * @return true si variable esta en el rango[(compare-erorMargin),(compare-errorMargin)]
 *         false en otro caso.
 */
bool TestTileFilter::inTheMarginOfError(int variable, int compare, int errorMargin)
{
    for (int i = compare-errorMargin; i <= compare+errorMargin; i++)
        if (variable == i)
            return true;
    return false;
}
