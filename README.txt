R B A (Red and Blue Art)

Para poder correr la aplicación es necesario tener instalado la
libreria OpenCV, los siguientes pasos te ayudaran a instalarlo:

1.- Abre la terminal

2.- ejecuta los siguientes comandos:
    a)  sudo apt-get install build-essential
    b)  sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
    c)  git clone https://github.com/opencv/opencv.git
    d)  git clone https://github.com/opencv/opencv_contrib.git
    e)  cd ~/opencv
    f)  mkdir build
    g)  cd build
    h)  cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
    i)  make -j7 # runs 7 jobs in parallel
    j)  sudo make install

Nota: El proceso de los incisos i, j son los mas tardados,ademas te recomendamos tener una buena conexion a internet.

Una vez realizado los pasos anteriores podremos usar la librería, y correr el archivo.

Si deseas ver el codigo y modificar el programa necesitas instalar Qt creator,
los pasos para instalarlo son los siguientes:

1.- descarga qt con el siguiente comando:
                       sudo apt-get install qtcreator -y

2.- verificar si puedes utilizar sus herramientas con:
                       qmake -v

4.- si todo esta bien ya puedes utilizar qt

5.- si te aparece:
                        qmake: could not find a Qt installation of ''

5.1.- Ingresa el siguiente comando:
                        sudo apt-get install qt5-default

5.2.- luego:
                        aptitude show qt5-default
                        
Nota: posiblemente necesites instalar aptitude, el sistema te dará el comando