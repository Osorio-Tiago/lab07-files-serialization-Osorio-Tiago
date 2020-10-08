//
// Created by santi on 10/7/2020.
//

#include "BinarySavePerson.h"



void BinarySavePerson::save(Persons_V arrayPersons, string fileName) {
    ofstream archivo;

    try { archivo.open(fileName, ios::app | ios::binary); }

    catch (std::ifstream::failure a) { std::cout << "F bro"; }


    for(int i = 0; i < arrayPersons.size(); i++) {
        auto person = arrayPersons.getPerson(i);

        archivo.write((char *) &person, sizeof(Person));
    }
    archivo.close();
}

/*
void BinarySavePerson::load(Persons_V &arrayPersonas, string fileName) {
        ifstream archivo;
        //se crea una variable ifstream para poder usar los metodos necesarios para leer el archivo como .open, .read , .close ,...

        try { archivo.open(fileName, ios::in | ios::binary); }
            //carga el archivo, se decide en que modo se va a abrir ese archivo( en este caso en modo lectura) y se le recuerda a C++ que es un archivo binario

        catch (std::ifstream::failure a) {
            cout << "no se pudo abrir el archivo";
            exit(1);
        }
        //si el archivo no se pudo abrir o algo mas paso el metodo fail() retorna un 1 si algo malo paso y con el exit(1) nos salimos del metodo

        archivo.read((char *) &arrayPersonas, sizeof(arrayPersonas));
        //lo que esta en el archivo se va a cargar en la persona

        archivo.close();
        //se cerro el archivo
}
*/

