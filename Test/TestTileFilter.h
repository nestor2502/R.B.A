#include <../Filters/TileFilter.h>
#include <include.h>
#ifndef TESTTILEFILTER_H
#define TESTTILEFILTER_H
class TestTileFilter : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestTileFilter);
    CPPUNIT_TEST(testApplyFilter);
    CPPUNIT_TEST_SUITE_END();
public:
    /**
     * @brief verifica que el filtro se aplico correctamente.
     */
    void testApplyFilter();
private:
    /**
     * @brief verifica que variable esta en el rango[(compare-erorMargin),(compare-errorMargin)]
     * @param variable
     * @param compare
     * @param errorMargin
     * @return true si variable esta en el rango[(compare-erorMargin),(compare-errorMargin)]
     *         false en otro caso.
     */
    bool inTheMarginOfError(int variable, int compare, int errorMargin);
    /**
     * @brief verifica que los colores en ese rango conicidan dentro de cierto rango
     * @param xb coordenada en x del pixel inicial.
     * @param yb coordenada en y del pixel inicial.
     * @param xe coordenada en x del pixel final.
     * @param ye coordenada en y del pixel final.
     * @param img imagen donde se verifica los colores.
     * @return true si colores en ese rango coniciden dentro de cierto rango
     *         false en otro caso
     */
    bool averageValueInRegion(int xb, int yb, int xe, int ye, Mat img);
    TileFilter *filter;
};
#endif // TESTTILEFILTER_H
