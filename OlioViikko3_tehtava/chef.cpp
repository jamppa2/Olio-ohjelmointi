#include "chef.h"
#include <iostream>

Chef::Chef() {
    cout << "Olen default konstrukti" << endl;
}

Chef::Chef(string cN) {
    cout << "Olen input konstrukti" << endl;
    chefName = cN;
}

Chef::~Chef() {
    cout << "Olen default konstrukti" << endl;
}


int Chef::makeSalad(int numberOfItems) {
    cout << "Olen salaattifunktiossa" << endl;
    //int numberOfPortions = numberOfItems/5;
    cout << "Annoit: " << numberOfItems << "ainesta" << endl;
    cout << "Mita saadaan: " << numberOfItems/5 << " salaattia" << endl;
    return numberOfItems/5;
}

int Chef::makeSoup(int numberOfItems) {
    cout << "Olen keittofunktiossa" << endl;
    cout << "Annoit: " << numberOfItems << "ainesta" << endl;
    cout << "Mita saadaan: " << numberOfItems/3 << " soppaan" << endl;
    return numberOfItems/3;
}

string Chef::getName() {
    cout << "Olen getterissa" << endl;
    cout << "Kokin nimi on: " << endl;
    return chefName;
}

void Chef::setName(string cN) {
    cout << "Olen setterissa" << endl;
    chefName = cN;
}
