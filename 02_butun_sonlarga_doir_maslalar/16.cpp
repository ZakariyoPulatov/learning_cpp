//Sana: 2022.12.21
//Muallif; Zakariyo Pulatov
//Maqsad: Uch xonali son berilgan. Uning o'nliklar xonasidagi raqam bilan
//birliklar xonasidagi raqamnialmashtirishdan hosil bo'lgan sonni aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main ()
{
    int kirish = 123;

    cout << kirish << "chiqish= " << (kirish/100*100) + (kirish%100/10) + (kirish%10*10) << endl;

    return 0;
}

