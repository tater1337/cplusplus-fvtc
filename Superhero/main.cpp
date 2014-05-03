#include <iostream>
#include "../businessLayer.h"
#include "../Collection.h"
#include "SuperHero.h"
using namespace std;

int main()
{

    SuperHero s("Captain Obvious",
                "obviousness",
                "john doe",
                0);
    //s.set_name("Capotain Obvious"); not wrote yet
    cout << s << endl;
    s.RevealSecretIdentity();
    cout << s << endl;

    cout << "************************" << endl;

    SuperHero hulk;
    hulk.set_name("incerdible hulk");
    hulk.set_power("gama strength");
    hulk.set_secret("dr. Banner");
    hulk.set_age(12);
    cout << hulk << endl;

    cout << "Hello world!" << endl;
    return 0;
}
