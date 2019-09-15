#!/bin/bash
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install build-essentia
sudo apt-get install libopencv-dev
sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
sudo apt-get install git
git clone https://github.com/opencv/opencv
git clone https://github.com/opencv/opencv_contrib.git
cd opencv
mkdir build
cd build
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local ..
CMAKE_BUILD_TYPE=Release\Debug
make -j4
sudo make install
sudo apt-get install qtcreator -y
sudo apt-get install qt5-default
sudo aptitude show qt5-default