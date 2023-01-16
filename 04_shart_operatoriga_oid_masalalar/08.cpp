// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita butun son berilgan. Shu sonlarning avval kattasini keyin kichigini ekranga chiqaruchchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=8, b=5;

    if (a>b) {
        cout << " kattasi = " << a << endl;
        cout << " kichigi = " << b << endl;
    } else {
        cout << " kattasi = " << b << endl; 
        cout << " kichigi = " << a << endl;
    }
        return 0;
}