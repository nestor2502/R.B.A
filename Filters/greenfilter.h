#include <Filter.h>

class GreenFilter : Filter {
public:
    void applyFilter(void);
protected:
    void paintRegion(int xb, int yb, int xe, int ye, Mat img);
public:
    GreenFilter(string pathImage);
};
