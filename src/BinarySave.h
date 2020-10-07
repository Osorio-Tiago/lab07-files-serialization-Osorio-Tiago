//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_BINARYSAVE_H
#define MY_PROJECT_NAME_BINARYSAVE_H
#include <sstream>
#include<fstream>
#include "Persons_V.h"
using namespace std;

class BinarySave {
private:
    string file;

  //  void read();



public:

    void save(Persons_V);

    explicit BinarySave(string file);
};


#endif //MY_PROJECT_NAME_BINARYSAVE_H
