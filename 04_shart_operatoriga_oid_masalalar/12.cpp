// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta son berilgan. Shu sonlarni kichigini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=60, b=55, c=10;

    if ((a>b) && (b>c)) {
        cout << " kichigi = " << c << endl;

    }else if ((a<b) && (a<c)) {
        cout << " kichigi = " << a << endl;

    }else if ((a>b) && (c>a)) {
        cout << " kichigi = " << b << endl;
    }
    return 0;
 }