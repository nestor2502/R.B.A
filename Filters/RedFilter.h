#include <Filter.h>
class RedFilter : Filter {
public:
    void applyFilter(void);
protected:
    void paintRegion(int xb, int yb, int xe, int ye, Mat img);
public:
    RedFilter(string pathImage);
};
