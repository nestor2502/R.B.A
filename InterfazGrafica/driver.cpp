#include "driver.h"
#include "RedFilter.h"
#include "GreenFilter.h"
using namespace std;
Driver::Driver(string _path)
{
path = _path;

}
void Driver::applyRedFilter(){
   //RedFilter *rojo = new RedFilter(path);
    //rojo->applyFilter();

}
void Driver::applyGreenFilter(){
    GreenFilter *verde = new GreenFilter("/home/naju/R.B.A/Filters/img2.jpg");
    verde->applyFilter();
}
void Driver::applyBlueFilter(){

}
