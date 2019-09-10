#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
#include "TileFilter.h"
#include "Filter.h"
using namespace std;

class Driver
{
private:


public:
    Driver();
    void applyRedFilter(string path);
    void applyGreenFilter(string path);
    void applyBlueFilter(string path);
    void applyTileFilter(string path, int size);
    int getImageSize(string path);
    void saveImage(string path, string key);
    RedFilter *rojo;
    GreenFilter *verde;
    BlueFilter *azul;
    TileFilter *tile;

};

#endif // DRIVER_H
