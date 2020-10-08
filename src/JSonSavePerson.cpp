//
// Created by santi on 10/7/2020.
//

#include <fstream>
#include "JSonSavePerson.h"

void JSonSavePerson::save(Persons_V arrayPersonas, string fileName){

    vector<json> arraySerializar;

    arraySerializar.reserve(arrayPersonas.size());
    for (int i = 0; i < arrayPersonas.size(); i++) {
        arraySerializar.emplace_back(serialPersona(i, arrayPersonas));
    }
    ofstream archivo;

    try { archivo.open(fileName, ios::binary); }
    catch (ifstream::failure a) {
        exit(1);
    }
    archivo << arraySerializar;
    archivo.close();
}

json JSonSavePerson::serialPersona(int posicion, Persons_V arrayPersonas) {
    json jsonPersona;
        Person persAux = arrayPersonas.getPerson(posicion);
        jsonPersona["Identification"] = persAux.getId();
        jsonPersona["Age"] = persAux.getAge();
        jsonPersona["Name"] = persAux.getName();

    return jsonPersona;
}

void JSonSavePerson::load(Persons_V& arrayPers, string fileName){
    ifstream archivo;
    json vector;
    try { archivo.open(fileName, ios::binary); }
    catch (ifstream::failure a) { exit(1);}

    archivo>>vector;
    arrayPers = convertToObject(vector);
}

Person JSonSavePerson::deserPerson(json array) {
    Person person1;

    person1.setId(array["Identification"]);
    person1.setAge(array["Age"]);
    person1.setName(array["Name"]);

    return person1;
}

vector<Person> JSonSavePerson::convertToObject(const json& array) {

    vector<Person> arrayAuxPerson;
    vector<json> arrayAuxJson = array;
    Person personAux;
    for(auto & i : arrayAuxJson){
        personAux = deserPerson(i);
        arrayAuxPerson.push_back(personAux);
    }
    return arrayAuxPerson;
}

JSonSavePerson::~JSonSavePerson() = default;

