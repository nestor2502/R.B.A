#ifndef DRIVER_H
#define DRIVER_H
#include <string>
using namespace std;

class Driver
{
private:
    string path;
public:
    Driver();
    void applyRedFilter(string path);
    void applyGreenFilter(string path);
    void applyBlueFilter(string path);
    void applyTileFilter(string path, int size);
    int getImageSize(string path);
    void saveImage(string path);

};

#endif // DRIVER_H
