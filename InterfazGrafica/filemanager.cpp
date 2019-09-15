#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;
class FileManager{
private:
    string path;

public : FileManager(){

}
/**
 *Se guarda lña ruta del archivo
 */
public: void openFilee(string image){
    path = image;
}
/**
 *Se verifica que la imagen se pueda leer
 */
public: bool verifyImage(){

    try {
        Mat image = imread(path);
        if (image.empty()){
            return false;
        }
        else{
            return true;
        }
    }
    catch (cv::Exception) {
        return false;
    }
    catch(std::exception) {
        return false;
    }

}
/**
  *Se verifica el archivo
  */
public:  bool verifyFile(){
    bool correct=false;
    bool correct_image = verifyImage();
    if(correct_image == true){
        correct=true;
    }
    return correct;
}
/**
  *Obtiene la ruta
  */
public : string getPath(){
        return path;
    }
};

