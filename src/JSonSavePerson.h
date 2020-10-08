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
};


#endif //MY_PROJECT_NAME_JSONSAVE_H
