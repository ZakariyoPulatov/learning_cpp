// Sana: 2023.01.18
// Muallif: Zakariyo Pulatov
// Maqsad: Doiraning elementlari quyidaga tartibda nomerlangan. 1-radius r, 2-diametr d = 2*r, 3-uzunligi l = 2*3.14*r, 4-doiraning yuzasi s = 3.14*r*r. Shu elementlardan bittasi berilganda qoganlarini topuvchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int r=10, n;

    cout << " tartib raqam kiriting = "; cin >> n;

    switch (n) {

    case 1 : cout << " radiusi = " << r << "ga teng\n"; break;
    case 2 : cout << " diametri = " << 2 * r << "ga teng\n"; break;
    case 3 : cout << " uzunligi = " << 2 * 3.14 * r << "ga teng\n"; break;
    case 4 : cout << " doiraning yuzasi = " << 3.14*r*r << "ga teng\n"; break;

    default: cout << " doiraning bunday elementi uo'q\n"; break;

    }
}