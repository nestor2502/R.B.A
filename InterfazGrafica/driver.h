#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
#include "TileFilter.h"
#include "Filter.h"
#include "PlusFilter.h"
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
    void applyPlusFilter(string path, int r, int b, int g);
    RedFilter *rojo;
    GreenFilter *verde;
    BlueFilter *azul;
    TileFilter *tile;
    PlusFilter *plus;

};

#endif // DRIVER_H
