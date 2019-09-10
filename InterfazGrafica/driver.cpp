#include "driver.h"
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
#include "TileFilter.h"
using namespace std;
Driver::Driver()
{

}
/**
 * @brief Driver::applyRedFilter
 * @param path
 * se aplica filtro rojo
 * */
void Driver::applyRedFilter(string path){
   RedFilter *rojo = new RedFilter(path);
    rojo->applyFilter();

}
/**
 * @brief Driver::applyGreenFilter
 * @param path
 * se aplica filtro verde
 */
void Driver::applyGreenFilter(string path){
    GreenFilter *verde = new GreenFilter(path);
    verde->applyFilter();
}
/**
 * @brief Driver::applyBlueFilter
 * @param path
 * se aplica filtro azul
*/
void Driver::applyBlueFilter(string path){
    BlueFilter *azul = new BlueFilter(path);
    azul->applyFilter();
}

/**
 * @brief Driver::applyTileFilter
 * @param path
 * @param size
 * se aplica filtro mosaico
 */
void Driver::applyTileFilter(string path, int size){
    TileFilter *tile = new TileFilter(path);
    tile->setTileWidth(size);
    tile->applyFilter();
}
/**
 * @brief Driver::getImageSize
 * @param path
 * @return
 * Se obtiene el tamaño de la imagen
 */
int Driver::getImageSize(string path){
    TileFilter *tile1 = new TileFilter(path);
    int size = tile1->getPixelWidth();
    return size;
}

void Driver::saveImage(string path){

}

