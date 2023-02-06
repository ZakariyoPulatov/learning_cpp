// Sana: 2023.01.20
// Muallif: Zakariyo Pulatov
// Maqsad: a va b butun sonlar berilgan (a<b). a va b sonlar orasidagi barcha butun sonlarni (a va b dan tashqari) kamayish tartibda chiqaruvchi va chiqarilgan sonlar sonini chiqaruvchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a = 1, b = 8;

    for ( int i = b - 1; i > a; i--) {

        cout << i << endl;
    }

    return 0;
}
