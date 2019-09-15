#include <../Filters/BlueFilter.h>
#include <include.h>
#ifndef TESTBLUEFILTER_H
#define TESTBLUEFILTER_H

class TestBluefilter : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestBluefilter);
    CPPUNIT_TEST(TestApplyBluefilter);
    CPPUNIT_TEST_SUITE_END();
public:
    void TestApplyBluefilter();
private:
    BlueFilter *test;
};

#endif // TESTBLUEFILTER_H
