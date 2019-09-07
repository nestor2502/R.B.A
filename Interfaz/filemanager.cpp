#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;
class FileManager{
private:
    string path;

public : FileManager(){

}
public: void openFilee(string image){
    path = image;
}
public: bool verifyImage(){

    Mat image = imread(path);
    if (image.empty()){
        return false;
    }
    else{
        return true;
    }

}

public:  bool verifyFile(){
    bool correct=false;
    bool correct_image = verifyImage();
    if(correct_image == true){
        correct=true;
    }
    return correct;
}
public : string getPath(){
        return path;
    }
};

