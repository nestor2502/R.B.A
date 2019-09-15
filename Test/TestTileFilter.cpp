#include <TestTileFilter.h>
#include <stdlib.h>
#include <time.h>
/**
 * @brief verifica que el unico color que tenga encendido es el rojo.
 */
void TestTileFilter::testApplyFilter()
{
    int tileWidth;
    string path;
    for (int i = 1; i < 8; i++) {
        srand(time(NULL));
        tileWidth = -2000 + rand()%(10001);
        path = "../Test/TestFiles/img" + to_string(i) + ".jpg";
        filter = new TileFilter(path);
        filter -> setTileWidth(tileWidth);
        filter -> applyFilter();
        Mat img = imread("../Test/RBAcache/tile.jpg");
        int min;
        if (tileWidth > filter->getPixelWidth() || tileWidth < 1)
            tileWidth = 1;
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
            } else if(b != pixel[0] || g != pixel[1] ||r != pixel[2]) {
                return false;
            }
        }
    }
    return true;
}
