//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_PERSONS_V_H
#define MY_PROJECT_NAME_PERSONS_V_H
#include "Person.h"
#include <vector>


class Persons_V {
private:
    vector<Person> Persons;
public:
    void addPerson(const Person&);

    int size();

    const vector<Person> &getPersons() const;

    string toString();

    ~Persons_V();

    Person getPerson(int position);

    Persons_V(vector<struct Person> vector);

    Persons_V();
};

#endif //MY_PROJECT_NAME_PERSONS_V_H
