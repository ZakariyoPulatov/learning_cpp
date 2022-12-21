//Sana: 2022.12.21
//Muallif: Zakariyo Pulatov
//Maqsad: Kun botishidan boshlab n sekund vaqt o'tti. Kun botishidan boshlab qancha soat, minut va sekund o'tganini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main ()
{
    int sekund = 7200;

    cout << sekund << " sekudda= " << sekund / 3600 << " soat " << sekund / 60 << " minut " << sekund / 1 << " sekund o'tdi" << endl;

    return 0;
}