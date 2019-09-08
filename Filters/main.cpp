#include <iostream>
#include <RedFilter.h>

using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
    RedFilter rojo = RedFilter("/home/naju/R.B.A/Filters/img2.jpg");
    rojo.applyFilter();
    return 0;
}
