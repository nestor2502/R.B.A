#ifndef DRIVER_H
#define DRIVER_H
#include <string>
using namespace std;

class Driver
{
private:
    string path;
public:
    Driver(string path);
    void applyRedFilter();
    void applyGreenFilter();
    void applyBlueFilter();

};

#endif // DRIVER_H
