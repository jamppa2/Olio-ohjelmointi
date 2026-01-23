#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>

using namespace std;

int main()
{
    string kokinNimi;
    Chef kokki_1("Lars");
    //Chef kokki_2();
    kokinNimi = kokki_1.getName();

    cout << "Main kokin nimi on: " << kokinNimi << endl;
    kokki_1.makeSalad(10);
    kokki_1.makeSoup(4);
    kokki_1.makeSalad(18);

    kokki_1.makeSalad(3);
    kokki_1.makeSoup(2);
    kokki_1.makeSalad(31);

    ItalianChef it_kokki_1("Luigi");
    ItalianChef it_kokki_2("Pablo");
    it_kokki_2.makeSalad(12);
    it_kokki_2.makeSoup(1);

    it_kokki_1.askSecret("pizza",5,5);
    it_kokki_2.askSecret("pizza",10,10);
    return 0;
}
