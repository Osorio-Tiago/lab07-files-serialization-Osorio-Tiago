//
// Created by santi on 10/7/2020.
//

#include "FilesManager.h"

#include <utility>

void FilesManager::serialize(ISave * typeSerial, const Persons_V& array, string fileName) {
    typeSerial->save(array,std::move(fileName));
}