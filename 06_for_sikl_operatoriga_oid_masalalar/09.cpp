// Sana: 2023.01.21
// Muallif: Zakariyo Pulatov
// Maqsad: a va b butun sonlari berilgan (a<b). a dan b gacha bo'lgan butun sonlar kvadratini chiqaruchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a = 1, b = 3;

    for (int i = a; i <= b; i++) {
        cout << i*i*i << endl;
    }

    return 0;
}