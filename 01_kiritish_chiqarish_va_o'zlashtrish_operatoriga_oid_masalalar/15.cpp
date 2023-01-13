// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Aylananing yuzasi s berilgan. uning diametri d va radiusi r aniqlansin.  L = 2 * 3.14 * r, s = 3.14 * r*r
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int s = 4;
    float r;

    r = sqrt( s / 3.14 );

    cout << " r = " << r << endl;
    cout << " L = " << 2 * 3.14 * r << endl;

    return 0;
}