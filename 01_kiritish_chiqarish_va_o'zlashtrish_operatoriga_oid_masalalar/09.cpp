// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita manfiy bo'lmagan son a va b berilgan. Ularning o'rta geometrigi aniqlansin sqtr(a*b).
#include <iostream>
#include <math.h>

using namespace std;

void n();
void n(int a, int b);

int main()
{   
    n();
    n(2, 10);
    return 0; 
}
void n() {

    int a = 2, b = 10;

    cout << " o'rta arifmetgi = " << sqrt(a*b) << endl;
}
void n(int a, int b) {

    cout << " o'rta arifmetgi = " << sqrt(a*b) << endl;
}