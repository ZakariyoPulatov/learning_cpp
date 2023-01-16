// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta son berilgan. Shu sonlarni avval kichigini keyin kattasini ekranga chiqaruvchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=8, b=1, c=3;

    if ((a<b) && (a<c)) {
        cout << " eng kichigi = " << a << endl;

    }else if ((a>b) && (b<c)) {
        cout << " eng kichigi = " << b << endl;

    }else if ((a>c) && (b>c)) {
        cout << " eng kichigi = " << c << endl;
    
         return 0;
         
    }if ((a>b) && (a>c)) {
        cout << " eng kattasi = " << a << endl;

    }else if ((a<b) && (b>c)) {
        cout << " eng kattasi = " << b << endl;

    }else if ((a<c) && (b<c)) {
        cout << " eng kattasi = " << c << endl;
    }
    return 0;
}