// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Umumiy markazga bo'lgan ikkita radiusi  berilgan.  r1, r2, (r1>r2). Ularning yuzlari s1 va s2, ularning ayrmasi s3 aniqlansin.
//s1 = 3.14 * r1, s2 = 3.14 * r2, s3 = 3.14*(r1 - r2)
#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
    int r1 = 6, r2 = 4;
    
    cout << " s1 = " << 3.14 * r1 << endl;
    cout << " s2 = " << 3.14 * r2 << endl;
    cout << " s3 = " << 3.14 * ( r1 - r2 ) << endl;

    return 0; 
}