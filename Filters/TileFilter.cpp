#include <TileFilter.h>
//#include <omp.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#define RGB 3
TileFilter::TileFilter(string pathImage)
{
    path = pathImage;
}

int TileFilter::getPixelWidth()
{
    Mat img = imread(path);
    return img.cols;
}

void TileFilter::setTileWidth(int width)
{
    tileWidth = width;
}

void TileFilter::applyFilter()
{
    Mat img = imread(path);
    paintRegion(0,0,img.cols,img.rows,img);
    path = "../cache/tile." + extension();
    cout << "mosaico" + path << endl;
    imwrite(path,img);
    cout << img.cols << endl;
    cout << img.cols << endl;
}

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
    //cout << bgr[0] << endl;
    return bgr;
}
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
