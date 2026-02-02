#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili() {
    cout << "Olen luottotili: defaultkonstruktorissa!" << endl;
}

//omistaja ja luottoRaja:n nimi voi olla mikä vaan.
Luottotili::Luottotili(string om, double lr) : Pankkitili(om) { //tuodaan omistaja(om) Pankkitili:stä. Aka PERINTÄ.
    cout << "Olen luottotili: parametrikonstruktorissa!" << endl;
    LuottoRaja = lr;
}

//Luottovelan maksu:
bool Luottotili::deposit(double amount) {
    cout << "Olen luottotili: velanmaksussa!" << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "saldo jalkeen: " << amount + saldo << endl;

    //ei voi maksaa velkaa, jos velka on negatiivinen luku.
    if((amount <= 0) || (amount + saldo) > 0) { //Huom. jos (amount + lr) < 0.
        cout << "error" << endl;
        return false;
    }
    //muutoin luottovelan maksu onnistuu.
    cout << "Nosto onnistui!" << endl;
    saldo += amount;    //muutos tapahtuu täällä.
    return true;
}

//Luoton nosto:
bool Luottotili::withdraw(double amount) {
    cout << "Olen luottotili: velannosto!" << endl;
    cout << "Luottoraja: " << LuottoRaja << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "saldo jalkeen: " << saldo - amount << endl;

    //ei voi nostaa, jos nosto on negatiivinen luku.
    if((amount <= 0) || (std::abs(saldo) + amount) > LuottoRaja) {    //abs() jotta voidaan ottaa saldon itseisarvo.
        cout << "error" << endl;
        return false;
    }
    //muutoin nosto onnistuu.
    cout << "Nosto onnistui!" << endl;
    saldo -= amount;
    return true;
}
