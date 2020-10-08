//
// Created by santi on 10/7/2020.
//

#include <fstream>
#include "JSonSavePerson.h"

void JSonSavePerson::save(Persons_V arrayPersonas, string fileName)
{
    vector<json> arraySerializar;

    for (int i = 0; i < arrayPersonas.size(); i++) {
        arraySerializar.push_back(persona(i, arrayPersonas));
    }
    ofstream archivo;

    try { archivo.open(fileName, ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    //para la lista de personas poner:archivo << personasSerializando<< '\n';
    archivo << arraySerializar;
    archivo.close();
}

json JSonSavePerson::persona(int posicion, Persons_V arrayPersonas) {
    json jsonPersona;
        Person* persAux = arrayPersonas.getPerson(posicion);
        jsonPersona["Identification"] = persAux->getId();
        jsonPersona["Age"] = persAux->getAge();
        jsonPersona["Name"] = persAux->getName();
    return jsonPersona;
}

JSonSavePerson::~JSonSavePerson() = default;

