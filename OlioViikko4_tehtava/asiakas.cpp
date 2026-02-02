#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas() {
    cout << "Asiakas: Olen defaultkontrustorissa" << endl;
}
//Huom. miten tieto siirtyy seuraavassa kohdassa!
Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr) {
    cout << "Asiakas: Olen parametrikonstruktorissa!"  << endl;
    nimi = name;
    cout<<"Asiakkuus luotu: " <<nimi<<endl;
}

bool Asiakas::tilisiirto(double amount, Asiakas& kohde) {
    cout<<"Asiakas "<<nimi<<" Siirtaa "<< amount << " Asiakkalle " << kohde.getNimi()<<endl;
    bool success = nosto(amount);
    if(success) {
        kohde.talletus(amount);
        return true;
    }
    else {
        cout<<"Tilisiirto epaonnistui"<<endl;
        return false;
    }
}

string Asiakas::getNimi() {
    return nimi;
}

void Asiakas::showSaldo() {
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount) {
    cout<<"Asiakas "<<nimi<<" tallettaa" <<endl;
    bool success= kayttotili.deposit(amount);
    if(!success)
    {
        cout<<"Talletus epaonnistui"<<endl;
    }
    return success;
}

bool Asiakas::nosto(double amount) {
    cout<<"Asiakas "<<nimi<<" nostaa"<<endl;
    bool success= kayttotili.withdraw(amount);
    if(!success)
    {
        cout<<"nosto epaonnistui"<<endl;
    }
    return success;
}

bool Asiakas::luotonMaksu(double amount) {
    cout<<"Asiakas "<<nimi<<" maksaa luottoa" <<endl;
    bool success= luottotili.deposit(amount);
    if(!success)
    {
        cout<<"Maksu epaonnistui"<<endl;
    }
    return success;
}

bool Asiakas::luotonNosto(double amount) {
    cout<<"Asiakas "<<nimi<<" nostaa luottotililta" <<endl;
    bool success= luottotili.withdraw(amount);
    if(!success)
    {
        cout<<"nosto epaonnistui"<<endl;
    }
    return success;
}
