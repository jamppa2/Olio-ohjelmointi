#include "italianchef.h"

ItalianChef::ItalianChef() {
    cout << "Olen ItalianChefkontstruktorissa" << endl;
}

ItalianChef::ItalianChef(string cN) {
    cout << "Olen ItalianChefinputkontstruktorissa" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef() {
    cout << "Olen ItalianChefkontstruktorissa" << endl;
}

/*
    Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok, ja
    jos on, kutsuu makePizza()-jäsenfunktiota. Muut parametrit ovat ainesten eli
    jauhojen (flour) ja veden (water) määrä. Funktio palauttaa true/false
    sen mukaan oliko salasana oikea.
*/

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour) {
    int numberOfPizza;
    if(pw.compare(password)==0) {
    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizza = makePizza();
    return true;
    }
    else {
        cout << "" << endl;//välilyönti
        cout << "Vaara salasana" << endl;
        return false;
    }
}

int ItalianChef::makePizza() {
    cout << "Tehdaampa pizzaa" << endl;
    cout << "Jauhoja on: " << flour << " ja vetta on: " << water << endl;
    int annos = 0;
    int vesi = water;
    int jauho = flour;

    while(vesi >= 5 && jauho >= 5) {
        annos++;
        vesi = vesi - 5;
        jauho = jauho - 5;
    }
    cout << "Kokki voi valmistaa " << annos << " pizzaa"<< endl;
    cout << "" << endl;//välilyönti
    return annos;
}
