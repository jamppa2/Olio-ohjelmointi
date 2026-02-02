#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili() {
    cout << "Hei olen default konstruktorissa!" << endl;
}

Pankkitili::Pankkitili(string om) {
    cout << "Olen pankkitili: parametrikonstruktorissa!" << endl;
    omistaja = om;
}

double Pankkitili::getBalance() {
    cout << "Olen pankkitili: saldokyselyssa!" << endl;
    return saldo;
}

//Talletus:
bool Pankkitili::deposit(double amount) {
    cout << "Olen pankkitili: tallennuksessa" << endl;
    cout << "Paljonko haluat tallettaa?: " << endl;

    //ei voi nostaa, jos nosto on negatiivinen luku.
    if(amount <= 0) {
        cout << "error" << endl;
        return false;
    }
    //muutoin talluetus onnistuu.
    cout << "Talletus onnistui!" << endl;
    //lisää amount saldoon.
    saldo += amount;
    return true;
}

//nosto:
bool Pankkitili::withdraw(double amount) {
    cout << "Olen pankkitili: nostossa" << endl;
    cout << "Paljonko haluat nostaa?: " << endl;

    //ei voi nostaa, jos nosto on negatiivinen tai luku.
    if (amount <= 0 || saldo - amount < 0) {
        cout << "error" << endl;
        return false;
    }

    //muutoin nosto onnistuu.
    cout << "Nosto onnistui!" << endl;
    saldo -= amount;
    return true;
}
