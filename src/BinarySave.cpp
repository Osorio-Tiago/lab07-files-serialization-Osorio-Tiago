//
// Created by santi on 10/7/2020.
//

#include "BinarySave.h"

BinarySave::BinarySave(string file) { this->file = std::move(file);}

void BinarySave::save(Persons_V arrayPersons) {

    ofstream fileName(this->file, ios::out);
    try { fileName.open(this->file, ios::app | ios::binary); }

    catch (std::ifstream::failure a) { throw a; }

    fileName.write((char *) &arrayPersons, sizeof(arrayPersons.size()));

    fileName.close();
}

