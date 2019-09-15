#include "TestBlueFilter.h"

/**
 * @brief TestBluefilter::TestApplyBluefilter
 * Prueba para  la clase blue filter, verifica que realmente
 * se modifico el valor de azul en todos los pixeles
 */
void TestBluefilter::TestApplyBluefilter()
{
    string path;
    for (int i = 1; i < 8; i++) {//se obtiene cada una de las 7 imagenes en la carpeta test
         path = "../Test/TestFiles/img" + to_string(i) + ".jpg";
         test = new BlueFilter(path);
         test -> applyFilter();
         Mat img = imread("../Test/RBAcache/blue.jpg");
         int red = 0;
         int blue = 0;
         int green = 0;
         for(int j = 0; j < img.rows; j++) {
             for (int k = 0; k <img.cols; k++)
                {
                    Vec3b pixel = img.at<Vec3b>(j,k);
                    blue += (int)pixel[0];
                    green += (int)pixel[1];
                    red += (int)pixel[2];
                }
            }
            CPPUNIT_ASSERT(blue >= green && blue >= red);//se verifica que el valor azul sea mayor que los demas
        }

}
