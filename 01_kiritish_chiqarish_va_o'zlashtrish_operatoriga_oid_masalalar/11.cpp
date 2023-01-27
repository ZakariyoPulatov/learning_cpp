// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Nolga teng bo'lmagan ikkita son berilgan. Ularning yig'indisini, ko'paytmasini va har biring modulini aniqlansin.
#include <iostream>
#include <math.h>

using namespace std;

void yigindisi() {

    int a = 2, b = 3;

    cout << " a + b = " << a + b << endl;
}

void kopaytmasi() {

    int a = 2, b = 3;

    cout << " a * b = " << a * b << endl;
}

void moduli() {

    int a = 2, b = 3;

    cout << " modul a = " << abs(a) << ", modul b = " << abs(b) << endl;
}
int main() {

    yigindisi();
    kopaytmasi();
    moduli();

    return 0;
}