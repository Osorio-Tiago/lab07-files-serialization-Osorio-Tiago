//
// Created by santi on 10/7/2020.
//

#include "Person.h"

#include <utility>

Person::Person(int id, int age, string name) : id(id), age(age), name(std::move(name)) {}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

string Person::toString() const {
    ostringstream output;

    output<<"Name: " << getName() <<
    "\nIdentification: " << getId() <<
    "\nAge: " << getAge();

    return output.str();
}

Person::~Person() = default;