#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    int flour;
    int water;
    string password = "pizza";
    int makePizza();
protected:
};

#endif // ITALIANCHEF_H
