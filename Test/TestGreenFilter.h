#include <../Filters/GreenFilter.h>
#include <include.h>
#ifndef TESTGREENFILTER_H
#define TESTGREENFILTER_H
class TestGreenFilter : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestGreenFilter);
    CPPUNIT_TEST(testApplyFilter);
    CPPUNIT_TEST_SUITE_END();
public:
    void testApplyFilter();
private:
    GreenFilter *filter;
};
#endif // TESTGREENFILTER_H
