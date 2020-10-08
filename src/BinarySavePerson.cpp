//
// Created by santi on 10/7/2020.
//

#include "BinarySavePerson.h"



void BinarySavePerson::save(Persons_V arrayPersons, string fileName) {

    ofstream archivo;
    try { archivo.open(fileName, ios::app | ios::binary); }

    catch (std::ifstream::failure a) { std::cout<< "F bro"; }

    for(int i = 0; i < arrayPersons.size(); i++)
        archivo.write((char *) &arrayPersons, sizeof(arrayPersons));
    archivo.close();
}


