// Sana: 2023.01.21
// Muallif: Zakariyo Pulatov
// Maqsad: Bir kg konfetning narxi berligan (haqiqiy son). 1.2, 1.4, ....2 kg konfetni narxni chiqaruvchu Pr tuzilsain
#include <iostream>

using namespace std;

int main() {

    int sum = 1000;

    for ( float i = 1.2; i <= 2; i = i + 0.2) {
        
        cout << i << " kg " << i * 1000 << "sum\n";
    }
    return 0;
}   