//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_ISAVE_H
#define MY_PROJECT_NAME_ISAVE_H
#include <sstream>

class ISave {
public:
    virtual ~ISave();
    virtual std::string saveData() = 0;
};


#endif //MY_PROJECT_NAME_ISAVE_H
