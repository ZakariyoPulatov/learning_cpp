// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: To'g'ri uchburchakning katetlari a va b berilgan. Uning gipatenuzasi c va perimetri p aniqlansin. c = sqrt(a*a + b*b), p = a+b+c.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 5, b = 6;
    float c;

    c = sqrt( a*a + b*b );

    cout << " p = " << a + b + c << endl;
    cout << " gipatenuza = " << c << endl;

    return 0;
}