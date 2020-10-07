//
// Created by santi on 10/7/2020.
//

#include "Persons_V.h"

void Persons_V::addPerson(Person * person1){ Persons.emplace_back(person1); }

string Persons_V::toString(){
    ostringstream output;
    for(int i = 0; i < Persons.size(); i++)
        output<<Persons[i]->toString() << endl;
    return output.str();
}