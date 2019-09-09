#include <RedFilter.h>
#include <GreenFilter.h>
#include <BlueFilter.h>
#include <TileFilter.h>

int main()
{
    RedFilter rojo = RedFilter("/home/naju/R.B.A/Filters/img4.jpg");
    GreenFilter verde = GreenFilter("/home/naju/R.B.A/Filters/img4.jpg");
    BlueFilter azul = BlueFilter("/home/naju/R.B.A/Filters/img4.jpg");
    TileFilter mosaico = TileFilter("/home/naju/R.B.A/Filters/img4.jpg");
    mosaico.setTileWidth(5);
    mosaico.applyFilter();
    verde.applyFilter();
    rojo.applyFilter();
    azul.applyFilter();
    return 0;
}
