//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_ISAVE_READ_H
#define MY_PROJECT_NAME_ISAVE_READ_H
#include "Persons_V.h"
#include <sstream>

class ISave_Read {
public:
    virtual ~ISave_Read();
    virtual void save(Persons_V,std::string file) = 0;
    virtual void load(Persons_V&, string file) = 0;
};
#endif //MY_PROJECT_NAME_ISAVE_READ_H
