#include <TestFileManager.h>
void TestFileManager::testVerifyImage()
{
    string path;
    for(int i = 1; i < 8; i++) {
        path = "../Test/TestFiles/img"+to_string(i)+".jpg";
        manager->openFilee(path);
        CPPUNIT_ASSERT(manager->verifyFile());
    }
    //EL archivo noimg.jpg es solo un archivo creado de la siguiente manera en la carpeta TestFiles
    //$touch noimg.jpg osea es un archivo sin ningun tipo de información.
    manager->openFilee("../Test/TestFiles/noimg.jpg");
    CPPUNIT_ASSERT(!manager->verifyImage());
    manager->openFilee("../Test/TestFiles/img.txt");
    CPPUNIT_ASSERT(!manager->verifyImage());
}
