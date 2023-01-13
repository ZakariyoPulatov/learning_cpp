// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Aylananing uzunligi l berilgan. Uning radiusi r va yuzasi s aniqlansin. l = 2 * 3.14 * r, s = 3.14 * r*r.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int l = 10;
    float r;

    r = l / 2 * 3.14;

    cout << " r = " << r << endl;
    cout << " s = " << 3.14 * r*r << endl;

    return 0;
}