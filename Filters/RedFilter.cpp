#include <RedFilter.h>
#include <iostream>

RedFilter::RedFilter(string pathImage){
    path = pathImage;
    img = imread(path);
}
void RedFilter::applyFilter()
{
    if (img.empty())
    RedFilter::paintRegion(0,0,img.rows,img.cols,img);
    for (int i = 0; i < img.rows; i++) {
        for (int j = 0; i < img.cols; i++) {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int r = pixel[2];
            img.at<Vec3b>(i,j) = {0,0,(uchar)r};
        }
    }
    imwrite("filtrorojo.jpg",img);
}

void RedFilter::paintRegion(int xb, int yb, int xe, int ye, Mat img)
{
    for (int i = xb; i < xe; i++) {
        for (int j = yb; i < ye; i++) {
            Vec3b pixel = img.at<Vec3b>(i,j);
            int r = pixel[2];
            img.at<Vec3b>(i,j) = {0,0,(uchar)r};
        }

    }
}
