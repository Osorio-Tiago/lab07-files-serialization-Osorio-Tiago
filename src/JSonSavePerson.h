//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_JSONSAVE_H
#define MY_PROJECT_NAME_JSONSAVE_H
#include <../lib/nlohmann/json.hpp>
#include "TextSave.h"

using json = nlohmann::json;

class JSonSavePerson : public ITextSave{

public:
    void save(Persons_V, string) override;

    json persona(int posicion, Persons_V);


    ~JSonSavePerson() override;
};


#endif //MY_PROJECT_NAME_JSONSAVE_H
