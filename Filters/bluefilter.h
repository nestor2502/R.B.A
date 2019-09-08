#include <Filter.h>

class BlueFilter : Filter {
public:
    void applyFilter(void);
protected:
    void paintRegion(int xb, int yb, int xe, int ye, Mat img);
public:
    BlueFilter(string pathImage);
};
