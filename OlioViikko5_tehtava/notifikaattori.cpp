#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() {
    cout << "Notifikaattori konstruktorissa!" << endl;
}

void Notifikaattori::lisaa(Seuraaja* lisSeuraajaPtr) {
   cout << "Olen lisaa!" << endl;
    if(lisSeuraajaPtr == nullptr) return;
    if(seuraajat == nullptr) {                  //jos, ei ole vielä seuraajalistaa.
        seuraajat = lisSeuraajaPtr;             //Lisätään ensimmäinen ja viimeinen seuraaja.
        return;
    }
    lisSeuraajaPtr->next = seuraajat;
    seuraajat = lisSeuraajaPtr;
}


void Notifikaattori::poista(Seuraaja* poistaSeuraajaPtr) {
    cout << "Olen poista!" << endl;
    if(poistaSeuraajaPtr == nullptr) return;
    if(seuraajat == nullptr) return;
    if(seuraajat == poistaSeuraajaPtr) {
        seuraajat = seuraajat ->next;
        return;
    }
    Seuraaja* seurTempNext = seuraajat->next;
    Seuraaja* seurTempPrev = seuraajat;

    while(seurTempPrev->next != nullptr) {
        if(seurTempNext == poistaSeuraajaPtr) {
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }
    if(seurTempNext == poistaSeuraajaPtr) {
        seurTempPrev->next = nullptr;
    }
}

void Notifikaattori::tulosta() {
    if(seuraajat == nullptr) {
        cout << "Ei seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext =seuraajat;

    while(seurTempNext->next != nullptr) {
        cout << seurTempNext->getNimi() << endl;
        seurTempNext = seurTempNext->next;
    }
    cout << seurTempNext->getNimi() << endl;
}

void Notifikaattori::postita(string viesti) {
    if(seuraajat == nullptr) {
        cout << "Ei seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext =seuraajat;

    while(seurTempNext->next != nullptr) {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }
    cout << seurTempNext->getNimi() << endl;
}

