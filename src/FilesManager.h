//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_FILESMANAGER_H
#define MY_PROJECT_NAME_FILESMANAGER_H
#include "ISave.h"

class FilesManager {
public:
    static void serialize(ISave*, const Persons_V&, string);

};


#endif //MY_PROJECT_NAME_FILESMANAGER_H
