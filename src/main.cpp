//
// Created by santi on 10/7/2020.
//
#include <iostream>
#include "Persons_V.h"
#include "BinarySavePerson.h"
#include "ISave_Read.h"
#include "JSonSavePerson.h"
#include "FilesManager.h"
int main(){

    FilesManager manager;
    Persons_V personsArray;

    personsArray.addPerson(new Person(604630008,19,"Tiago"));
    personsArray.addPerson(new Person(123456, 20, "Spiderman"));
    personsArray.addPerson(new Person(70609401, 23, "Shrek"));

    ISave_Read* guardar = new JSonSavePerson();

    ISave_Read* guardaBinario = new BinarySavePerson();

    FilesManager::serialize(guardar, personsArray, "ArchivoJSonPersonas.txt");
    FilesManager::serialize(guardaBinario, personsArray, "ArchivoBinarioPersonas.txt");

    //guardar->save(personsArray, "ArchivoJSonPersonas.txt");

    std::cout<< personsArray.toString();

}
