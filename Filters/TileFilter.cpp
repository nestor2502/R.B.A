#include <TileFilter.h>
#include <omp.h>

TileFilter::TileFilter(string pathImage)
{
    TileFilter::path = pathImage;
}

int TileFilter::getPixelWidth()
{
    Mat img = imread(path);
    return img.cols;
}

void TileFilter::setTileWidth(int width)
{
    TileFilter::tileWidth = width;
}

void TileFilter::applyFilter()
{
    Mat img = imread(path);
    #pragma omp for
        for (int i = 0; i < img.rows; i++)
            paintRegion(i,0,i,img.cols,img);
    path = "../cache/tile." + extension();
#pragma omp barrier
        imwrite(path,img);
        imshow("tile",img);
}

void TileFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    int i, average = 0, count = 0, j = 1;
    for (i = yb; i < ye; i++)
    {
        average += (int)img.at<uchar>(xb,i);
        count++;
        if (i == j*tileWidth -1)
        {
            average = average/count;
            for (int k = i-(tileWidth-1);k <= i; k++)
            {
                img.at<uchar>(xe,k) = (uchar)average;
            }
            average = 0;
            count = 0;
            j++;
        }

        if (i == ye-1 && i < j*tileWidth -1)
        {
            average = average/count;
            for (int k = i-(count-1); k < ye; k++)
            {
                img.at<uchar>(xb,k) = (uchar)average;
            }
        }
    }
}
