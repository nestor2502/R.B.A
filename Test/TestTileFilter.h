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
    void testApplyFilter();
private:
    bool averageValueInRegion(int xb, int yb, int xe, int ye, Mat img);
    TileFilter *filter;
};
#endif // TESTTILEFILTER_H
