#include <../Filters/RedFilter.h>
#include <include.h>
#ifndef TESTREDFILTER_H
#define TESTREDFILTER_H
class TestRedFilter : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestRedFilter);
    CPPUNIT_TEST(testApplyFilter);
    CPPUNIT_TEST_SUITE_END();
public:
    void testApplyFilter();
private:
    RedFilter *filter;
};
#endif // TESTREDFILTER_H
