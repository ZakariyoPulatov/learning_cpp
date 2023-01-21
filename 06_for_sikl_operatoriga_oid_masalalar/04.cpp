// Sana: 2023.01.20
// Muallif: Zakariyo Pulatov
// Maqsad: Bir kg konfetning narxi berligan (haqiqiy son). 1, 2, ...., 10 kg konfetni narxni chiqaruvchu Pr tuzilsain
#include <iostream>

using namespace std;

int main() {

    int sum = 5000;

    for ( int i = 1; i <= 10; i++) {

        cout << i << " kg " << i * sum << " ming som\n";
    }

    return 0;
}