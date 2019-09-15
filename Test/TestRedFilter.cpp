#include <TestRedFilter.h>
/**
 * @brief verifica que el unico color que tenga encendido es el rojo.
 */
void TestRedFilter::testApplyFilter()
{
    string path;
    for (int i = 1; i < 8; i++) {
        path = "TestFiles/img" + to_string(i) + ".jpg";
        filter = new RedFilter(path);
        filter -> applyFilter();
        Mat img = imread("RBAcache/red.jpg");
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
        CPPUNIT_ASSERT(red > green && red > blue);
    }
}
