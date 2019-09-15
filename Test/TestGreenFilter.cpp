#include <TestGreenFilter.h>
void TestGreenFilter::testApplyFilter()
{
    string path;
    for (int i = 1; i < 8; i++) {
        path = "../Test/TestFiles/img" + to_string(i) + ".jpg";
        filter = new GreenFilter(path);
        filter -> applyFilter();
        Mat img = imread("../Test/RBAcache/green.jpg");
        int red = 0, blue = 0, green = 0;
        for(int j = 0; j < img.rows; j++) {
            for (int k = 0; k <img.cols; k++)
            {
                Vec3b pixel = img.at<Vec3b>(j,k);
                blue += (int)pixel[0];
                green += (int)pixel[1];
                red += (int)pixel[2];
            }
        }
        CPPUNIT_ASSERT(green > red && green > blue);
    }
}
