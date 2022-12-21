//Sana: 2022.12.20
//Muallif: zakariyo  Pulatov
//Maqsad: Uch xonali son berilgan. Uning raqamlarini teskari tartibda yozishdan hosil bo'lgan sonni aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main ()
{
    int son = 456;

    cout << son << " sonning teskari ko'rinishi= " << (son/100) + (son%100/10*10) + (son%10*100) << endl;

    return 0;
}