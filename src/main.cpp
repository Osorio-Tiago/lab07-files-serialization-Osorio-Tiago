//
// Created by santi on 10/7/2020.
//
#include <iostream>
#include "Persons_V.h"
#include "BinarySavePerson.h"
#include "ISave.h"
#include "JSonSavePerson.h"
#include "FilesManager.h"
int main(){

    FilesManager manager;
    Persons_V personsArray;

    personsArray.addPerson(new Person(604630008,19,"Tiago"));
    personsArray.addPerson(new Person(123456, 20, "Spiderman"));
    personsArray.addPerson(new Person(70609401, 23, "Shrek"));

    ISave* guardar = new JSonSavePerson();

    ISave* guardaBinario = new BinarySavePerson();

  //  manager.serialize(guardar, personsArray, "ArchivoJSonPersonas.txt");
    manager.serialize(guardaBinario, personsArray, "ArchivoBinarioPersonas.txt");
  //  guardaBinario->save(personsArray, "ArchivoBinarioPersonas.txt");

    //guardar->save(personsArray, "ArchivoJSonPersonas.txt");

    std::cout<< personsArray.toString();

}
