#ifndef GAMENEW_H
#define GAMENEW_H
#include <iostream>
using namespace std;

class GameNew
{
public:
    GameNew(int);
    ~GameNew();
    void play();
private:
    int MaxNumber = 0;
    int playerQuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
    void printGameResult();
protected:

};

#endif // GAMENEW_H
