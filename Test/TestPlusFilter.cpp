#include <TestPlusFilter.h>
/**
 * @brief verifica que el unico color que tenga encendido es el verde.
 */
void TestPlusFilter::testApplyFilter()
{
    string path;
    for (int i = 1; i < 8; i++) {
        if (i=1)
            path = "../Test/TestFiles/img1.jpg";
        if (i=2)
            path = "../Test/TestFiles/img2.jpg";
        if (i=3)
            path = "../Test/TestFiles/img3.jpg";
        if (i=4)
            path = "../Test/TestFiles/img4.jpg";
        if (i=5)
            path = "../Test/TestFiles/img5.jpg";
        if (i=6)
            path = "../Test/TestFiles/img6.jpg";
        if (i=7)
            path = "../Test/TestFiles/img7.jpg";
        int deltaRed=200,deltaBlue=100,deltaGreen=-200;
        filter = new PlusFilter(path);
        filter->setIntensity(deltaRed,deltaGreen,deltaBlue);
        filter -> applyFilter();
        Mat img = imread("../Test/RBAcache/plus.jpg");
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
        CPPUNIT_ASSERT( (red > blue) && (blue > green));
    }
}
