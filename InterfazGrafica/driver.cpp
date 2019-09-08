#include "driver.h"
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
using namespace std;
Driver::Driver()
{


}
void Driver::applyRedFilter(string path){
   RedFilter *rojo = new RedFilter(path);
    rojo->applyFilter();

}
void Driver::applyGreenFilter(string path){
    GreenFilter *verde = new GreenFilter(path);
    verde->applyFilter();
}
void Driver::applyBlueFilter(string path){
    BlueFilter *azul = new BlueFilter(path);
    azul->applyFilter();
}
