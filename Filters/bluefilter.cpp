#include <bluefilter.h>
#include <iostream>

BlueFilter::BlueFilter(string pathImage){
    path = pathImage;
}
void BlueFilter::applyFilter()
{
    Mat img = imread (path);
    if (img.empty())
    paintRegion(0,0,img.rows,img.cols,img);

}

void BlueFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++) {
        for (int j = yb; i < ye; i++) {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int b = pixel[0];
            img.at<Vec3b>(i,j) = {(uchar)b,0,0};
        }
    }
    imwrite("filtroazul.jpg",img);
}
