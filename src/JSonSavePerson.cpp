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


/*
 * V2.0 del codigo
 *
 * Profe hice todo igual a como usted lo serializo en su ejemplo pero hay 2 errores que no pude solucionar
 * Del todo no se que hacer entonces se lo deje aqui comentado el codigo para que cuando revise el laboratio lo
 * pueda revisar si asi lo desea jsjs
 *
 * Es solo descomentar esta seccion y comentar la seccion de arriba, ahi le saldran los 2 errores que no logro solucionar
 *
 *
void JSonSavePerson::save(Persons_V arrayPersonas, string fileName){
    serialize(arrayPersonas, fileName);
}

void JSonSavePerson::load(Persons_V& arrayPers, string fileName){
    arrayPers = deserialize(fileName);
}

string JSonSavePerson::serialize(Persons_V& arrayPers, string fileName) {
    ofstream archivo;
    try { archivo.open(fileName, ios::binary); }
    catch (ifstream::failure a) {
        exit(1);
    }
    json jsonData(arrayPers);  //Error #1 que no entiendo porque para (Lo probe en su programa y todo sirve bien)
    string jsonArray = jsonData.dump();
    archivo << jsonArray;
}

vector<Person> JSonSavePerson::deserialize(string _data) {
    json jsonData = json::parse(_data);
    vector<Person> personList = jsonData;  //Error #2 que no entiendo porque para
                                          // (Lo probe en su programa y todo sirve bien)
    return personList;
}

JSonSavePerson::~JSonSavePerson() = default;


void JSonSavePerson::to_json(json &_json, const Person &_person) {
    _json = json{
            {"IDENTIFICATION", _person.getId()},
            {"AGE", _person.getAge()},
            {"NAME", _person.getName()}
    };
}

void JSonSavePerson::from_json(const json &_json, Person &_person) {
    _person.setId(_json.at("IDENTIFICATION").get<int>());
    _person.setAge(_json.at("AGE").get<int>());
    _person.setName(_json.at("NAME").get<std::string>());
}
*/