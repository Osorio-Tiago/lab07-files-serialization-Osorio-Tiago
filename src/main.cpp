//
// Created by santi on 10/7/2020.
//
#include <iostream>
#include "Persons_V.h"
#include "BinarySavePerson.h"
#include "ISave.h"
#include "JSonSavePerson.h"
int main(){

    Persons_V personsArray;

    personsArray.addPerson(new Person(604630008,19,"Tiago"));
    personsArray.addPerson(new Person(123456, 20, "Spiderman"));
    personsArray.addPerson(new Person(70609401, 23, "Shrek"));

    ISave* guardar = new JSonSavePerson();

    ISave* guardaBinario = new BinarySavePerson();


    guardaBinario->save(personsArray, "ArchivoBinarioPersonas.txt");

    guardar->save(personsArray, "ArchivoJSonPersonas.txt");

    std::cout<< personsArray.toString();

}
