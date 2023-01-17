// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Butun son berilgan. Agar berilgan son musbat bo'lsa 1 ga oshiring, agar manfiy bo'lsa 2 ga kamaytring.
//         Agar 0 ga teng bo'lsa 10 ga o'zlashtrsin. Hosil bo'lgan sonni ekranga chiqaruvchi programma tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n=0;

    if (n>0) {
        n = n+1;
    } else if (n<0) {
        n = n-2;
    } else {
        n=10;
    }

    cout << " n = " << n << endl;

    return 0;
}