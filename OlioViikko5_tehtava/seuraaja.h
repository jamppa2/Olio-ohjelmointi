#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
using namespace std;    //std = stantard.

class Seuraaja
{
public:
    Seuraaja* next = nullptr;   //nullptr = nullpointter.
    Seuraaja();
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
private:
    string nimi;
};

#endif // SEURAAJA_H
