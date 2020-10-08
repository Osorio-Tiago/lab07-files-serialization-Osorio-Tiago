//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_BINARYSAVEPERSON_H
#define MY_PROJECT_NAME_BINARYSAVEPERSON_H
#include <sstream>
#include<fstream>
#include "Persons_V.h"
#include "ISave.h"
#include "Person.h"
using namespace std;

class BinarySavePerson : public ISave{

public:
    void save(Persons_V, string fileName) override;
};


#endif //MY_PROJECT_NAME_BINARYSAVEPERSON_H
