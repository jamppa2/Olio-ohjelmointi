/*
    1.  Konstruktorissa parametrinä annetaan maksimiarvo,
        mille välille 1-maxNumber peli arpoo arvattavan luvun.
    2.  Play()-jäsenfunktioon toteutetaan peli
    3.  printGameResult()-jäsenfunktiosta kutsutaan
        kun peli on päättynyt. Se tulostaa oikean vastauksen ja kuinka
        monta arvausta siihen tarvittiin.
    4.  Luokan toteutuksessa täytyy olla molemmat otsikkotiedosto Game.h ja
        luokan toteutus Game.cpp
*/


#include "GameNew.h"
#include <iostream>

using namespace std;

int main() {
    GameNew peli =GameNew(40);
    peli.play();
    return 0;
}
