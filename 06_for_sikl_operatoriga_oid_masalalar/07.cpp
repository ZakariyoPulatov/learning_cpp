// Sana: 2023.01.21
// Muallif: Zakariyo Pulatov
// Maqsad: a va b butun sonlari berilgan (a<b). a dan b gacha bo'lgan butun sonlar yig'indisini chiqaruchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a = 1, b = 10, count = 0;

    for ( int i = a; i <= b; i++) {

        cout << i << endl;

        count = count + i;
    }

    cout << count << endl;
    return 0;
}