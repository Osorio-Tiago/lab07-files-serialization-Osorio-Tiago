//
// Created by santi on 10/7/2020.
//

#include "FilesManager.h"

#include <utility>

void FilesManager::serialize(ISave_Read * typeSerial, Persons_V array, string fileName) {
    typeSerial->save(array,std::move(fileName));
}

void FilesManager::deserialize(ISave_Read * typeDeserial, Persons_V& array, string fileName) {
    typeDeserial->load(array, std::move(fileName));
}