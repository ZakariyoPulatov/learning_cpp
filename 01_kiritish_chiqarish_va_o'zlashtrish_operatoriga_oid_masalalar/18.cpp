// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Sonlar o'qida a, b, c nuqtalar berilgan. c nuqta a va b nuqtalar orasida joylashgan. ac va bc kesmalar uzunligining ko'paytmasini toping.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 2, b = 6, c = 12;

    cout << " ac va bc kesmalar uzunligimg kopaytmasi = " << ( c - a ) * ( c - b ) << endl;

    return 0;
}