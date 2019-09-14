#include <iostream>
#include "RedFilter.h"
#include "GreenFilter.h"
#include "BlueFilter.h"
#include "TileFilter.h"
#include "PlusFilter.h"
using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
    /*RedFilter rojo = RedFilter("/home/pepe/Documents/R.B.A/Filters/img2.jpg");
    GreenFilter verde = GreenFilter("/home/pepe/Documents/R.B.A/Filters/img2.jpg");
    BlueFilter azul = BlueFilter("/home/pepe/Documents/R.B.A/Filters/img2.jpg");
    TileFilter mosaico = TileFilter("/home/pepe/Documents/R.B.A/Filters/img2.jpg");*/
    PlusFilter plus = PlusFilter("/home/pepe/Documentos/R.B.A/Filtersimg2.jpg");
    /*mosaico.setTileWidth(10);
    mosaico.applyFilter();
    verde.applyFilter();
    rojo.applyFilter();
    azul.applyFilter();*/
    plus.applyFilter();
    cout << "Hola Mundo" << endl;
    return 0;
}
