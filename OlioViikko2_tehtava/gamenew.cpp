#include "gamenew.h"



GameNew::GameNew(int n) {
    cout << "Peli luotu" << endl;
    MaxNumber = n;
}

GameNew::~GameNew() {
    cout << "Peli tuhottu" << endl;
}

void GameNew::printGameResult() {
    cout << "Oikein!" << endl;
    cout << "Arvausten maara: " << numOfGuesses << endl;
}

void GameNew::play() {

        srand(time(NULL));
        randomNumber = rand() % MaxNumber;

        while(true) {
            cout << "Anna luku? " << endl;
            cin >> playerQuess;
            numOfGuesses++;

            if(playerQuess == randomNumber) {
                printGameResult();
                break;
            }

            if(playerQuess < randomNumber) {
                cout << "Liian pieni" << endl;
            }

            if(playerQuess > randomNumber) {
                cout << "Liian suuri" << endl;
            }
        }
}
