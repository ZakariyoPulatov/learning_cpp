// Sana: 2023.01.20
// Muallif: Zakariyo Pulatov
// Maqsad: Bir kg konfetning narxi berligan (haqiqiy son). 0.1, 0.2, ....0.9, 1 kg konfetni narxni chiqaruvchu Pr tuzilsain
#include <iostream>

using namespace std;

int main() {

    int sum = 2000; 

    for ( float i = 0.1; i <= 1; i = i + 0.1) {

        cout << i << " kg " << i * sum << " ming som\n";
    }
    return 0;
}