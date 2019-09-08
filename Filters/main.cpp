#include <iostream>
#include <RedFilter.h>
#include <GreenFilter.h>
#include <BlueFilter.h>
using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
    RedFilter rojo = RedFilter("/home/naju/R.B.A/Filters/img2.jpg");
    GreenFilter verde = GreenFilter("/home/naju/R.B.A/Filters/img2.jpg");
    BlueFilter azul = BlueFilter("/home/naju/R.B.A/Filters/img2.jpg");
    verde.applyFilter();
    rojo.applyFilter();
    azul.applyFilter();
    return 0;
}
