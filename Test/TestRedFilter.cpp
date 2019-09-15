#include <TestRedFilter.h>
/**
 * @brief verifica que el unico color que tenga encendido es el rojo.
 */
void TestRedFilter::testApplyFilter()
{
    string path;
    for (int i = 1; i < 8; i++) {
        path = "../TestFilters/TestFiles/img" + to_string(i) + ".jpg";
        filter = new RedFilter(path);
        filter -> applyFilter();
        filter -> saveImage("../TestFilters/cache/img"+ to_string(i) + ".jpg");
        Mat img = imread("../TestFilters/cache/img"+ to_string(i) + ".jpg");
        for(int j = 0; j < img.rows; j++) {
            for (int k = 0; k <img.cols; k++)
            {
                Vec3b pixel = img.at<Vec3b>(j,k);
                int b = (int)pixel[0];
                int g = (int)pixel[1];
                int r = (int)pixel[2];
                CPPUNIT_ASSERT(g == 0 && r == 0);
            }
        }
    }
}
