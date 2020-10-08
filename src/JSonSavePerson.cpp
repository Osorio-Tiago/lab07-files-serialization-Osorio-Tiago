//
// Created by santi on 10/7/2020.
//

#include <fstream>
#include "JSonSavePerson.h"

void JSonSavePerson::save(Persons_V arrayPersonas, string fileName)
{
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
    //para la lista de personas poner:archivo << personasSerializando<< '\n'; Intente poner el '\n' pero no sirvio jsjs
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
/*
void JSonSavePerson::load(Persons_V, string) {

}
*/
JSonSavePerson::~JSonSavePerson() = default;

