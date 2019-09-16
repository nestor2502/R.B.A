#include <../Filters/PlusFilter.h>
#include <include.h>
#ifndef TESTPLUSFILTER_H
#define TESTPLUSFILTER_H
class TestPlusFilter : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestPlusFilter);
    CPPUNIT_TEST(testApplyFilter);
    CPPUNIT_TEST_SUITE_END();
public:
    /**
     * @brief verifica que el filtro se aplico correctamente.
     */
    void testApplyFilter();
private:
    PlusFilter *filter;
};
#endif // TESTREDFILTER_H
