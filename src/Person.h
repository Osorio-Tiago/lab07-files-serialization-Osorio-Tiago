//
// Created by santi on 10/7/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <iostream>
#include <sstream>


using namespace std;

class Person {
private:
    int id;
    int age;
    string name;
public:
    Person(int id, int age, string name);

    virtual ~Person();

    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    string toString() const;
};


#endif //MY_PROJECT_NAME_PERSON_H
