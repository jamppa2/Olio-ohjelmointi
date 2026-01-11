/*
Ensin kirjoita ohjelma main-funktion sisälle pääohjelmaksi. Ohjelman runko voisi olla jotain seuraavan kaltaista:
            1.Arvotaan satunnainen luku
            2.Kysytään pelaajalta arvaus
            3.Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
            3.1. Jos arvaus yhtäsuuri kuin satunnainenluku
            3.2. Jos arvaus pinempi satunnainenluku
            3.3. Jos arvaus suurempi satunnainenluku
            4.Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
            5.Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.

            6.Siirrä tehtävän ohjelma oman funktionsa sisälle niin,
              että sitä kutsutaan main-funktiosta.
              Lisää funktioon arvausten lukumäärän laskenta.
              Käytä funktion nimenä ja prototyyppinä int game();, joka palauttaa arvausten määrän pääohjelmaan.
            7.Muuta toteuttamaasi funktiota siten, että funktiolle
              annetaan parametriksi korkein etsittävä luku (maxnum),
              josta funktio arpoo satunnaisluvun. Esimerkiksi, jos
              tämä luku on 40, niin funktio arpoo luvun väliltä 1-40.
              Pelin loputtua tulosta arvausten määrä ruudulle
              main funktiosta paluuarvoa hyödyntäen. Käytä funktion nimenä ja prototyyppinä: int game(int maxnum);
*/


#include <iostream>

using namespace std;



//prototyyppi
int game(int maxnum);



int main() {
    int maxnum = 40;
    int arvausten_luku = 0;
    arvausten_luku = game(maxnum);
    return 0;
}



int game(int maxnum) {
    int satunnainenluku = 0;
    int arvaus = 0;
    int arvausten_luku = 0;


    //1.Arvotaan satunnainen luku
    srand(time(NULL)); //time palauttaa kellon ajan, jolloin seed muuttuu joka kerta
    satunnainenluku = rand() % maxnum; //maxnum on annettu main():issä

    while(true) {  //!= niin kauan, kun arvaus on eri, homma toistuu. Esim. while(arvaus != satunnainenluku).
        //2.Kysytään pelaajalta arvaus
        cout << "Anna luku? " << endl;
        cin >> arvaus;
        arvausten_luku++; //Arvausten lukumäärä kasvaa yhdellä


        //3.Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //3.1. Jos arvaus yhtäsuuri satunnainenluku
        if(arvaus == satunnainenluku) {
            cout << "Oikein!" << endl;
            //cout << "Arvausten maara: " << arvausten_luku << endl;
            break;
        }
        //3.2. Jos arvaus pinempi satunnainenluku
        if(arvaus < satunnainenluku) {
            cout << "Liian pieni" << endl;
        }
        //3.3. Jos arvaus suurempi satunnainenluku
        if(arvaus > satunnainenluku) {
            cout << "Liian suuri" << endl;
        }
        //4.Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        //5.Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    }
    //Arvausten tulostus voi myös laittaa tänne
    cout << "Arvausten maara: " << arvausten_luku << endl;
    return arvausten_luku;
}
