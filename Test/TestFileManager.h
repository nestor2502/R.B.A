#include <include.h>
#include <../InterfazGrafica/filemanager.cpp>
#ifndef TESTFILEMANAGER_H
#define TESTFILEMANAGER_H
class TestFileManager : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestFileManager);
    CPPUNIT_TEST(testVerifyImage);
    CPPUNIT_TEST_SUITE_END();
public:
    void testVerifyImage();
private:
    FileManager *manager = new FileManager();
};
#endif // TESTFILEMANAGER_H

