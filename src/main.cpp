//
// Created by santi on 10/7/2020.
//
#include <iostream>
#include "Persons_V.h"
#include "BinarySave.h"
int main(){

    Persons_V personsArray;

    personsArray.addPerson(new Person(604630008,19,"Tiago"));
    personsArray.addPerson(new Person(123456, 20, "Spiderman"));


    BinarySave guardarPrueba("ArchivoBinarioPersonas.txt");

    guardarPrueba.save(personsArray);
    std::cout<< personsArray.toString();

}
