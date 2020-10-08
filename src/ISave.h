//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_ISAVE_H
#define MY_PROJECT_NAME_ISAVE_H
#include "Persons_V.h"
#include <sstream>

class ISave {
public:
    virtual ~ISave();
    virtual void save(Persons_V,std::string file) = 0;
};
#endif //MY_PROJECT_NAME_ISAVE_H
