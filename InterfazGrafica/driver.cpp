#include "driver.h"
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
#include "TileFilter.h"
#include "Filter.h"
#include "PlusFilter.h"
using namespace std;
Driver::Driver()
{

}
/**
 * @brief Driver::applyRedFilter
 * @param path
 * se aplica filtro rojo
 * */
void Driver::applyRedFilter(string _path){
    rojo = new RedFilter(_path);
    rojo->applyFilter();

}
/**
 * @brief Driver::applyGreenFilter
 * @param path
 * se aplica filtro verde
 */
void Driver::applyGreenFilter(string _path){
    verde = new GreenFilter(_path);
    verde->applyFilter();
}
/**
 * @brief Driver::applyBlueFilter
 * @param path
 * se aplica filtro azul
*/
void Driver::applyBlueFilter(string _path){
    azul = new BlueFilter(_path);
    azul->applyFilter();
}

/**
 * @brief Driver::applyTileFilter
 * @param path
 * @param size
 * se aplica filtro mosaico
 */
void Driver::applyTileFilter(string _path, int size){
    tile = new TileFilter(_path);
    tile->setTileWidth(size);
    tile->applyFilter();
}

void Driver::applyPlusFilter(string _path,int a, int b, int c ){
    plus = new PlusFilter(_path);
    plus->setIntensity(a,b,c);
    plus->applyFilter();
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
/**
 * @brief Driver::saveImage
 * @param _path
 * @param key
 * Medtodo que guarda la imagen filtrada
 */

void Driver::saveImage(string _path, string key){
    if(key == "red"){
       //rojo->saveImage(_path);

    }
    if(key == "green"){
       //verde->saveImage(_path);

    }
    if(key == "blue"){
       //azul->saveImage(_path);

    }
    if(key == "tile"){
       //tile->saveImage(_path);

    }
    if(key == "plus"){//
        //Filter.plus->saveImage(_path);

    }
}

