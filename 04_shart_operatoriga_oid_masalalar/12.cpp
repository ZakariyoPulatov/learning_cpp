// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta son berilgan. Shu sonlarni kichigini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=60, b=55, c=5000;

    if ((a>c) && (b>c)) {
        cout << " kichigi = " << c << endl;
    } else if ((a<b) && (a<c)) {
        cout << " kichigi = " << a << endl;
    } else {
        cout << " kichigi = " << b << endl;
    }
    return 0;
 }