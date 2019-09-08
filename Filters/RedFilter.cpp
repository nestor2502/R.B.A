#include <RedFilter.h>
#include <iostream>

RedFilter::RedFilter(string pathImage){
    path = pathImage;
}
void RedFilter::applyFilter()
{
    Mat img = imread (path);
    if (img.empty())
         cout << "Hola Mundo" << endl;
    paintRegion(0,0,img.rows,img.cols,img);
    //imwrite("filtrorojo.jpg",img);
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
    imwrite("filtrorojo.jpg",img);
}
