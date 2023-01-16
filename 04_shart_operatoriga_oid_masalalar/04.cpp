// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta butun son berilgan. Shu sonlar orasidan nechta musbat son borligini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {
    
    int a = 1, b = 2, c = -1;
    int count = 0;

    if (a > 0) {
        count++;
    }

    if (b > 0) {
        count++;
    }

    if (c > 0) {
        count++;
    }

    cout << "musbat sonlar: " << count << " ta\n";

    return 0;
}