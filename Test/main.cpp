#include <include.h>
#include <stdlib.h>
#include <time.h>
#include <TestRedFilter.h>
#include <TestGreenFilter.h>
#include <TestFileManager.h>
#include <TestTileFilter.h>
CPPUNIT_TEST_SUITE_REGISTRATION(TestFileManager);
CPPUNIT_TEST_SUITE_REGISTRATION(TestRedFilter);
CPPUNIT_TEST_SUITE_REGISTRATION(TestGreenFilter);
CPPUNIT_TEST_SUITE_REGISTRATION(TestTileFilter);
int main()
{
    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;
 
    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);
 
    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener (&progress);
 
    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
        testrunner.run(testresult);
 
    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write ();
 
    // Output XML for Jenkins CPPunit plugin
    ofstream xmlFileOut("../Test/testResult/TestResults.xml");
    XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();
 
    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
    return 0;
}
