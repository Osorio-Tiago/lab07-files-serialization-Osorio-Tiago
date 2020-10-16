//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_JSONSAVE_H
#define MY_PROJECT_NAME_JSONSAVE_H
#include <../lib/nlohmann/json.hpp>
#include "ISave_Read.h"

using json = nlohmann::json;

class JSonSavePerson : public ISave_Read{

public:
    void save(Persons_V, string) override;

    void load(Persons_V&, string) override;

    static Person deserPerson(json);

    static vector<Person> convertToObject(const json&);

    static json serialPersona(int posicion, Persons_V);

    ~JSonSavePerson() override;


    // Metodos de la version 2.0
    // Por favor revisar esa parte y dar un feedback de porque no me sirve :c
    // Está todo igual creo yo y no me sirve como a usted en su ejemplo
    static string serialize(Persons_V&, string);

    vector<Person> deserialize(string _data);

    void to_json(json &_json, const Person &_person);

    void from_json(const json &_json, Person &_person);

};


#endif //MY_PROJECT_NAME_JSONSAVE_H
