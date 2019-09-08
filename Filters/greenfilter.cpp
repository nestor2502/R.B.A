#include <greenfilter.h>
#include <iostream>

GreenFilter::GreenFilter(string pathImage){
    path = pathImage;
}
void GreenFilter::applyFilter()
{
    Mat img = imread (path);
    if (img.empty())
    paintRegion(0,0,img.rows,img.cols,img);
}

void GreenFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++) {
        for (int j = yb; i < ye; i++) {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int g = pixel[1];
            img.at<Vec3b>(i,j) = {0,(uchar)g,0};
        }
    }
    imwrite("filtroverde.jpg",img);
}
