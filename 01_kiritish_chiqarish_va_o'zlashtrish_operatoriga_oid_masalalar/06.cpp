// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Paralelepepidning tomonlari a, b, c berilgan. Uning hajmi V = a * b * c va to'la srti S = 2*(a*b + b*c + a*c) aniqlansin
#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 3, c = 4;

    cout << " V = " << a * b * c << endl;
    cout << " S = " << 2 * ( a*b + b*c + a*c ) << endl;

    return 0;
}