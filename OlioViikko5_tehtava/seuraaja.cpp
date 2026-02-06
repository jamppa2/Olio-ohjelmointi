#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja() {
    cout << "Seuraaja konstruktorissa!" << endl;
}

Seuraaja::Seuraaja(string aNimi) {  //aNimi = annettuNimi
    cout << "Seuraaja parametri konstruktorissa!" << endl;
    nimi = aNimi;
}

string Seuraaja::getNimi() {
    cout << "Olen getNimi:ssa!" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti) {
    cout << "Olen paivitys:ksessä!" << endl;
    cout << "Viesti: " << viesti << endl;

}
